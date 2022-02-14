
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ io_timestamp; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_11__ {int vq_lock; int vq_io_complete_ts; int vq_active_tree; } ;
struct TYPE_10__ {int vdev_children; int vdev_path; scalar_t__ vdev_guid; int * vdev_spa; TYPE_4__ vdev_queue; TYPE_1__* vdev_ops; struct TYPE_10__** vdev_child; } ;
typedef TYPE_3__ vdev_t ;
typedef TYPE_4__ vdev_queue_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef int spa_t ;
struct TYPE_8__ {scalar_t__ vdev_op_leaf; } ;


 TYPE_2__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,unsigned long long,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_3__*,char*,scalar_t__,int ,int ) ;

void
FUNC_9(vdev_t *VAR_0)
{
 for (int VAR_1 = 0; VAR_1 < VAR_0->vdev_children; VAR_1++) {
  vdev_t *VAR_2 = VAR_0->vdev_child[VAR_1];

  FUNC_9(VAR_2);
 }

 if (VAR_0->vdev_ops->vdev_op_leaf) {
  vdev_queue_t *VAR_3 = &VAR_0->vdev_queue;

  FUNC_4(&VAR_3->vq_lock);
  if (FUNC_1(&VAR_3->vq_active_tree) > 0) {
   spa_t *VAR_4 = VAR_0->vdev_spa;
   zio_t *VAR_5;
   uint64_t VAR_6;






   VAR_5 = FUNC_0(&VAR_3->vq_active_tree);
   VAR_6 = FUNC_3() - VAR_5->io_timestamp;
   if (VAR_6 > FUNC_6(VAR_4)) {
    FUNC_8(VAR_0, "SLOW IO: zio timestamp "
        "%lluns, delta %lluns, last io %lluns",
        VAR_5->io_timestamp, (u_longlong_t)VAR_6,
        VAR_3->vq_io_complete_ts);
    FUNC_2("I/O to pool '%s' appears to be "
        "hung on vdev guid %llu at '%s'.",
        FUNC_7(VAR_4),
        (long long unsigned int) VAR_0->vdev_guid,
        VAR_0->vdev_path);
   }
  }
  FUNC_5(&VAR_3->vq_lock);
 }
}
