
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct tdfx_softc {scalar_t__ busy; } ;
struct cdev {struct tdfx_softc* si_drv1; } ;
struct TYPE_2__ {int p_pid; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{




 struct tdfx_softc *VAR_5 = VAR_1->si_drv1;
 if(VAR_5->busy == 0) return VAR_0;
 VAR_5->busy = 0;



 return 0;
}
