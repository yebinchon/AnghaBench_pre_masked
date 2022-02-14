
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int vdev_reopening; int * vdev_aux; int vdev_offline; TYPE_2__* vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
struct TYPE_16__ {int spa_l2cache; } ;
typedef TYPE_2__ spa_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;

void
FUNC_11(vdev_t *VAR_2)
{
 spa_t *VAR_3 = VAR_2->vdev_spa;

 FUNC_0(FUNC_3(VAR_3, VAR_1, VAR_0) == VAR_1);


 VAR_2->vdev_reopening = !VAR_2->vdev_offline;
 FUNC_4(VAR_2);
 (void) FUNC_5(VAR_2);






 if (VAR_2->vdev_aux) {
  (void) FUNC_9(VAR_2);
  if (FUNC_7(VAR_2) && FUNC_10(VAR_2) &&
      VAR_2->vdev_aux == &VAR_3->spa_l2cache &&
      !FUNC_2(VAR_2))
   FUNC_1(VAR_3, VAR_2);
 } else {
  (void) FUNC_8(VAR_2);
 }




 FUNC_6(VAR_2);
}
