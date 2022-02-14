
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pst_softc {TYPE_2__* iop; int queue; } ;
struct bio {TYPE_1__* bio_disk; } ;
struct TYPE_4__ {int mtx; } ;
struct TYPE_3__ {struct pst_softc* d_drv1; } ;


 int FUNC_0 (int *,struct bio*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pst_softc*) ;

__attribute__((used)) static void
FUNC_4(struct bio *VAR_0)
{
    struct pst_softc *VAR_1 = VAR_0->bio_disk->d_drv1;

    FUNC_1(&VAR_1->iop->mtx);
    FUNC_0(&VAR_1->queue, VAR_0);
    FUNC_3(VAR_1);
    FUNC_2(&VAR_1->iop->mtx);
}
