
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t vdev_children; struct TYPE_4__** vdev_child; int vdev_leaf_zap; int vdev_top_zap; TYPE_2__* vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_5__ {int spa_meta_objset; } ;
typedef TYPE_2__ spa_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,size_t,int ,int *) ;

__attribute__((used)) static void
FUNC_2(vdev_t *VAR_0, uint64_t VAR_1, dmu_tx_t *VAR_2)
{
 spa_t *VAR_3 = VAR_0->vdev_spa;
 if (VAR_0->vdev_top_zap != 0) {
  FUNC_0(FUNC_1(VAR_3->spa_meta_objset, VAR_1,
      VAR_0->vdev_top_zap, VAR_2));
 }
 if (VAR_0->vdev_leaf_zap != 0) {
  FUNC_0(FUNC_1(VAR_3->spa_meta_objset, VAR_1,
      VAR_0->vdev_leaf_zap, VAR_2));
 }
 for (uint64_t VAR_4 = 0; VAR_4 < VAR_0->vdev_children; VAR_4++) {
  FUNC_2(VAR_0->vdev_child[VAR_4], VAR_1, VAR_2);
 }
}
