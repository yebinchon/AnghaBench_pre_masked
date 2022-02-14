
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t vdev_id; size_t vdev_children; scalar_t__ vdev_guid_sum; struct TYPE_8__* vdev_parent; struct TYPE_8__* vdev_top; struct TYPE_8__** vdev_child; int * vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;
typedef int spa_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,size_t) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__**,TYPE_1__**,size_t) ;
 int FUNC_3 (TYPE_1__**,size_t) ;
 TYPE_1__** FUNC_4 (size_t,int ) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,int ) ;

void
FUNC_6(vdev_t *VAR_3, vdev_t *VAR_4)
{
 size_t VAR_5, VAR_6;
 uint64_t VAR_7 = VAR_4->vdev_id;
 vdev_t **VAR_8;
 spa_t *VAR_9 = VAR_4->vdev_spa;

 FUNC_0(FUNC_5(VAR_9, VAR_2, VAR_1) == VAR_2);
 FUNC_0(VAR_4->vdev_parent == ((void*)0));

 VAR_4->vdev_parent = VAR_3;

 if (VAR_3 == ((void*)0))
  return;

 FUNC_0(VAR_7 >= VAR_3->vdev_children || VAR_3->vdev_child[VAR_7] == ((void*)0));

 VAR_5 = VAR_3->vdev_children * sizeof (vdev_t *);
 VAR_3->vdev_children = FUNC_1(VAR_3->vdev_children, VAR_7 + 1);
 VAR_6 = VAR_3->vdev_children * sizeof (vdev_t *);

 VAR_8 = FUNC_4(VAR_6, VAR_0);
 if (VAR_3->vdev_child != ((void*)0)) {
  FUNC_2(VAR_3->vdev_child, VAR_8, VAR_5);
  FUNC_3(VAR_3->vdev_child, VAR_5);
 }

 VAR_3->vdev_child = VAR_8;
 VAR_3->vdev_child[VAR_7] = VAR_4;

 VAR_4->vdev_top = (VAR_3->vdev_top ? VAR_3->vdev_top: VAR_4);
 FUNC_0(VAR_4->vdev_top->vdev_parent->vdev_parent == ((void*)0));




 for (; VAR_3 != ((void*)0); VAR_3 = VAR_3->vdev_parent)
  VAR_3->vdev_guid_sum += VAR_4->vdev_guid_sum;
}
