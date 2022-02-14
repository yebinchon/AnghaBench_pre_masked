
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int zs_vdev_next_leaf; scalar_t__ zs_mirrors; scalar_t__ zs_splits; } ;
typedef TYPE_3__ ztest_shared_t ;
typedef int ztest_ds_t ;
typedef int uint64_t ;
typedef int spa_t ;
typedef int nvlist_t ;
struct TYPE_11__ {TYPE_2__* mc_rotor; } ;
struct TYPE_10__ {int zo_raidz; int zo_vdev_size; } ;
struct TYPE_8__ {TYPE_1__* mg_vd; } ;
struct TYPE_7__ {int vdev_guid; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *,int *,int ,int ,int,int,scalar_t__,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ,int ) ;
 int FUNC_10 (int *,int ,int ) ;
 scalar_t__ FUNC_11 (int *) ;
 TYPE_6__* FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int,int ) ;
 int VAR_5 ;
 TYPE_5__ VAR_6 ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (char*) ;
 TYPE_3__* VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;

void
FUNC_17(ztest_ds_t *VAR_10, uint64_t VAR_11)
{
 ztest_shared_t *VAR_12 = VAR_7;
 spa_t *VAR_13 = VAR_8;
 uint64_t VAR_14;
 uint64_t VAR_15;
 nvlist_t *VAR_16;
 int VAR_17;

 FUNC_4(&VAR_9);
 VAR_14 = FUNC_0(VAR_12->zs_mirrors + VAR_12->zs_splits, 1) * VAR_6.zo_raidz;

 FUNC_9(VAR_13, VAR_4, VAR_1, VAR_2);

 VAR_7->zs_vdev_next_leaf = FUNC_2(VAR_13) * VAR_14;




 if (FUNC_11(VAR_13) && FUNC_15(4) == 0) {



  VAR_15 = FUNC_12(VAR_13)->mc_rotor->mg_vd->vdev_guid;

  FUNC_10(VAR_13, VAR_4, VAR_1);
  FUNC_7(&VAR_5, VAR_3);
  VAR_17 = FUNC_14(VAR_13, VAR_15, VAR_0);
  FUNC_8(&VAR_5);

  switch (VAR_17) {
  case 0:
  case 131:
  case 129:
  case 128:
   break;
  default:
   FUNC_1(0, "spa_vdev_remove() = %d", VAR_17);
  }
 } else {
  FUNC_10(VAR_13, VAR_4, VAR_1);




  VAR_16 = FUNC_3(((void*)0), ((void*)0), ((void*)0),
      VAR_6.zo_vdev_size, 0,
      FUNC_15(4) == 0, VAR_6.zo_raidz,
      VAR_12->zs_mirrors, 1);

  VAR_17 = FUNC_13(VAR_13, VAR_16);
  FUNC_6(VAR_16);

  switch (VAR_17) {
  case 0:
   break;
  case 130:
   FUNC_16("spa_vdev_add");
   break;
  default:
   FUNC_1(0, "spa_vdev_add() = %d", VAR_17);
  }
 }

 FUNC_5(&VAR_9);
}
