
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* mtkswitch_vlan_getvgroup ) (struct mtkswitch_softc*,int *) ;} ;
struct mtkswitch_softc {TYPE_1__ hal; } ;
typedef int etherswitch_vlangroup_t ;
typedef int device_t ;


 struct mtkswitch_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct mtkswitch_softc*,int *) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, etherswitch_vlangroup_t *VAR_1)
{
        struct mtkswitch_softc *VAR_2 = FUNC_0(VAR_0);

        return (VAR_2->hal.mtkswitch_vlan_getvgroup(VAR_2, VAR_1));
}
