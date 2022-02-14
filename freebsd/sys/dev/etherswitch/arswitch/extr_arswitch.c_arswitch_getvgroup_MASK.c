
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* arswitch_vlan_getvgroup ) (struct arswitch_softc*,int *) ;} ;
struct arswitch_softc {TYPE_1__ hal; } ;
typedef int etherswitch_vlangroup_t ;
typedef int device_t ;


 struct arswitch_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct arswitch_softc*,int *) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, etherswitch_vlangroup_t *VAR_1)
{
 struct arswitch_softc *VAR_2 = FUNC_0(VAR_0);

 return (VAR_2->hal.arswitch_vlan_getvgroup(VAR_2, VAR_1));
}
