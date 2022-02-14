
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_stat {int dummy; } ;
struct pcap_nit {struct pcap_stat stat; } ;
struct TYPE_3__ {struct pcap_nit* priv; } ;
typedef TYPE_1__ pcap_t ;



__attribute__((used)) static int
FUNC_0(pcap_t *VAR_0, struct pcap_stat *VAR_1)
{
 struct pcap_nit *VAR_2 = VAR_0->priv;
 *VAR_1 = VAR_2->stat;
 return (0);
}
