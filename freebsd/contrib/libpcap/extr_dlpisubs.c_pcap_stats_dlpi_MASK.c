
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_stat {scalar_t__ ps_drop; int ps_recv; } ;
struct pcap_dlpi {struct pcap_stat stat; } ;
struct TYPE_3__ {struct pcap_dlpi* priv; } ;
typedef TYPE_1__ pcap_t ;



int
FUNC_0(pcap_t *VAR_0, struct pcap_stat *VAR_1)
{
 struct pcap_dlpi *VAR_2 = VAR_0->priv;
 *VAR_1 = VAR_2->stat;




 VAR_1->ps_recv += VAR_1->ps_drop;
 return (0);
}
