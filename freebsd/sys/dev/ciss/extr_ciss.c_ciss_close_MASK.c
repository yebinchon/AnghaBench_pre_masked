
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct ciss_softc {int ciss_mtx; int ciss_flags; } ;
struct cdev {scalar_t__ si_drv1; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
    struct ciss_softc *VAR_5;

    FUNC_0(1);

    VAR_5 = (struct ciss_softc *)VAR_1->si_drv1;

    FUNC_1(&VAR_5->ciss_mtx);
    VAR_5->ciss_flags &= ~VAR_0;
    FUNC_2(&VAR_5->ciss_mtx);
    return (0);
}
