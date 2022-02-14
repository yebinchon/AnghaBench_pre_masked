
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ztest_ds_t ;
struct TYPE_12__ {int vdev_guid; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
struct TYPE_13__ {int * spa_vdev_removal; } ;
typedef TYPE_2__ spa_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 TYPE_1__* FUNC_9 (TYPE_2__*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (TYPE_2__*,scalar_t__) ;
 TYPE_2__* VAR_7 ;
 int VAR_8 ;

void
FUNC_11(ztest_ds_t *VAR_9, uint64_t VAR_10)
{
 spa_t *VAR_11 = VAR_7;
 vdev_t *VAR_12;
 uint64_t VAR_13;
 int VAR_14;

 FUNC_1(&VAR_8);

 if (VAR_6) {
  FUNC_2(&VAR_8);
  return;
 }




 FUNC_3(VAR_11, VAR_5, VAR_2, VAR_4);
 VAR_12 = FUNC_9(VAR_11, FUNC_10(VAR_11, VAR_0));
 VAR_13 = VAR_12->vdev_guid;
 FUNC_4(VAR_11, VAR_5, VAR_2);

 VAR_14 = FUNC_7(VAR_11, VAR_13, VAR_0);
 if (VAR_14 == 0) {
  VAR_6 = VAR_1;
  FUNC_2(&VAR_8);

  while (VAR_11->spa_vdev_removal != ((void*)0))
   FUNC_8(FUNC_5(VAR_11), 0);
 } else {
  FUNC_2(&VAR_8);
  return;
 }







 VAR_14 = FUNC_6(VAR_11, VAR_3);
 if (VAR_14 == 0) {
  while (FUNC_0(FUNC_5(VAR_11)))
   FUNC_8(FUNC_5(VAR_11), 0);
 }

 FUNC_1(&VAR_8);
 VAR_6 = VAR_0;
 FUNC_2(&VAR_8);
}
