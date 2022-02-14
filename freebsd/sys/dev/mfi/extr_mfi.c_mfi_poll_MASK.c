
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct mfi_softc {scalar_t__ mfi_aen_triggered; int mfi_poll_waiting; int mfi_select; int * mfi_aen_cm; } ;
struct cdev {struct mfi_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_1(struct cdev *VAR_3, int VAR_4, struct thread *VAR_5)
{
 struct mfi_softc *VAR_6;
 int VAR_7 = 0;

 VAR_6 = VAR_3->si_drv1;

 if (VAR_4 & (VAR_1 | VAR_2)) {
  if (VAR_6->mfi_aen_triggered != 0) {
   VAR_7 |= VAR_4 & (VAR_1 | VAR_2);
   VAR_6->mfi_aen_triggered = 0;
  }
  if (VAR_6->mfi_aen_triggered == 0 && VAR_6->mfi_aen_cm == ((void*)0)) {
   VAR_7 |= VAR_0;
  }
 }

 if (VAR_7 == 0) {
  if (VAR_4 & (VAR_1 | VAR_2)) {
   VAR_6->mfi_poll_waiting = 1;
   FUNC_0(VAR_5, &VAR_6->mfi_select);
  }
 }

 return VAR_7;
}
