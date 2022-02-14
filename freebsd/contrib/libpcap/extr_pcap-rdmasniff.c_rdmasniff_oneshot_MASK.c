
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct pcap_rdmasniff {int oneshot_buffer; } ;
struct pcap_pkthdr {int caplen; } ;
struct oneshot_userdata {int * pkt; struct pcap_pkthdr* hdr; TYPE_1__* pd; } ;
struct TYPE_2__ {struct pcap_rdmasniff* priv; } ;
typedef TYPE_1__ pcap_t ;


 int FUNC_0 (int ,int const*,int ) ;

__attribute__((used)) static void
FUNC_1(u_char *VAR_0, const struct pcap_pkthdr *VAR_1, const u_char *VAR_2)
{
 struct oneshot_userdata *VAR_3 = (struct oneshot_userdata *) VAR_0;
 pcap_t *VAR_4 = VAR_3->pd;
 struct pcap_rdmasniff *VAR_5 = VAR_4->priv;

 *VAR_3->hdr = *VAR_1;
 FUNC_0(VAR_5->oneshot_buffer, VAR_2, VAR_1->caplen);
 *VAR_3->pkt = VAR_5->oneshot_buffer;
}
