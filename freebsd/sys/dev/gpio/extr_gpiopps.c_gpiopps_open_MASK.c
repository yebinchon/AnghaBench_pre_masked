
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct pps_softc {int pps_mtx; int dev; } ;
struct cdev {struct pps_softc* si_drv1; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct pps_softc *VAR_5 = VAR_1->si_drv1;


 FUNC_2(&VAR_5->pps_mtx);
 if (FUNC_1(VAR_5->dev) < VAR_0) {
  FUNC_0(VAR_5->dev);
 }
 FUNC_3(&VAR_5->pps_mtx);

 return 0;
}
