
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vdev_children; struct TYPE_5__** vdev_child; int vdev_id; int vdev_spa; } ;
typedef TYPE_1__ vdev_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__** FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__**,int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int ) ;

void
FUNC_4(vdev_t *VAR_3)
{
 vdev_t **VAR_4, *VAR_5;
 int VAR_6 = VAR_3->vdev_children;
 int VAR_7;

 FUNC_0(FUNC_3(VAR_3->vdev_spa, VAR_2, VAR_1) == VAR_2);

 if (VAR_6 == 0)
  return;

 for (int VAR_8 = VAR_7 = 0; VAR_8 < VAR_6; VAR_8++)
  if (VAR_3->vdev_child[VAR_8])
   VAR_7++;

 if (VAR_7 > 0) {
  VAR_4 = FUNC_1(VAR_7 * sizeof (vdev_t *), VAR_0);

  for (int VAR_9 = VAR_7 = 0; VAR_9 < VAR_6; VAR_9++) {
   if ((VAR_5 = VAR_3->vdev_child[VAR_9]) != ((void*)0)) {
    VAR_4[VAR_7] = VAR_5;
    VAR_5->vdev_id = VAR_7++;
   }
  }
 } else {
  VAR_4 = ((void*)0);
 }

 FUNC_2(VAR_3->vdev_child, VAR_6 * sizeof (vdev_t *));
 VAR_3->vdev_child = VAR_4;
 VAR_3->vdev_children = VAR_7;
}
