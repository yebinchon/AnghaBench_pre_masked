
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct mrsas_softc {int mrsas_poll_waiting; int aen_lock; int mrsas_select; scalar_t__ mrsas_aen_triggered; } ;
struct cdev {struct mrsas_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct mrsas_softc *VAR_5;
 int VAR_6 = 0;

 VAR_5 = VAR_2->si_drv1;

 if (VAR_3 & (VAR_0 | VAR_1)) {
  if (VAR_5->mrsas_aen_triggered) {
   VAR_6 |= VAR_3 & (VAR_0 | VAR_1);
  }
 }
 if (VAR_6 == 0) {
  if (VAR_3 & (VAR_0 | VAR_1)) {
   FUNC_0(&VAR_5->aen_lock);
   VAR_5->mrsas_poll_waiting = 1;
   FUNC_2(VAR_4, &VAR_5->mrsas_select);
   FUNC_1(&VAR_5->aen_lock);
  }
 }
 return VAR_6;
}
