
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rl_softc {scalar_t__ rl_watchdog_timer; TYPE_1__* rl_ifp; int rl_dev; } ;
struct TYPE_2__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rl_softc*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (struct rl_softc*) ;
 int FUNC_4 (struct rl_softc*) ;
 int FUNC_5 (struct rl_softc*) ;

__attribute__((used)) static void
FUNC_6(struct rl_softc *VAR_2)
{

 FUNC_0(VAR_2);

 if (VAR_2->rl_watchdog_timer == 0 || --VAR_2->rl_watchdog_timer >0)
  return;

 FUNC_1(VAR_2->rl_dev, "watchdog timeout\n");
 FUNC_2(VAR_2->rl_ifp, VAR_0, 1);

 FUNC_5(VAR_2);
 FUNC_4(VAR_2);
 VAR_2->rl_ifp->if_drv_flags &= ~VAR_1;
 FUNC_3(VAR_2);
}
