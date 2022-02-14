
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
struct pcap_pkthdr {scalar_t__ caplen; int len; } ;
typedef int netdissect_options ;


 scalar_t__ FUNC_0 (int *,int const*,int ) ;

u_int
FUNC_1(netdissect_options *VAR_0,
               const struct pcap_pkthdr *VAR_1, const u_char *VAR_2)
{
 u_int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_2, VAR_1->len);
 if (VAR_3 == 0) {

  return (VAR_1->caplen);
 }
 return (VAR_3);
}
