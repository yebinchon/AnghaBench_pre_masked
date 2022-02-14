
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
typedef int total_length ;
struct section_header_block {void* minor_version; void* major_version; scalar_t__ byte_order_magic; } ;
struct pcap_ng_sf {int user_tsresol; scalar_t__ max_blocksize; TYPE_2__* ifaces; } ;
struct interface_description_block {scalar_t__ snaplen; void* linktype; } ;
struct block_trailer {int dummy; } ;
struct block_header {scalar_t__ total_length; scalar_t__ block_type; } ;
struct block_cursor {int block_type; } ;
struct TYPE_9__ {int tstamp_precision; } ;
struct TYPE_10__ {int swapped; int bufsize; scalar_t__ snapshot; struct TYPE_10__* buffer; int cleanup_op; int next_packet_op; void* linktype; scalar_t__ linktype_ext; scalar_t__ tzoff; TYPE_1__ opt; void* version_minor; void* version_major; struct pcap_ng_sf* priv; } ;
typedef TYPE_2__ pcap_t ;
typedef int magic ;
typedef int byte_order_magic ;
typedef scalar_t__ bpf_u_int32 ;
typedef int FILE ;





 scalar_t__ VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;


 scalar_t__ FUNC_1 (scalar_t__) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (TYPE_2__*,struct block_cursor*,char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int *) ;
 size_t FUNC_5 (scalar_t__*,int,int,int *) ;
 int FUNC_6 (TYPE_2__*) ;
 struct interface_description_block* FUNC_7 (struct block_cursor*,int,char*) ;
 void* FUNC_8 (void*) ;
 TYPE_2__* FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (void*) ;
 int FUNC_11 (char*,int ,int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_12 (char*,int) ;
 int FUNC_13 (char*,int ,char*,...) ;
 int FUNC_14 (int *,TYPE_2__*,struct block_cursor*,char*) ;
 int FUNC_15 (int *,int *,scalar_t__,int,char*) ;

pcap_t *
FUNC_16(bpf_u_int32 VAR_9, FILE *VAR_10, u_int VAR_11, char *VAR_12,
    int *VAR_13)
{
 size_t VAR_14;
 bpf_u_int32 VAR_15;
 bpf_u_int32 VAR_16;
 struct block_header *VAR_17;
 struct section_header_block *VAR_18;
 pcap_t *VAR_19;
 int VAR_20 = 0;
 struct pcap_ng_sf *VAR_21;
 int VAR_22;
 struct block_cursor VAR_23;
 struct interface_description_block *VAR_24;




 *VAR_13 = 0;





 if (VAR_9 != VAR_0) {
  return (((void*)0));
 }
 VAR_14 = FUNC_5(&VAR_15, 1, sizeof(VAR_15), VAR_10);
 if (VAR_14 < sizeof(VAR_15)) {
  if (FUNC_4(VAR_10)) {
   FUNC_11(VAR_12, VAR_3,
       VAR_6, "error reading dump file");
   *VAR_13 = 1;
   return (((void*)0));
  }





  return (((void*)0));
 }
 VAR_14 = FUNC_5(&VAR_16, 1, sizeof(VAR_16), VAR_10);
 if (VAR_14 < sizeof(VAR_16)) {
  if (FUNC_4(VAR_10)) {
   FUNC_11(VAR_12, VAR_3,
       VAR_6, "error reading dump file");
   *VAR_13 = 1;
   return (((void*)0));
  }





  return (((void*)0));
 }
 if (VAR_16 != VAR_1) {
  VAR_16 = FUNC_1(VAR_16);
  if (VAR_16 != VAR_1) {



   return (((void*)0));
  }
  VAR_20 = 1;
  VAR_15 = FUNC_1(VAR_15);
 }




 if (VAR_15 < sizeof(*VAR_17) + sizeof(*VAR_18) + sizeof(struct block_trailer)) {
  FUNC_13(VAR_12, VAR_3,
      "Section Header Block in pcapng dump file has a length of %u < %lu",
      VAR_15,
      (unsigned long)(sizeof(*VAR_17) + sizeof(*VAR_18) + sizeof(struct block_trailer)));
  *VAR_13 = 1;
  return (((void*)0));
 }





 VAR_19 = FUNC_12(VAR_12, sizeof (struct pcap_ng_sf));
 if (VAR_19 == ((void*)0)) {

  *VAR_13 = 1;
  return (((void*)0));
 }
 VAR_19->swapped = VAR_20;
 VAR_21 = VAR_19->priv;




 switch (VAR_11) {

 case 129:
  VAR_21->user_tsresol = 1000000;
  break;

 case 128:
  VAR_21->user_tsresol = 1000000000;
  break;

 default:
  FUNC_13(VAR_12, VAR_3,
      "unknown time stamp resolution %u", VAR_11);
  FUNC_6(VAR_19);
  *VAR_13 = 1;
  return (((void*)0));
 }

 VAR_19->opt.tstamp_precision = VAR_11;
 VAR_19->bufsize = 2048;
 if (VAR_19->bufsize < VAR_15)
  VAR_19->bufsize = VAR_15;
 VAR_19->buffer = FUNC_9(VAR_19->bufsize);
 if (VAR_19->buffer == ((void*)0)) {
  FUNC_13(VAR_12, VAR_3, "out of memory");
  FUNC_6(VAR_19);
  *VAR_13 = 1;
  return (((void*)0));
 }
 VAR_21->max_blocksize = FUNC_0(VAR_2);





 VAR_17 = (struct block_header *)VAR_19->buffer;
 VAR_18 = (struct section_header_block *)((u_char *)VAR_19->buffer + sizeof(struct block_header));
 VAR_17->block_type = VAR_9;
 VAR_17->total_length = VAR_15;
 VAR_18->byte_order_magic = VAR_16;
 if (FUNC_15(VAR_10,
     (u_char *)VAR_19->buffer + (sizeof(VAR_9) + sizeof(VAR_15) + sizeof(VAR_16)),
     VAR_15 - (sizeof(VAR_9) + sizeof(VAR_15) + sizeof(VAR_16)),
     1, VAR_12) == -1)
  goto fail;

 if (VAR_19->swapped) {



  VAR_18->major_version = FUNC_2(VAR_18->major_version);
  VAR_18->minor_version = FUNC_2(VAR_18->minor_version);




 }

 if (! (VAR_18->major_version == VAR_4 &&
        VAR_18->minor_version == VAR_5)) {
  FUNC_13(VAR_12, VAR_3,
      "unsupported pcapng savefile version %u.%u",
      VAR_18->major_version, VAR_18->minor_version);
  goto fail;
 }
 VAR_19->version_major = VAR_18->major_version;
 VAR_19->version_minor = VAR_18->minor_version;




 VAR_19->opt.tstamp_precision = VAR_11;




 for (;;) {



  VAR_22 = FUNC_14(VAR_10, VAR_19, &VAR_23, VAR_12);
  if (VAR_22 == 0) {

   FUNC_13(VAR_12, VAR_3,
       "the capture file has no Interface Description Blocks");
   goto fail;
  }
  if (VAR_22 == -1)
   goto fail;
  switch (VAR_23.block_type) {

  case 132:




   VAR_24 = FUNC_7(&VAR_23, sizeof(*VAR_24),
       VAR_12);
   if (VAR_24 == ((void*)0))
    goto fail;




   if (VAR_19->swapped) {
    VAR_24->linktype = FUNC_2(VAR_24->linktype);
    VAR_24->snaplen = FUNC_1(VAR_24->snaplen);
   }




   if (!FUNC_3(VAR_19, &VAR_23, VAR_12))
    goto fail;

   goto done;

  case 133:
  case 130:
  case 131:





   FUNC_13(VAR_12, VAR_3,
       "the capture file has a packet block before any Interface Description Blocks");
   goto fail;

  default:



   break;
  }
 }

done:
 VAR_19->tzoff = 0;
 VAR_19->snapshot = VAR_24->snaplen;
 if (VAR_19->snapshot <= 0) {
  VAR_19->snapshot = FUNC_10(VAR_24->linktype);
 }
 VAR_19->linktype = FUNC_8(VAR_24->linktype);
 VAR_19->linktype_ext = 0;






 if (FUNC_0(FUNC_10(VAR_19->linktype)) > VAR_21->max_blocksize)
  VAR_21->max_blocksize = FUNC_0(FUNC_10(VAR_19->linktype));

 VAR_19->next_packet_op = VAR_8;
 VAR_19->cleanup_op = VAR_7;

 return (VAR_19);

fail:
 FUNC_6(VAR_21->ifaces);
 FUNC_6(VAR_19->buffer);
 FUNC_6(VAR_19);
 *VAR_13 = 1;
 return (((void*)0));
}
