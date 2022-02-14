
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int vdev_children; scalar_t__ vdev_isspare; struct TYPE_7__** vdev_child; scalar_t__ vdev_unspare; int * vdev_ops; } ;
typedef TYPE_1__ vdev_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static vdev_t *
FUNC_4(vdev_t *VAR_4)
{
 vdev_t *VAR_5, *VAR_6;

 for (int VAR_7 = 0; VAR_7 < VAR_4->vdev_children; VAR_7++) {
  VAR_6 = FUNC_4(VAR_4->vdev_child[VAR_7]);
  if (VAR_6 != ((void*)0))
   return (VAR_6);
 }
 if (VAR_4->vdev_ops == &VAR_2) {
  FUNC_0(VAR_4->vdev_children > 1);

  VAR_5 = VAR_4->vdev_child[VAR_4->vdev_children - 1];
  VAR_6 = VAR_4->vdev_child[0];

  if (FUNC_1(VAR_5, VAR_0) &&
      FUNC_1(VAR_5, VAR_1) &&
      !FUNC_2(VAR_6))
   return (VAR_6);
 }





 if (VAR_4->vdev_ops == &VAR_3) {
  vdev_t *VAR_8 = VAR_4->vdev_child[0];
  vdev_t *VAR_9 = VAR_4->vdev_child[VAR_4->vdev_children - 1];

  if (VAR_9->vdev_unspare) {
   VAR_6 = VAR_8;
   VAR_5 = VAR_9;
  } else if (VAR_8->vdev_unspare) {
   VAR_6 = VAR_9;
   VAR_5 = VAR_8;
  } else {
   VAR_6 = ((void*)0);
  }

  if (VAR_6 != ((void*)0) &&
      FUNC_1(VAR_5, VAR_0) &&
      FUNC_1(VAR_5, VAR_1) &&
      !FUNC_2(VAR_6))
   return (VAR_6);

  FUNC_3(VAR_4);
  if (VAR_4->vdev_children > 2) {
   VAR_5 = VAR_4->vdev_child[1];

   if (VAR_5->vdev_isspare && VAR_9->vdev_isspare &&
       FUNC_1(VAR_9, VAR_0) &&
       FUNC_1(VAR_9, VAR_1) &&
       !FUNC_2(VAR_5))
    return (VAR_5);
  }
 }

 return (((void*)0));
}
