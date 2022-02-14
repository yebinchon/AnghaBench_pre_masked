
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct e6060sw_softc {int vlan_mode; } ;
struct TYPE_3__ {int vlan_mode; int cmd; } ;
typedef TYPE_1__ etherswitch_conf_t ;
typedef int device_t ;


 int VAR_0 ;
 struct e6060sw_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, etherswitch_conf_t *VAR_2)
{
 struct e6060sw_softc *VAR_3;

 VAR_3 = FUNC_0(VAR_1);


 VAR_2->cmd = VAR_0;
 VAR_2->vlan_mode = VAR_3->vlan_mode;

 return (0);
}
