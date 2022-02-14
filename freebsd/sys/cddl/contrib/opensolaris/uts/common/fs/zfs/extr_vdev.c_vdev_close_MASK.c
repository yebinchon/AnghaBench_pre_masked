
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int vs_aux; } ;
struct TYPE_10__ {int vdev_reopening; TYPE_2__ vdev_stat; int vdev_state; scalar_t__ vdev_offline; int vdev_prevstate; TYPE_1__* vdev_ops; struct TYPE_10__* vdev_parent; int * vdev_spa; } ;
typedef TYPE_3__ vdev_t ;
typedef int spa_t ;
struct TYPE_8__ {scalar_t__ vdev_op_leaf; int (* vdev_op_close ) (TYPE_3__*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;

void
FUNC_5(vdev_t *VAR_5)
{
 spa_t *VAR_6 = VAR_5->vdev_spa;
 vdev_t *VAR_7 = VAR_5->vdev_parent;

 FUNC_0(FUNC_1(VAR_6, VAR_1, VAR_0) == VAR_1);





 if (VAR_7 != ((void*)0) && VAR_7->vdev_reopening)
  VAR_5->vdev_reopening = (VAR_7->vdev_reopening && !VAR_5->vdev_offline);

 VAR_5->vdev_ops->vdev_op_close(VAR_5);

 FUNC_4(VAR_5);

 if (VAR_5->vdev_ops->vdev_op_leaf)
  FUNC_3(VAR_5);






 VAR_5->vdev_prevstate = VAR_5->vdev_state;

 if (VAR_5->vdev_offline)
  VAR_5->vdev_state = VAR_4;
 else
  VAR_5->vdev_state = VAR_3;
 VAR_5->vdev_stat.vs_aux = VAR_2;
}
