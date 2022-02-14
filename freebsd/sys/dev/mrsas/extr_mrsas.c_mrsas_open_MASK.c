
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct mrsas_softc {int dummy; } ;
struct cdev {struct mrsas_softc* si_drv1; } ;



int
FUNC_0(struct cdev *VAR_0, int VAR_1, int VAR_2, struct thread *VAR_3)
{
 struct mrsas_softc *VAR_4;

 VAR_4 = VAR_0->si_drv1;
 return (0);
}
