
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocs_softc {TYPE_1__* cdev; int dbg_lock; } ;
struct TYPE_2__ {int * si_drv1; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(void *VAR_0)
{
 struct ocs_softc *VAR_1 = VAR_0;

 FUNC_1(&VAR_1->dbg_lock);

 if (VAR_1->cdev) {
  VAR_1->cdev->si_drv1 = ((void*)0);
  FUNC_0(VAR_1->cdev);
 }
}
