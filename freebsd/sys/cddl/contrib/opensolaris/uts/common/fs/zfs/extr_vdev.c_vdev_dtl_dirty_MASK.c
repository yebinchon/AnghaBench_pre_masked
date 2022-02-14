
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vdev_dtl_lock; TYPE_3__* vdev_spa; int ** vdev_dtl; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t vdev_dtl_type_t ;
typedef int uint64_t ;
typedef int range_tree_t ;
struct TYPE_5__ {TYPE_1__* spa_root_vdev; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;

void
FUNC_6(vdev_t *VAR_1, vdev_dtl_type_t VAR_2, uint64_t VAR_3, uint64_t VAR_4)
{
 range_tree_t *VAR_5 = VAR_1->vdev_dtl[VAR_2];

 FUNC_0(VAR_2 < VAR_0);
 FUNC_0(VAR_1 != VAR_1->vdev_spa->spa_root_vdev);
 FUNC_0(FUNC_5(VAR_1->vdev_spa));

 FUNC_1(&VAR_1->vdev_dtl_lock);
 if (!FUNC_4(VAR_5, VAR_3, VAR_4))
  FUNC_3(VAR_5, VAR_3, VAR_4);
 FUNC_2(&VAR_1->vdev_dtl_lock);
}
