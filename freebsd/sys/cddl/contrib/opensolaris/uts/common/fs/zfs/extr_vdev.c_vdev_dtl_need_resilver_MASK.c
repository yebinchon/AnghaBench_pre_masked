
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* vdev_ops; TYPE_1__* vdev_spa; } ;
typedef TYPE_3__ vdev_t ;
typedef int uint64_t ;
typedef int boolean_t ;
struct TYPE_7__ {int (* vdev_op_need_resilver ) (TYPE_3__*,int ,size_t) ;scalar_t__ vdev_op_leaf; } ;
struct TYPE_6__ {TYPE_3__* spa_root_vdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,int ,size_t) ;

boolean_t
FUNC_2(vdev_t *VAR_1, uint64_t VAR_2, size_t VAR_3)
{
        FUNC_0(VAR_1 != VAR_1->vdev_spa->spa_root_vdev);

        if (VAR_1->vdev_ops->vdev_op_need_resilver == ((void*)0) ||
            VAR_1->vdev_ops->vdev_op_leaf)
                return (VAR_0);

        return (VAR_1->vdev_ops->vdev_op_need_resilver(VAR_1, VAR_2, VAR_3));
}
