
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ io_done; TYPE_1__* io_vd; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_14__ {int vq_lock; int vq_io_complete_ts; } ;
typedef TYPE_3__ vdev_queue_t ;
struct TYPE_12__ {TYPE_3__ vdev_queue; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

void
FUNC_8(zio_t *VAR_1)
{
 vdev_queue_t *VAR_2 = &VAR_1->io_vd->vdev_queue;
 zio_t *VAR_3;

 FUNC_1(&VAR_2->vq_lock);

 FUNC_4(VAR_2, VAR_1);

 VAR_2->vq_io_complete_ts = FUNC_0();

 while ((VAR_3 = FUNC_3(VAR_2)) != ((void*)0)) {
  FUNC_2(&VAR_2->vq_lock);
  if (VAR_3->io_done == VAR_0) {
   FUNC_6(VAR_3);
  } else {
   FUNC_7(VAR_3);
   FUNC_5(VAR_3);
  }
  FUNC_1(&VAR_2->vq_lock);
 }

 FUNC_2(&VAR_2->vq_lock);
}
