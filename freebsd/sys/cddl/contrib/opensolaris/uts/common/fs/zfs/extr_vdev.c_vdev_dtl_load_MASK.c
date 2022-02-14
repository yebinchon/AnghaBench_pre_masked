
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int vdev_children; struct TYPE_7__** vdev_child; int vdev_dtl_lock; int * vdev_dtl; int * vdev_dtl_sm; int vdev_dtl_object; TYPE_1__* vdev_ops; TYPE_3__* vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
struct TYPE_8__ {int * spa_meta_objset; } ;
typedef TYPE_3__ spa_t ;
typedef int objset_t ;
struct TYPE_6__ {scalar_t__ vdev_op_leaf; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int **,int *,int ,int ,unsigned long long,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;

int
FUNC_7(vdev_t *VAR_2)
{
 spa_t *VAR_3 = VAR_2->vdev_spa;
 objset_t *VAR_4 = VAR_3->spa_meta_objset;
 int VAR_5 = 0;

 if (VAR_2->vdev_ops->vdev_op_leaf && VAR_2->vdev_dtl_object != 0) {
  FUNC_0(FUNC_6(VAR_2));

  VAR_5 = FUNC_4(&VAR_2->vdev_dtl_sm, VAR_4,
      VAR_2->vdev_dtl_object, 0, -1ULL, 0);
  if (VAR_5)
   return (VAR_5);
  FUNC_0(VAR_2->vdev_dtl_sm != ((void*)0));

  FUNC_1(&VAR_2->vdev_dtl_lock);





  FUNC_5(VAR_2->vdev_dtl_sm);

  VAR_5 = FUNC_3(VAR_2->vdev_dtl_sm,
      VAR_2->vdev_dtl[VAR_0], VAR_1);
  FUNC_2(&VAR_2->vdev_dtl_lock);

  return (VAR_5);
 }

 for (int VAR_6 = 0; VAR_6 < VAR_2->vdev_children; VAR_6++) {
  VAR_5 = FUNC_7(VAR_2->vdev_child[VAR_6]);
  if (VAR_5 != 0)
   break;
 }

 return (VAR_5);
}
