
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {unsigned long long vdev_faulted; unsigned long long vdev_degraded; int * vdev_aux; int vdev_islog; int vdev_delayed_close; int vdev_label_aux; struct TYPE_10__* vdev_top; TYPE_1__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
typedef int vdev_aux_t ;
typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_9__ {int vdev_op_leaf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int ) ;

int
FUNC_7(spa_t *VAR_7, uint64_t VAR_8, vdev_aux_t VAR_9)
{
 vdev_t *VAR_10, *VAR_11;

 FUNC_1(VAR_7, VAR_4);

 if ((VAR_10 = FUNC_0(VAR_7, VAR_8, VAR_1)) == ((void*)0))
  return (FUNC_2(VAR_7, ((void*)0), VAR_2));

 if (!VAR_10->vdev_ops->vdev_op_leaf)
  return (FUNC_2(VAR_7, ((void*)0), VAR_3));

 VAR_11 = VAR_10->vdev_top;






 VAR_10->vdev_label_aux = VAR_9;




 VAR_10->vdev_delayed_close = VAR_0;
 VAR_10->vdev_faulted = 1ULL;
 VAR_10->vdev_degraded = 0ULL;
 FUNC_6(VAR_10, VAR_0, VAR_6, VAR_9);





 if (!VAR_11->vdev_islog && VAR_10->vdev_aux == ((void*)0) && FUNC_3(VAR_10)) {
  VAR_10->vdev_degraded = 1ULL;
  VAR_10->vdev_faulted = 0ULL;





  FUNC_5(VAR_11);

  if (FUNC_4(VAR_10))
   FUNC_6(VAR_10, VAR_0, VAR_5, VAR_9);
 }

 return (FUNC_2(VAR_7, VAR_10, 0));
}
