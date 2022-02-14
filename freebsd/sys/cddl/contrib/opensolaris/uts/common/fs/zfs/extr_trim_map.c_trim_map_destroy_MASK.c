
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* vdev_trimmap; int vdev_spa; TYPE_1__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
struct TYPE_14__ {int tm_lock; int tm_head; int tm_pending_writes; int tm_inflight_writes; int tm_inflight_frees; int tm_queued_frees; } ;
typedef TYPE_3__ trim_seg_t ;
typedef TYPE_3__ trim_map_t ;
struct TYPE_12__ {int vdev_op_leaf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,TYPE_2__*) ;
 int VAR_0 ;

void
FUNC_11(vdev_t *VAR_1)
{
 trim_map_t *VAR_2;
 trim_seg_t *VAR_3;

 FUNC_0(VAR_1->vdev_ops->vdev_op_leaf);

 if (!VAR_0)
  return;

 VAR_2 = VAR_1->vdev_trimmap;
 if (VAR_2 == ((void*)0))
  return;






 FUNC_10(VAR_1->vdev_spa, VAR_1);

 FUNC_8(&VAR_2->tm_lock);
 while ((VAR_3 = FUNC_6(&VAR_2->tm_head)) != ((void*)0)) {
  FUNC_3(&VAR_2->tm_queued_frees, VAR_3);
  FUNC_1(VAR_2, VAR_3);
  FUNC_4(VAR_3, sizeof (*VAR_3));
 }
 FUNC_9(&VAR_2->tm_lock);

 FUNC_2(&VAR_2->tm_queued_frees);
 FUNC_2(&VAR_2->tm_inflight_frees);
 FUNC_2(&VAR_2->tm_inflight_writes);
 FUNC_5(&VAR_2->tm_pending_writes);
 FUNC_5(&VAR_2->tm_head);
 FUNC_7(&VAR_2->tm_lock);
 FUNC_4(VAR_2, sizeof (*VAR_2));
 VAR_1->vdev_trimmap = ((void*)0);
}
