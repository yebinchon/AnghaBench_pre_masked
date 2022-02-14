
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_softc {int ti_flags; } ;
struct thread {int dummy; } ;
struct cdev {struct ti_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ti_softc*) ;
 int FUNC_1 (struct ti_softc*) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_2, int VAR_3, int VAR_4, struct thread *VAR_5)
{
 struct ti_softc *VAR_6;

 VAR_6 = VAR_2->si_drv1;
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_6);
 VAR_6->ti_flags &= ~VAR_1;
 FUNC_1(VAR_6);

 return (0);
}
