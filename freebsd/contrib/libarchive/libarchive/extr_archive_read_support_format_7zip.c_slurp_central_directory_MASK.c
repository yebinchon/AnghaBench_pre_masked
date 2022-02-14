
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct archive_read {int archive; } ;
struct TYPE_6__ {TYPE_2__* folders; } ;
struct TYPE_8__ {TYPE_1__ ci; } ;
struct _7zip {scalar_t__ header_crc32; int header_is_encoded; int header_is_being_read; scalar_t__ pack_stream_bytes_unconsumed; scalar_t__ uncompressed_buffer_bytes_remaining; scalar_t__ folder_outbytes_remaining; scalar_t__ pack_stream_index; scalar_t__ pack_stream_remaining; TYPE_3__ si; scalar_t__ header_bytes_remaining; scalar_t__ has_encrypted_entries; scalar_t__ header_offset; scalar_t__ stream_offset; scalar_t__ seek_base; } ;
struct _7z_header_info {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ int64_t ;
struct TYPE_7__ {scalar_t__ digest; int digest_defined; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 unsigned char* FUNC_0 (struct archive_read*,int,scalar_t__*) ;
 int FUNC_1 (struct archive_read*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct archive_read*,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (unsigned char const*) ;
 scalar_t__ FUNC_4 (unsigned char const*) ;
 int FUNC_5 (int *,int,char*,...) ;
 scalar_t__ FUNC_6 (int ,unsigned char const*,int) ;
 int FUNC_7 (struct archive_read*,TYPE_3__*) ;
 int VAR_8 ;
 int FUNC_8 (TYPE_3__*) ;
 unsigned char* FUNC_9 (struct archive_read*,int) ;

 unsigned char const VAR_9 ;

 scalar_t__ FUNC_10 (unsigned char const*,char*,int) ;
 int FUNC_11 (TYPE_3__*,int ,int) ;
 int FUNC_12 (struct archive_read*,struct _7z_header_info*,int) ;
 int FUNC_13 (struct archive_read*) ;
 int FUNC_14 (struct archive_read*) ;
 int FUNC_15 (struct archive_read*,TYPE_2__*,int) ;
 int FUNC_16 (struct archive_read*,scalar_t__) ;

__attribute__((used)) static int
FUNC_17(struct archive_read *VAR_10, struct _7zip *VAR_11,
    struct _7z_header_info *VAR_12)
{
 const unsigned char *VAR_13;
 uint64_t VAR_14;
 uint64_t VAR_15;
 uint32_t VAR_16;
 ssize_t VAR_17;
 int VAR_18, VAR_19;

 if ((VAR_13 = FUNC_0(VAR_10, 32, &VAR_17)) == ((void*)0))
  return (VAR_2);

 if ((VAR_13[0] == 'M' && VAR_13[1] == 'Z') || FUNC_10(VAR_13, "\x7F\x45LF", 4) == 0) {

  VAR_19 = FUNC_16(VAR_10, VAR_17);
  if (VAR_19 < VAR_4)
   return (VAR_19);
  if ((VAR_13 = FUNC_0(VAR_10, 32, &VAR_17)) == ((void*)0))
   return (VAR_2);
 }
 VAR_11->seek_base += 32;

 if (FUNC_10(VAR_13, VAR_7, 6) != 0) {
  FUNC_5(&VAR_10->archive, -1, "Not 7-Zip archive file");
  return (VAR_2);
 }


 if (FUNC_6(0, (const unsigned char *)VAR_13 + 12, 20)
     != FUNC_3(VAR_13 + 8)) {
  FUNC_5(&VAR_10->archive, -1, "Header CRC error");
  return (VAR_2);
 }

 VAR_14 = FUNC_4(VAR_13 + 12);
 VAR_15 = FUNC_4(VAR_13 + 20);
 VAR_16 = FUNC_3(VAR_13 + 28);

 if (VAR_15 == 0)

  return (VAR_0);

 if (((int64_t)VAR_14) < 0) {
  FUNC_5(&VAR_10->archive, -1, "Malformed 7-Zip archive");
  return (VAR_2);
 }
 FUNC_1(VAR_10, 32);
 if (VAR_14 != 0) {
  if (VAR_17 >= (ssize_t)VAR_14)
   FUNC_1(VAR_10, VAR_14);
  else if (FUNC_2(VAR_10,
      VAR_14 + VAR_11->seek_base, VAR_6) < 0)
   return (VAR_2);
 }
 VAR_11->stream_offset = VAR_14;
 VAR_11->header_offset = VAR_14;
 VAR_11->header_bytes_remaining = VAR_15;
 VAR_11->header_crc32 = 0;
 VAR_11->header_is_encoded = 0;
 VAR_11->header_is_being_read = 1;
 VAR_11->has_encrypted_entries = 0;
 VAR_18 = 1;

 if ((VAR_13 = FUNC_9(VAR_10, 1)) == ((void*)0)) {
  FUNC_5(&VAR_10->archive,
      VAR_1,
      "Truncated 7-Zip file body");
  return (VAR_2);
 }

 switch (VAR_13[0]) {
 case 129:




  VAR_19 = FUNC_7(VAR_10, &(VAR_11->si));


  if (VAR_19 == 0 && VAR_11->header_crc32 != VAR_16) {
   FUNC_5(&VAR_10->archive, -1,
       "Damaged 7-Zip archive");
   VAR_19 = -1;
  }
  if (VAR_19 == 0) {
   if (VAR_11->si.ci.folders[0].digest_defined)
    VAR_16 = VAR_11->si.ci.folders[0].digest;
   else
    VAR_18 = 0;
   if (VAR_11->pack_stream_bytes_unconsumed)
    FUNC_13(VAR_10);
   VAR_19 = FUNC_15(VAR_10, VAR_11->si.ci.folders, 1);
   if (VAR_19 == 0) {
    VAR_11->header_bytes_remaining =
     VAR_11->folder_outbytes_remaining;
    VAR_19 = FUNC_14(VAR_10);
   }
  }

  FUNC_8(&(VAR_11->si));
  FUNC_11(&(VAR_11->si), 0, sizeof(VAR_11->si));
  if (VAR_19 < 0)
   return (VAR_2);
  VAR_11->header_is_encoded = 1;
  VAR_11->header_crc32 = 0;

 case 128:



  VAR_8 = 0;
  VAR_19 = FUNC_12(VAR_10, VAR_12, VAR_11->header_is_encoded);
  if (VAR_19 < 0) {
   if (VAR_8 == VAR_5)
    FUNC_5(&VAR_10->archive, -1,
        "Couldn't allocate memory");
   else
    FUNC_5(&VAR_10->archive, -1,
        "Damaged 7-Zip archive");
   return (VAR_2);
  }




  if ((VAR_13 = FUNC_9(VAR_10, 1)) == ((void*)0) ||*VAR_13 != VAR_9) {
   FUNC_5(&VAR_10->archive, -1,
       "Malformed 7-Zip archive");
   return (VAR_2);
  }


  if (VAR_18 && VAR_11->header_crc32 != VAR_16) {
   FUNC_5(&VAR_10->archive, -1,
       "Malformed 7-Zip archive");
   return (VAR_2);
  }
  break;
 default:
  FUNC_5(&VAR_10->archive, -1,
      "Unexpected Property ID = %X", VAR_13[0]);
  return (VAR_2);
 }


 VAR_11->pack_stream_remaining = 0;
 VAR_11->pack_stream_index = 0;
 VAR_11->folder_outbytes_remaining = 0;
 VAR_11->uncompressed_buffer_bytes_remaining = 0;
 VAR_11->pack_stream_bytes_unconsumed = 0;
 VAR_11->header_is_being_read = 0;

 return (VAR_3);
}
