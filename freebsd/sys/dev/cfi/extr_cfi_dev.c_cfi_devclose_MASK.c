
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int * td_proc; } ;
struct cfi_softc {int * sc_opened; scalar_t__ sc_writing; } ;
struct cdev {struct cfi_softc* si_drv1; } ;


 int VAR_0 ;
 int FUNC_0 (struct cfi_softc*) ;

__attribute__((used)) static int
FUNC_1(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct cfi_softc *VAR_5;
 int VAR_6;

 VAR_5 = VAR_1->si_drv1;

 if (VAR_5->sc_opened != VAR_4->td_proc)
  return (VAR_0);

 VAR_6 = (VAR_5->sc_writing) ? FUNC_0(VAR_5) : 0;
 VAR_5->sc_opened = ((void*)0);
 return (VAR_6);
}
