
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int vdev_children; int vdev_detached; TYPE_1__* vdev_top; struct TYPE_7__** vdev_child; } ;
typedef TYPE_2__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_6__ {scalar_t__ vdev_removing; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 size_t FUNC_2 (int) ;

__attribute__((used)) static vdev_t *
FUNC_3(vdev_t *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return (((void*)0));

 if (VAR_0->vdev_children == 0)
  return (VAR_0);

 vdev_t *VAR_1[VAR_0->vdev_children];
 int VAR_2 = 0, VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0->vdev_children; VAR_3++) {
  vdev_t *VAR_4 = VAR_0->vdev_child[VAR_3];
  if (VAR_4->vdev_top->vdev_removing)
   continue;
  if (VAR_4->vdev_children > 0 ||
      (FUNC_1(VAR_4) && !VAR_4->vdev_detached)) {
   VAR_1[VAR_2++] = VAR_4;
  }
 }
 FUNC_0(VAR_2 > 0);

 uint64_t VAR_5 = FUNC_2(VAR_2);
 return (FUNC_3(VAR_1[VAR_5]));
}
