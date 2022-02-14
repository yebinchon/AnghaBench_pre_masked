
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
struct pcap_sf_pkthdr {int dummy; } ;
struct pcap_sf_patched_pkthdr {int dummy; } ;
struct pcap_sf {int hdrsize; void* lengths_swapped; void* scale_type; } ;
struct pcap_file_header {int version_major; int version_minor; scalar_t__ thiszone; scalar_t__ sigfigs; scalar_t__ snaplen; scalar_t__ linktype; scalar_t__ magic; } ;
struct TYPE_6__ {int tstamp_precision; } ;
struct TYPE_7__ {int swapped; int version_major; int version_minor; scalar_t__ tzoff; scalar_t__ snapshot; scalar_t__ linktype; int bufsize; int cleanup_op; int * buffer; TYPE_1__ opt; struct pcap_sf* priv; int next_packet_op; int linktype_ext; } ;
typedef TYPE_2__ pcap_t ;
typedef int hdr ;
typedef scalar_t__ bpf_u_int32 ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 void* VAR_11 ;
 void* FUNC_3 (int) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_4 (int *) ;
 size_t FUNC_5 (char*,int,int,int *) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*,int ,int ,char*) ;
 int VAR_14 ;
 TYPE_2__* FUNC_11 (char*,int) ;
 int FUNC_12 (char*,int ,char*,...) ;
 int VAR_15 ;

pcap_t *
FUNC_13(bpf_u_int32 VAR_16, FILE *VAR_17, u_int VAR_18, char *VAR_19,
    int *VAR_20)
{
 struct pcap_file_header VAR_21;
 size_t VAR_22;
 pcap_t *VAR_23;
 int VAR_24 = 0;
 struct pcap_sf *VAR_25;




 *VAR_20 = 0;






 if (VAR_16 != VAR_12 && VAR_16 != VAR_1 &&
     VAR_16 != VAR_4) {
  VAR_16 = FUNC_2(VAR_16);
  if (VAR_16 != VAR_12 && VAR_16 != VAR_1 &&
      VAR_16 != VAR_4)
   return (((void*)0));
  VAR_24 = 1;
 }





 VAR_21.magic = VAR_16;
 VAR_22 = FUNC_5(((char *)&VAR_21) + sizeof VAR_21.magic, 1,
     sizeof(VAR_21) - sizeof(VAR_21.magic), VAR_17);
 if (VAR_22 != sizeof(VAR_21) - sizeof(VAR_21.magic)) {
  if (FUNC_4(VAR_17)) {
   FUNC_10(VAR_19, VAR_6,
       VAR_13, "error reading dump file");
  } else {
   FUNC_12(VAR_19, VAR_6,
       "truncated dump file; tried to read %lu file header bytes, only got %lu",
       (unsigned long)sizeof(VAR_21),
       (unsigned long)VAR_22);
  }
  *VAR_20 = 1;
  return (((void*)0));
 }




 if (VAR_24) {
  VAR_21.version_major = FUNC_3(VAR_21.version_major);
  VAR_21.version_minor = FUNC_3(VAR_21.version_minor);
  VAR_21.thiszone = FUNC_2(VAR_21.thiszone);
  VAR_21.sigfigs = FUNC_2(VAR_21.sigfigs);
  VAR_21.snaplen = FUNC_2(VAR_21.snaplen);
  VAR_21.linktype = FUNC_2(VAR_21.linktype);
 }

 if (VAR_21.version_major < VAR_7) {
  FUNC_12(VAR_19, VAR_6,
      "archaic pcap savefile format");
  *VAR_20 = 1;
  return (((void*)0));
 }





 if (! ((VAR_21.version_major == VAR_7 &&
  VAR_21.version_minor <= VAR_8) ||
        (VAR_21.version_major == 543 &&
  VAR_21.version_minor == 0))) {
  FUNC_12(VAR_19, VAR_6,
    "unsupported pcap savefile version %u.%u",
    VAR_21.version_major, VAR_21.version_minor);
  *VAR_20 = 1;
  return ((void*)0);
 }





 VAR_23 = FUNC_11(VAR_19, sizeof (struct pcap_sf));
 if (VAR_23 == ((void*)0)) {

  *VAR_20 = 1;
  return (((void*)0));
 }
 VAR_23->swapped = VAR_24;
 VAR_23->version_major = VAR_21.version_major;
 VAR_23->version_minor = VAR_21.version_minor;
 VAR_23->tzoff = VAR_21.thiszone;
 VAR_23->snapshot = VAR_21.snaplen;
 if (VAR_23->snapshot <= 0) {
  VAR_23->snapshot = FUNC_9(VAR_21.linktype);
 }
 VAR_23->linktype = FUNC_7(FUNC_0(VAR_21.linktype));
 VAR_23->linktype_ext = FUNC_1(VAR_21.linktype);

 VAR_23->next_packet_op = VAR_14;

 VAR_25 = VAR_23->priv;

 VAR_23->opt.tstamp_precision = VAR_18;





 switch (VAR_18) {

 case 129:
  if (VAR_16 == VAR_4) {





   VAR_25->scale_type = VAR_9;
  } else {




   VAR_25->scale_type = VAR_5;
  }
  break;

 case 128:
  if (VAR_16 == VAR_4) {




   VAR_25->scale_type = VAR_5;
  } else {





   VAR_25->scale_type = VAR_10;
  }
  break;

 default:
  FUNC_12(VAR_19, VAR_6,
      "unknown time stamp resolution %u", VAR_18);
  FUNC_6(VAR_23);
  *VAR_20 = 1;
  return (((void*)0));
 }
 switch (VAR_21.version_major) {

 case 2:
  if (VAR_21.version_minor < 3)
   VAR_25->lengths_swapped = VAR_11;
  else if (VAR_21.version_minor == 3)
   VAR_25->lengths_swapped = VAR_2;
  else
   VAR_25->lengths_swapped = VAR_3;
  break;

 case 543:
  VAR_25->lengths_swapped = VAR_11;
  break;

 default:
  VAR_25->lengths_swapped = VAR_3;
  break;
 }

 if (VAR_16 == VAR_1) {
  VAR_25->hdrsize = sizeof(struct pcap_sf_patched_pkthdr);

  if (VAR_23->linktype == VAR_0) {
   VAR_23->snapshot += 14;
  }
 } else
  VAR_25->hdrsize = sizeof(struct pcap_sf_pkthdr);
 VAR_23->bufsize = VAR_23->snapshot;
 if (VAR_23->bufsize > 2048)
  VAR_23->bufsize = 2048;
 VAR_23->buffer = FUNC_8(VAR_23->bufsize);
 if (VAR_23->buffer == ((void*)0)) {
  FUNC_12(VAR_19, VAR_6, "out of memory");
  FUNC_6(VAR_23);
  *VAR_20 = 1;
  return (((void*)0));
 }

 VAR_23->cleanup_op = VAR_15;

 return (VAR_23);
}
