
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct pps_softc {int pps_mtx; int dev; } ;
struct cdev {struct pps_softc* si_drv1; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_0, int VAR_1, int VAR_2, struct thread *VAR_3)
{
 struct pps_softc *VAR_4 = VAR_0->si_drv1;





 FUNC_1(&VAR_4->pps_mtx);
 FUNC_0(VAR_4->dev);
 FUNC_2(&VAR_4->pps_mtx);

 return 0;
}
