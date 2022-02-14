
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ td_proc; } ;
struct cfi_softc {int sc_opened; } ;
struct cdev {struct cfi_softc* si_drv1; } ;


 int VAR_0 ;
 int FUNC_0 (uintptr_t*,uintptr_t,uintptr_t) ;

__attribute__((used)) static int
FUNC_1(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct cfi_softc *VAR_5;

 VAR_5 = VAR_1->si_drv1;

 if (!FUNC_0((uintptr_t *)&VAR_5->sc_opened,
     (uintptr_t)((void*)0), (uintptr_t)VAR_4->td_proc))
  return (VAR_0);
 return (0);
}
