
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pcap_pkthdr {int dummy; } ;
struct oneshot_userdata {int const** pkt; struct pcap_pkthdr* hdr; } ;



void
FUNC_0(u_char *VAR_0, const struct pcap_pkthdr *VAR_1, const u_char *VAR_2)
{
 struct oneshot_userdata *VAR_3 = (struct oneshot_userdata *)VAR_0;

 *VAR_3->hdr = *VAR_1;
 *VAR_3->pkt = VAR_2;
}
