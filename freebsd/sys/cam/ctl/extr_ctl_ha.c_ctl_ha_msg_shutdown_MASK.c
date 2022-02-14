
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ha_softc {int ha_shutdown; int ha_wakeup; int ha_lock; } ;
struct ctl_softc {int dummy; } ;


 int FUNC_0 () ;
 struct ha_softc VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*,int *,int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int*) ;

void
FUNC_5(struct ctl_softc *VAR_2)
{
 struct ha_softc *VAR_3 = &VAR_0;


 FUNC_2(&VAR_3->ha_lock);
 if (VAR_3->ha_shutdown < 2) {
  VAR_3->ha_shutdown = 1;
  VAR_3->ha_wakeup = 1;
  FUNC_4(&VAR_3->ha_wakeup);
  while (VAR_3->ha_shutdown < 2 && !FUNC_0()) {
   FUNC_1(&VAR_3->ha_wakeup, &VAR_3->ha_lock, 0,
       "shutdown", VAR_1);
  }
 }
 FUNC_3(&VAR_3->ha_lock);
}
