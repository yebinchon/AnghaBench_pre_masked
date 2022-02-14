
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_stat {scalar_t__ ps_ifdrop; scalar_t__ ps_drop; int ps_recv; } ;
struct pcap_rdmasniff {int packets_recv; } ;
struct TYPE_3__ {struct pcap_rdmasniff* priv; } ;
typedef TYPE_1__ pcap_t ;



__attribute__((used)) static int
FUNC_0(pcap_t *VAR_0, struct pcap_stat *VAR_1)
{
 struct pcap_rdmasniff *VAR_2 = VAR_0->priv;

 VAR_1->ps_recv = VAR_2->packets_recv;
 VAR_1->ps_drop = 0;
 VAR_1->ps_ifdrop = 0;

 return 0;
}
