
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ vdev_children; struct TYPE_6__** vdev_child; int vdev_dtl_lock; int * vdev_dtl; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;

boolean_t
FUNC_8(vdev_t *VAR_4, uint64_t *VAR_5, uint64_t *VAR_6)
{
 boolean_t VAR_7 = VAR_0;
 uint64_t VAR_8 = VAR_3;
 uint64_t VAR_9 = 0;

 if (VAR_4->vdev_children == 0) {
  FUNC_2(&VAR_4->vdev_dtl_lock);
  if (!FUNC_4(VAR_4->vdev_dtl[VAR_2]) &&
      FUNC_7(VAR_4)) {

   VAR_8 = FUNC_6(VAR_4);
   VAR_9 = FUNC_5(VAR_4);
   VAR_7 = VAR_1;
  }
  FUNC_3(&VAR_4->vdev_dtl_lock);
 } else {
  for (int VAR_10 = 0; VAR_10 < VAR_4->vdev_children; VAR_10++) {
   vdev_t *VAR_11 = VAR_4->vdev_child[VAR_10];
   uint64_t VAR_12, VAR_13;

   if (FUNC_8(VAR_11, &VAR_12, &VAR_13)) {
    VAR_8 = FUNC_1(VAR_8, VAR_12);
    VAR_9 = FUNC_0(VAR_9, VAR_13);
    VAR_7 = VAR_1;
   }
  }
 }

 if (VAR_7 && VAR_5) {
  *VAR_5 = VAR_8;
  *VAR_6 = VAR_9;
 }
 return (VAR_7);
}
