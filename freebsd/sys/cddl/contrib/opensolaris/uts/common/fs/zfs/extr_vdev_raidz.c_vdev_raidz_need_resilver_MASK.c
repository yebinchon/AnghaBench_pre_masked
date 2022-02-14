
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t vdev_children; size_t vdev_nparity; struct TYPE_6__** vdev_child; TYPE_1__* vdev_top; } ;
typedef TYPE_2__ vdev_t ;
typedef size_t uint64_t ;
typedef int boolean_t ;
struct TYPE_5__ {size_t vdev_ashift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static boolean_t
FUNC_1(vdev_t *VAR_3, uint64_t VAR_4, size_t VAR_5)
{
 uint64_t VAR_6 = VAR_3->vdev_children;
 uint64_t VAR_7 = VAR_3->vdev_nparity;
 uint64_t VAR_8 = VAR_3->vdev_top->vdev_ashift;

 uint64_t VAR_9 = VAR_4 >> VAR_8;

 uint64_t VAR_10 = ((VAR_5 - 1) >> VAR_8) + 1;

 uint64_t VAR_11 = VAR_9 % VAR_6;

 if (VAR_10 + VAR_7 >= VAR_6)
  return (VAR_1);

 for (uint64_t VAR_12 = 0; VAR_12 < VAR_10 + VAR_7; VAR_12++) {
  uint64_t VAR_13 = (VAR_11 + VAR_12) % VAR_6;
  vdev_t *VAR_14 = VAR_3->vdev_child[VAR_13];






  if (!FUNC_0(VAR_14, VAR_2))
   return (VAR_1);
 }

 return (VAR_0);
}
