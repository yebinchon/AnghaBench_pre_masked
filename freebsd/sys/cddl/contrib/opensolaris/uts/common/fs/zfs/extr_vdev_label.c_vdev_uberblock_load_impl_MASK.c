
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_10__ {int vdev_children; TYPE_1__* vdev_ops; struct TYPE_10__** vdev_child; } ;
typedef TYPE_2__ vdev_t ;
struct ubl_cbdata {int dummy; } ;
struct TYPE_9__ {scalar_t__ vdev_op_leaf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,TYPE_2__*,int,int ,int ,int ,int ,int *,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_6(zio_t *VAR_3, vdev_t *VAR_4, int VAR_5,
    struct ubl_cbdata *VAR_6)
{
 for (int VAR_7 = 0; VAR_7 < VAR_4->vdev_children; VAR_7++)
  FUNC_6(VAR_3, VAR_4->vdev_child[VAR_7], VAR_5, VAR_6);

 if (VAR_4->vdev_ops->vdev_op_leaf && FUNC_5(VAR_4)) {
  for (int VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   for (int VAR_9 = 0; VAR_9 < FUNC_0(VAR_4); VAR_9++) {
    FUNC_4(VAR_3, VAR_4, VAR_8,
        FUNC_3(FUNC_2(VAR_4),
        VAR_0), FUNC_1(VAR_4, VAR_9),
        FUNC_2(VAR_4),
        VAR_2, VAR_3, VAR_5);
   }
  }
 }
}
