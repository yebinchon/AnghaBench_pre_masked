
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int zv_vdev; } ;
typedef TYPE_1__ zil_vdev_node_t ;
struct TYPE_11__ {int lwb_vdev_lock; int lwb_vdev_tree; } ;
typedef TYPE_2__ lwb_t ;
struct TYPE_12__ {int * blk_dva; } ;
typedef TYPE_3__ blkptr_t ;
typedef int avl_tree_t ;
typedef int avl_index_t ;


 int FUNC_0 (TYPE_3__ const*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int * FUNC_2 (int *,TYPE_1__*,int *) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_1 ;

void
FUNC_7(lwb_t *VAR_2, const blkptr_t *VAR_3)
{
 avl_tree_t *VAR_4 = &VAR_2->lwb_vdev_tree;
 avl_index_t VAR_5;
 zil_vdev_node_t *VAR_6, VAR_7;
 int VAR_8 = FUNC_0(VAR_3);
 int VAR_9;

 if (VAR_1)
  return;

 FUNC_5(&VAR_2->lwb_vdev_lock);
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  VAR_7.zv_vdev = FUNC_1(&VAR_3->blk_dva[VAR_9]);
  if (FUNC_2(VAR_4, &VAR_7, &VAR_5) == ((void*)0)) {
   VAR_6 = FUNC_4(sizeof (*VAR_6), VAR_0);
   VAR_6->zv_vdev = VAR_7.zv_vdev;
   FUNC_3(VAR_4, VAR_6, VAR_5);
  }
 }
 FUNC_6(&VAR_2->lwb_vdev_lock);
}
