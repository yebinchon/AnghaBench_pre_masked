
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* arswitch_hw_get_switch_macaddr ) (struct arswitch_softc*,int *) ;} ;
struct arswitch_softc {TYPE_1__ hal; int vlan_mode; } ;
struct TYPE_5__ {int cmd; int switch_macaddr; int vlan_mode; } ;
typedef TYPE_2__ etherswitch_conf_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct arswitch_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct arswitch_softc*,int *) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, etherswitch_conf_t *VAR_3)
{
 struct arswitch_softc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_2);


 VAR_3->cmd = VAR_1;
 VAR_3->vlan_mode = VAR_4->vlan_mode;


 VAR_5 = VAR_4->hal.arswitch_hw_get_switch_macaddr(VAR_4,
     &VAR_3->switch_macaddr);
 if (VAR_5 == 0) {
  VAR_3->cmd |= VAR_0;
 }

 return (0);
}
