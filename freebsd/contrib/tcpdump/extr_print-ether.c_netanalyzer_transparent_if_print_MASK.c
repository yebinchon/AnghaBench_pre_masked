
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct pcap_pkthdr {int len; int caplen; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,int,int,int *,int *) ;

u_int
FUNC_2(netdissect_options *VAR_0,
                                 const struct pcap_pkthdr *VAR_1,
                                 const u_char *VAR_2)
{




 if (VAR_1->len < 12 || VAR_1->caplen < 12) {
  FUNC_0((VAR_0, "[|netanalyzer-transparent]"));
  return (VAR_1->caplen);
 }


 return (12 + FUNC_1(VAR_0, VAR_2 + 12, VAR_1->len - 12, VAR_1->caplen - 12, ((void*)0), ((void*)0)));
}
