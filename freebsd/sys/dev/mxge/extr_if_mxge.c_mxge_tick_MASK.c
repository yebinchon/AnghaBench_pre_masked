
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ u_long ;
struct TYPE_6__ {int watchdog_countdown; int dying; int co_hdl; int watchdog_task; int tq; int dev; TYPE_1__* ifp; } ;
typedef TYPE_2__ mxge_softc_t ;
struct TYPE_5__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,void (*) (void*),TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_5)
{
 mxge_softc_t *VAR_6 = VAR_5;
 u_long VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9, VAR_10;
 uint16_t VAR_11;

 VAR_10 = VAR_4;
 VAR_9 = VAR_6->ifp->if_drv_flags & VAR_1;
 if (VAR_9) {
  if (!VAR_6->watchdog_countdown) {
   VAR_8 = FUNC_1(VAR_6);
   VAR_6->watchdog_countdown = 4;
  }
  VAR_6->watchdog_countdown--;
 }
 if (VAR_7 == 0) {

  VAR_11 = FUNC_2(VAR_6->dev, VAR_3, 2);
  if ((VAR_11 & VAR_2) == 0) {
   VAR_6->dying = 2;
   FUNC_3(VAR_6->tq, &VAR_6->watchdog_task);
   VAR_8 = VAR_0;
  }

  VAR_10 *= 4;
 }

 if (VAR_8 == 0)
  FUNC_0(&VAR_6->co_hdl, VAR_10, FUNC_4, VAR_6);

}
