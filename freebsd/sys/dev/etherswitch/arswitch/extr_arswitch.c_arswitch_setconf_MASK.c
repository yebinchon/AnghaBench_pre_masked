
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct arswitch_softc {int dummy; } ;
struct TYPE_3__ {int cmd; int vlan_mode; } ;
typedef TYPE_1__ etherswitch_conf_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct arswitch_softc*,int ) ;
 struct arswitch_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, etherswitch_conf_t *VAR_2)
{
 struct arswitch_softc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_1);


 if (VAR_2->cmd & VAR_0) {
  VAR_4 = FUNC_0(VAR_3, VAR_2->vlan_mode);
  if (VAR_4 != 0)
   return (VAR_4);
 }



 return (0);
}
