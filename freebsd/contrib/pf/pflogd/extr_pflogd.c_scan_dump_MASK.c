
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcap_sf_pkthdr {int dummy; } ;
struct pcap_pkthdr {scalar_t__ caplen; } ;
struct pcap_file_header {scalar_t__ magic; scalar_t__ version_major; scalar_t__ version_minor; scalar_t__ linktype; scalar_t__ snaplen; } ;
typedef int ph ;
typedef int off_t ;
typedef int hdr ;
struct TYPE_2__ {scalar_t__ linktype; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int,int *) ;
 int FUNC_2 (int *,long,int ) ;
 TYPE_1__* VAR_9 ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

int
FUNC_5(FILE *VAR_10, off_t VAR_11)
{
 struct pcap_file_header VAR_12;



 struct pcap_pkthdr VAR_13;

 off_t VAR_14;
 (void) FUNC_2(VAR_10, 0L, VAR_6);

 if (FUNC_1((char *)&VAR_12, sizeof(VAR_12), 1, VAR_10) != 1) {
  FUNC_3(VAR_0, "Short file header");
  return (1);
 }

 if (VAR_12.magic != VAR_7 ||
     VAR_12.version_major != VAR_2 ||
     VAR_12.version_minor != VAR_3 ||
     VAR_12.linktype != VAR_9->linktype ||
     VAR_12.snaplen > VAR_4) {
  return (1);
 }

 VAR_14 = sizeof(VAR_12);

 while (!FUNC_0(VAR_10)) {
  off_t VAR_15 = FUNC_1((char *)&VAR_13, 1, sizeof(VAR_13), VAR_10);
  if (VAR_15 == 0)
   break;

  if (VAR_15 != sizeof(VAR_13))
   goto error;
  if (VAR_13.caplen > VAR_12.snaplen || VAR_13.caplen > VAR_4)
   goto error;
  VAR_14 += sizeof(VAR_13) + VAR_13.caplen;
  if (VAR_14 > VAR_11)
   goto error;
  FUNC_2(VAR_10, VAR_13.caplen, VAR_5);
 }

 if (VAR_14 != VAR_11)
  goto error;

 if (VAR_12.snaplen != VAR_8) {
  FUNC_3(VAR_1,
         "Existing file has different snaplen %u, using it",
         VAR_12.snaplen);
  if (FUNC_4(VAR_12.snaplen)) {
   FUNC_3(VAR_1,
          "Failed, using old settings, offset %llu",
          (unsigned long long) VAR_11);
  }
 }

 return (0);

 error:
 FUNC_3(VAR_0, "Corrupted log file.");
 return (1);
}
