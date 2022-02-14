
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t vdev_children; int * vdev_child; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_5__ {TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

boolean_t
FUNC_1(spa_t *VAR_2)
{
 vdev_t *VAR_3 = VAR_2->spa_root_vdev;
 for (uint64_t VAR_4 = 0; VAR_4 < VAR_3->vdev_children; VAR_4++) {
  if (!FUNC_0(VAR_3->vdev_child[VAR_4]))
   return (VAR_0);
 }
 return (VAR_1);
}
