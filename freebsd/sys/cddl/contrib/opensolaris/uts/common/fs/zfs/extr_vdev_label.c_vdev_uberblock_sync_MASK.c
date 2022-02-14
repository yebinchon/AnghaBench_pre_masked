
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_13__ {size_t vdev_children; TYPE_1__* vdev_ops; struct TYPE_13__** vdev_child; } ;
typedef TYPE_2__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_14__ {int ub_txg; } ;
typedef TYPE_3__ uberblock_t ;
typedef int abd_t ;
struct TYPE_12__ {int vdev_op_leaf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,TYPE_3__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,TYPE_2__*,int,int *,int ,int ,int ,size_t*,int) ;
 int VAR_3 ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_9(zio_t *VAR_4, uint64_t *VAR_5,
    uberblock_t *VAR_6, vdev_t *VAR_7, int VAR_8)
{
 for (uint64_t VAR_9 = 0; VAR_9 < VAR_7->vdev_children; VAR_9++) {
  FUNC_9(VAR_4, VAR_5,
      VAR_6, VAR_7->vdev_child[VAR_9], VAR_8);
 }

 if (!VAR_7->vdev_ops->vdev_op_leaf)
  return;

 if (!FUNC_8(VAR_7))
  return;

 int VAR_10 = VAR_6->ub_txg & (FUNC_0(VAR_7) - 1);


 abd_t *VAR_11 = FUNC_3(FUNC_2(VAR_7), VAR_0);
 FUNC_6(VAR_11, FUNC_2(VAR_7));
 FUNC_4(VAR_11, VAR_6, sizeof (uberblock_t));

 for (int VAR_12 = 0; VAR_12 < VAR_1; VAR_12++)
  FUNC_7(VAR_4, VAR_7, VAR_12, VAR_11,
      FUNC_1(VAR_7, VAR_10), FUNC_2(VAR_7),
      VAR_3, VAR_5,
      VAR_8 | VAR_2);

 FUNC_5(VAR_11);
}
