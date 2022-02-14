
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t vdev_children; struct TYPE_4__** vdev_child; int vdev_leaf_zap; int vdev_top_zap; TYPE_2__* vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_5__ {int spa_all_vdev_zaps; int spa_meta_objset; } ;
typedef TYPE_2__ spa_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static uint64_t
FUNC_2(vdev_t *VAR_0)
{
 spa_t *VAR_1 = VAR_0->vdev_spa;
 uint64_t VAR_2 = 0;
 if (VAR_0->vdev_top_zap != 0) {
  VAR_2++;
  FUNC_0(FUNC_1(VAR_1->spa_meta_objset,
      VAR_1->spa_all_vdev_zaps, VAR_0->vdev_top_zap));
 }
 if (VAR_0->vdev_leaf_zap != 0) {
  VAR_2++;
  FUNC_0(FUNC_1(VAR_1->spa_meta_objset,
      VAR_1->spa_all_vdev_zaps, VAR_0->vdev_leaf_zap));
 }

 for (uint64_t VAR_3 = 0; VAR_3 < VAR_0->vdev_children; VAR_3++) {
  VAR_2 += FUNC_2(VAR_0->vdev_child[VAR_3]);
 }

 return (VAR_2);
}
