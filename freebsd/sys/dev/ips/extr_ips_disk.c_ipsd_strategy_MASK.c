
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bio {void* bio_driver1; TYPE_2__* bio_disk; } ;
struct TYPE_7__ {size_t disk_number; TYPE_4__* sc; int dev; } ;
typedef TYPE_3__ ipsdisk_softc_t ;
struct TYPE_8__ {int queue_mtx; int queue; TYPE_1__* drives; } ;
struct TYPE_6__ {TYPE_3__* d_drv1; } ;
struct TYPE_5__ {scalar_t__ drivenum; } ;


 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int *,struct bio*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct bio *VAR_0)
{
 ipsdisk_softc_t *VAR_1;

 VAR_1 = VAR_0->bio_disk->d_drv1;
 FUNC_0(8,VAR_1->dev,"in strategy\n");
 VAR_0->bio_driver1 = (void *)(uintptr_t)VAR_1->sc->drives[VAR_1->disk_number].drivenum;
 FUNC_3(&VAR_1->sc->queue_mtx);
 FUNC_1(&VAR_1->sc->queue, VAR_0);
 FUNC_2(VAR_1->sc);
 FUNC_4(&VAR_1->sc->queue_mtx);
}
