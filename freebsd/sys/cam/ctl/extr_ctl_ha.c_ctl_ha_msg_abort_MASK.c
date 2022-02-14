
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ha_softc {int ha_disconnect; int ha_wakeup; int ha_lock; } ;
typedef int ctl_ha_status ;
typedef int ctl_ha_channel ;


 int VAR_0 ;
 struct ha_softc VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int*) ;

ctl_ha_status
FUNC_3(ctl_ha_channel VAR_2)
{
 struct ha_softc *VAR_3 = &VAR_1;

 FUNC_0(&VAR_3->ha_lock);
 VAR_3->ha_disconnect = 1;
 VAR_3->ha_wakeup = 1;
 FUNC_1(&VAR_3->ha_lock);
 FUNC_2(&VAR_3->ha_wakeup);
 return (VAR_0);
}
