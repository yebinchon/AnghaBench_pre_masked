
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t vdev_children; scalar_t__ vdev_islog; struct TYPE_6__** vdev_child; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_7__ {TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static uint64_t
FUNC_2(spa_t *VAR_0)
{
 vdev_t *VAR_1 = VAR_0->spa_root_vdev;
 uint64_t VAR_2 = 0;

 for (uint64_t VAR_3 = 0; VAR_3 < VAR_1->vdev_children; VAR_3++) {
  vdev_t *VAR_4 = VAR_1->vdev_child[VAR_3];
  if (VAR_4->vdev_islog)
   continue;
  if (FUNC_0(VAR_4) && !FUNC_1(VAR_4))
   VAR_2++;
 }

 return (VAR_2);
}
