
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sis_softc {scalar_t__ sis_watchdog_timer; TYPE_1__* sis_ifp; int sis_dev; } ;
struct TYPE_3__ {int if_snd; int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sis_softc*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (struct sis_softc*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(struct sis_softc *VAR_2)
{

 FUNC_1(VAR_2);

 if (VAR_2->sis_watchdog_timer == 0 || --VAR_2->sis_watchdog_timer >0)
  return;

 FUNC_2(VAR_2->sis_dev, "watchdog timeout\n");
 FUNC_3(VAR_2->sis_ifp, VAR_0, 1);

 VAR_2->sis_ifp->if_drv_flags &= ~VAR_1;
 FUNC_4(VAR_2);

 if (!FUNC_0(&VAR_2->sis_ifp->if_snd))
  FUNC_5(VAR_2->sis_ifp);
}
