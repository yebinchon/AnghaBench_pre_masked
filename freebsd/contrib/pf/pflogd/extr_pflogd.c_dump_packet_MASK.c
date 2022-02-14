
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* tv_usec; void* tv_sec; } ;
typedef struct pcap_sf_pkthdr {int caplen; int len; TYPE_1__ ts; } const pcap_sf_pkthdr ;
typedef struct pcap_sf_pkthdr u_char ;
struct pcap_pkthdr {int caplen; int len; TYPE_1__ ts; } ;
typedef int sh ;
typedef void* bpf_int32 ;
typedef int FILE ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct pcap_sf_pkthdr*,struct pcap_sf_pkthdr const*,struct pcap_sf_pkthdr const*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,size_t,scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,struct pcap_sf_pkthdr const*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

void
FUNC_4(u_char *VAR_8, const struct pcap_pkthdr *VAR_9, const u_char *VAR_10)
{
 FILE *VAR_11 = (FILE *)VAR_8;




 size_t VAR_12 = sizeof(*VAR_9) + VAR_9->caplen;


 if (VAR_12 < sizeof(*VAR_9) || VAR_9->caplen > (size_t)VAR_4) {
  FUNC_2(VAR_0, "invalid size %u (%u/%u), packet dropped",
         VAR_12, VAR_4, VAR_6);
  VAR_5++;
  return;
 }

 if (VAR_12 <= VAR_1)
  goto append;

 if (VAR_7) {
  VAR_5++;
  return;
 }

 if (FUNC_1(VAR_11)) {
  VAR_5++;
  return;
 }

 if (VAR_12 > VAR_1) {
  FUNC_0(VAR_8, VAR_9, VAR_10);
  return;
 }

 append:
 FUNC_3(VAR_3, VAR_9, sizeof(*VAR_9));
 FUNC_3(VAR_3 + sizeof(*VAR_9), VAR_10, VAR_9->caplen);


 VAR_3 += VAR_12;
 VAR_1 -= VAR_12;
 VAR_2++;

 return;
}
