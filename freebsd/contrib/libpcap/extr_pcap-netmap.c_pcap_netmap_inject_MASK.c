
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_netmap {struct nm_desc* d; } ;
struct nm_desc {int dummy; } ;
struct TYPE_3__ {struct pcap_netmap* priv; } ;
typedef TYPE_1__ pcap_t ;


 int FUNC_0 (struct nm_desc*,void const*,size_t) ;

__attribute__((used)) static int
FUNC_1(pcap_t *VAR_0, const void *VAR_1, size_t VAR_2)
{
 struct pcap_netmap *VAR_3 = VAR_0->priv;
 struct nm_desc *VAR_4 = VAR_3->d;

 return FUNC_0(VAR_4, VAR_1, VAR_2);
}
