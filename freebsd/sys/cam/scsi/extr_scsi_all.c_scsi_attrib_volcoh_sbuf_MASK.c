
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef char uint8_t ;
typedef char uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int tmp_val ;
struct scsi_mam_attribute_header {char* length; char* id; char* attribute; } ;
struct sbuf {int dummy; } ;


 scalar_t__ SCSI_LTFS_STR_LEN ;
 int SCSI_LTFS_STR_NAME ;
 size_t SCSI_LTFS_UUID_LEN ;
 int SCSI_LTFS_VER0_LEN ;
 int SCSI_LTFS_VER1_LEN ;
 int sbuf_hexdump (struct sbuf*,char*,int,int *,int ) ;
 int sbuf_printf (struct sbuf*,char*,...) ;
 int scsi_2btoul (char*) ;
 char scsi_3btoul (char*) ;
 char scsi_4btoul (char*) ;
 char scsi_8btou64 (char*) ;
 int snprintf (char*,int,char*,...) ;
 scalar_t__ strncmp (char*,int ,scalar_t__) ;

int
scsi_attrib_volcoh_sbuf(struct sbuf *sb, struct scsi_mam_attribute_header *hdr,
    uint32_t valid_len, uint32_t flags,
    uint32_t output_flags, char *error_str,
    int error_str_len)
{
 size_t avail_len;
 uint32_t field_size;
 uint64_t tmp_val;
 uint8_t *cur_ptr;
 int retval;
 int vcr_len, as_len;

 retval = 0;
 tmp_val = 0;

 field_size = scsi_2btoul(hdr->length);
 avail_len = valid_len - sizeof(*hdr);
 if (field_size > avail_len) {
  if (error_str != ((void*)0)) {
   snprintf(error_str, error_str_len, "Available "
     "length of attribute ID 0x%.4x %zu < field "
     "length %u", scsi_2btoul(hdr->id), avail_len,
     field_size);
  }
  retval = 1;
  goto bailout;
 } else if (field_size == 0) {





  goto bailout;
 }
 cur_ptr = hdr->attribute;
 vcr_len = *cur_ptr;
 cur_ptr++;

 sbuf_printf(sb, "\n\tVolume Change Reference Value:");

 switch (vcr_len) {
 case 0:
  if (error_str != ((void*)0)) {
   snprintf(error_str, error_str_len, "Volume Change "
     "Reference value has length of 0");
  }
  retval = 1;
  goto bailout;
  break;
 case 1:
  tmp_val = *cur_ptr;
  break;
 case 2:
  tmp_val = scsi_2btoul(cur_ptr);
  break;
 case 3:
  tmp_val = scsi_3btoul(cur_ptr);
  break;
 case 4:
  tmp_val = scsi_4btoul(cur_ptr);
  break;
 case 8:
  tmp_val = scsi_8btou64(cur_ptr);
  break;
 default:
  sbuf_printf(sb, "\n");
  sbuf_hexdump(sb, cur_ptr, vcr_len, ((void*)0), 0);
  break;
 }
 if (vcr_len <= 8)
  sbuf_printf(sb, " 0x%jx\n", (uintmax_t)tmp_val);

 cur_ptr += vcr_len;
 tmp_val = scsi_8btou64(cur_ptr);
 sbuf_printf(sb, "\tVolume Coherency Count: %ju\n", (uintmax_t)tmp_val);

 cur_ptr += sizeof(tmp_val);
 tmp_val = scsi_8btou64(cur_ptr);
 sbuf_printf(sb, "\tVolume Coherency Set Identifier: 0x%jx\n",
      (uintmax_t)tmp_val);





 cur_ptr += sizeof(tmp_val);
 as_len = scsi_2btoul(cur_ptr);
 cur_ptr += sizeof(uint16_t);
 sbuf_printf(sb, "\tApplication Client Specific Information: ");
 if (((as_len == SCSI_LTFS_VER0_LEN)
   || (as_len == SCSI_LTFS_VER1_LEN))
  && (strncmp(cur_ptr, SCSI_LTFS_STR_NAME, SCSI_LTFS_STR_LEN) == 0)) {
  sbuf_printf(sb, "LTFS\n");
  cur_ptr += SCSI_LTFS_STR_LEN + 1;
  if (cur_ptr[SCSI_LTFS_UUID_LEN] != '\0')
   cur_ptr[SCSI_LTFS_UUID_LEN] = '\0';
  sbuf_printf(sb, "\tLTFS UUID: %s\n", cur_ptr);
  cur_ptr += SCSI_LTFS_UUID_LEN + 1;

  sbuf_printf(sb, "\tLTFS Version: %d\n", *cur_ptr);
 } else {
  sbuf_printf(sb, "Unknown\n");
  sbuf_hexdump(sb, cur_ptr, as_len, ((void*)0), 0);
 }

bailout:
 return (retval);
}
