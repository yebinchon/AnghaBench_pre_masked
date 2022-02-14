
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct pcap_pkthdr {int caplen; int len; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *,int const*,int ,int ,int ,int ) ;

u_int
FUNC_1(netdissect_options *VAR_0,
                    const struct pcap_pkthdr *VAR_1, const u_char *VAR_2)
{
 return FUNC_0(VAR_0, VAR_2, VAR_1->len, VAR_1->caplen, 0, 0);
}
