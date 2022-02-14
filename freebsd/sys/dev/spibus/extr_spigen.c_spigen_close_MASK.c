
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct spigen_softc {int sc_mtx; int sc_dev; } ;
struct cdev {int si_drv1; } ;
typedef int device_t ;


 struct spigen_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_0, int VAR_1, int VAR_2, struct thread *VAR_3)
{
 device_t VAR_4 = VAR_0->si_drv1;
 struct spigen_softc *VAR_5 = FUNC_0(VAR_4);

 FUNC_2(&VAR_5->sc_mtx);
 FUNC_1(VAR_5->sc_dev);
 FUNC_3(&VAR_5->sc_mtx);
 return (0);
}
