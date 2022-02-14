
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* arswitch_vlan_set_pvid ) (struct arswitch_softc*,int ,int ) ;} ;
struct arswitch_softc {TYPE_1__ hal; } ;
struct TYPE_5__ {int es_pvid; int es_port; } ;
typedef TYPE_2__ etherswitch_port_t ;


 int FUNC_0 (struct arswitch_softc*) ;
 int FUNC_1 (struct arswitch_softc*) ;
 int FUNC_2 (struct arswitch_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct arswitch_softc *VAR_0, etherswitch_port_t *VAR_1)
{



 FUNC_0(VAR_0);


 if (VAR_1->es_pvid != 0)
  VAR_0->hal.arswitch_vlan_set_pvid(VAR_0, VAR_1->es_port, VAR_1->es_pvid);






 FUNC_1(VAR_0);
 return (0);
}
