
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_2__ {scalar_t__ count; } ;
struct psm_softc {int rsel; TYPE_1__ queue; } ;
struct cdev {struct psm_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thread*,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct psm_softc *VAR_5 = VAR_2->si_drv1;
 int VAR_6;
 int VAR_7 = 0;


 VAR_6 = FUNC_1();
 if (VAR_3 & (VAR_0 | VAR_1)) {
  if (VAR_5->queue.count > 0)
   VAR_7 |= VAR_3 & (VAR_0 | VAR_1);
  else
   FUNC_0(VAR_4, &VAR_5->rsel);
 }
 FUNC_2(VAR_6);

 return (VAR_7);
}
