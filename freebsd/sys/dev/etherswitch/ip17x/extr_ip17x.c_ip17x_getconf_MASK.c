
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* ip17x_get_vlan_mode ) (struct ip17x_softc*) ;} ;
struct ip17x_softc {TYPE_1__ hal; } ;
struct TYPE_5__ {int vlan_mode; int cmd; } ;
typedef TYPE_2__ etherswitch_conf_t ;
typedef int device_t ;


 int VAR_0 ;
 struct ip17x_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct ip17x_softc*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, etherswitch_conf_t *VAR_2)
{
 struct ip17x_softc *VAR_3;

 VAR_3 = FUNC_0(VAR_1);


 VAR_2->cmd = VAR_0;
 VAR_2->vlan_mode = VAR_3->hal.ip17x_get_vlan_mode(VAR_3);

 return (0);
}
