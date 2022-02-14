
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t vdev_children; scalar_t__ vdev_top_zap; int vdev_ashift; int vdev_asize; struct TYPE_5__** vdev_child; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;
typedef int space_map_t ;
struct TYPE_6__ {int spa_meta_objset; TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,size_t,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,int ) ;
 int FUNC_7 (int ,scalar_t__,int ,int,int,size_t*) ;

__attribute__((used)) static void
FUNC_8(spa_t *VAR_1)
{
 vdev_t *VAR_2 = VAR_1->spa_root_vdev;

 for (uint64_t VAR_3 = 0; VAR_3 < VAR_2->vdev_children; VAR_3++) {
  vdev_t *VAR_4 = VAR_2->vdev_child[VAR_3];

  space_map_t *VAR_5 = ((void*)0);
  uint64_t VAR_6;

  if (VAR_4->vdev_top_zap == 0)
   continue;

  if (FUNC_6(FUNC_2(VAR_1), VAR_4->vdev_top_zap,
      VAR_0) != 0)
   continue;

  FUNC_0(FUNC_7(FUNC_2(VAR_1), VAR_4->vdev_top_zap,
      VAR_0,
      sizeof (uint64_t), 1, &VAR_6));

  FUNC_0(FUNC_4(&VAR_5, FUNC_2(VAR_1),
      VAR_6, 0, VAR_4->vdev_asize, VAR_4->vdev_ashift));
  FUNC_5(VAR_5);
  FUNC_1(VAR_1->spa_meta_objset, VAR_5);
  FUNC_3(VAR_5);
 }
}
