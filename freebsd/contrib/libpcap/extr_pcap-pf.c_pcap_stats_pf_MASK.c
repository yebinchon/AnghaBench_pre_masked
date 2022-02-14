
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_stat {scalar_t__ ps_ifdrop; int ps_drop; int ps_recv; } ;
struct pcap_pf {scalar_t__ OrigMissed; scalar_t__ TotMissed; int TotDrops; int TotAccepted; } ;
struct TYPE_3__ {struct pcap_pf* priv; } ;
typedef TYPE_1__ pcap_t ;



__attribute__((used)) static int
FUNC_0(pcap_t *VAR_0, struct pcap_stat *VAR_1)
{
 struct pcap_pf *VAR_2 = VAR_0->priv;
 VAR_1->ps_recv = VAR_2->TotAccepted;
 VAR_1->ps_drop = VAR_2->TotDrops;
 VAR_1->ps_ifdrop = VAR_2->TotMissed - VAR_2->OrigMissed;
 return (0);
}
