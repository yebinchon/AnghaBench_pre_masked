
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pcap_ng_sf {int ifaces; } ;
struct TYPE_4__ {struct pcap_ng_sf* priv; } ;
typedef TYPE_1__ pcap_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(pcap_t *VAR_0)
{
 struct pcap_ng_sf *VAR_1 = VAR_0->priv;

 FUNC_0(VAR_1->ifaces);
 FUNC_1(VAR_0);
}
