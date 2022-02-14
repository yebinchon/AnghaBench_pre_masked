
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct e6000sw_softc {int dummy; } ;
struct TYPE_3__ {int cmd; int vlan_mode; } ;
typedef TYPE_1__ etherswitch_conf_t ;
typedef int device_t ;


 int FUNC_0 (struct e6000sw_softc*) ;
 int FUNC_1 (struct e6000sw_softc*) ;
 int VAR_0 ;
 struct e6000sw_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct e6000sw_softc*,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, etherswitch_conf_t *VAR_2)
{
 struct e6000sw_softc *VAR_3;


 VAR_3 = FUNC_2(VAR_1);
 if (VAR_2->cmd & VAR_0) {
  FUNC_0(VAR_3);
  FUNC_3(VAR_3, VAR_2->vlan_mode);
  FUNC_1(VAR_3);
 }

 return (0);
}
