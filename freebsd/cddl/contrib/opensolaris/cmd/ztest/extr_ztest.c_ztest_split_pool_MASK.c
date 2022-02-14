
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int zs_mirrors; int zs_splits; } ;
typedef TYPE_1__ ztest_shared_t ;
typedef int ztest_ds_t ;
struct TYPE_13__ {int vdev_children; int * vdev_ops; scalar_t__ vdev_islog; struct TYPE_13__** vdev_child; } ;
typedef TYPE_2__ vdev_t ;
typedef size_t uint_t ;
typedef int uint64_t ;
struct TYPE_14__ {int spa_props_lock; int spa_config; TYPE_2__* spa_root_vdev; } ;
typedef TYPE_3__ spa_t ;
typedef int nvlist_t ;
struct TYPE_15__ {int zo_raidz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int **) ;
 int ** FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,int *) ;
 scalar_t__ FUNC_6 (int *,int ,int **,size_t) ;
 scalar_t__ FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (int *,int ,int) ;
 scalar_t__ FUNC_9 (int **,int ,int ) ;
 scalar_t__ FUNC_10 (int *,int **,int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int ,int **) ;
 scalar_t__ FUNC_13 (int *,int ,int ***,size_t*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_19 (TYPE_3__*,int ,int ) ;
 int FUNC_20 (char*) ;
 TYPE_3__* FUNC_21 (char*) ;
 int VAR_12 ;
 int FUNC_22 (TYPE_3__*,char*,int *,int *,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_6__ VAR_15 ;
 TYPE_1__* VAR_16 ;
 TYPE_3__* VAR_17 ;
 int VAR_18 ;

void
FUNC_23(ztest_ds_t *VAR_19, uint64_t VAR_20)
{
 ztest_shared_t *VAR_21 = VAR_16;
 spa_t *VAR_22 = VAR_17;
 vdev_t *VAR_23 = VAR_22->spa_root_vdev;
 nvlist_t *VAR_24, **VAR_25, *VAR_26, *VAR_27, **VAR_28;
 uint_t VAR_29, VAR_30, VAR_31 = 0, VAR_32 = 0;
 int VAR_33 = 0;

 FUNC_3(&VAR_18);


 if (VAR_21->zs_mirrors < 3 || VAR_15.zo_raidz > 1) {
  FUNC_4(&VAR_18);
  return;
 }


 (void) FUNC_20("splitp");

 FUNC_18(VAR_22, VAR_5, VAR_1, VAR_3);


 FUNC_3(&VAR_22->spa_props_lock);
 FUNC_0(FUNC_12(VAR_22->spa_config, VAR_11,
     &VAR_24) == 0);
 FUNC_4(&VAR_22->spa_props_lock);

 FUNC_0(FUNC_13(VAR_24, VAR_8, &VAR_25,
     &VAR_30) == 0);

 VAR_28 = FUNC_2(VAR_23->vdev_children * sizeof (nvlist_t *));
 for (VAR_29 = 0; VAR_29 < VAR_30; VAR_29++) {
  vdev_t *VAR_34 = VAR_23->vdev_child[VAR_29];
  nvlist_t **VAR_35;
  uint_t VAR_36;

  if (VAR_34->vdev_islog || VAR_34->vdev_ops == &VAR_13) {
   FUNC_0(FUNC_9(&VAR_28[VAR_31], VAR_2,
       0) == 0);
   FUNC_0(FUNC_7(VAR_28[VAR_31],
       VAR_10, VAR_6) == 0);
   FUNC_0(FUNC_8(VAR_28[VAR_31],
       VAR_9, 1) == 0);
   if (VAR_32 == 0)
    VAR_32 = VAR_31;
   ++VAR_31;
   continue;
  }
  VAR_32 = 0;
  FUNC_0(FUNC_13(VAR_25[VAR_29],
      VAR_8, &VAR_35, &VAR_36) == 0);
  FUNC_0(FUNC_10(VAR_35[0], &VAR_28[VAR_31++], 0) == 0);
 }


 FUNC_0(FUNC_9(&VAR_27, VAR_2, 0) == 0);
 FUNC_0(FUNC_7(VAR_27, VAR_10,
     VAR_7) == 0);
 FUNC_0(FUNC_6(VAR_27, VAR_8, VAR_28,
     VAR_32 != 0 ? VAR_32 : VAR_31) == 0);

 FUNC_0(FUNC_9(&VAR_26, VAR_2, 0) == 0);
 FUNC_0(FUNC_5(VAR_26, VAR_11, VAR_27) == 0);

 for (VAR_29 = 0; VAR_29 < VAR_31; VAR_29++)
  FUNC_11(VAR_28[VAR_29]);
 FUNC_1(VAR_28);
 FUNC_11(VAR_27);

 FUNC_19(VAR_22, VAR_5, VAR_1);

 FUNC_15(&VAR_14, VAR_4);
 VAR_33 = FUNC_22(VAR_22, "splitp", VAR_26, ((void*)0), VAR_0);
 FUNC_16(&VAR_14);

 FUNC_11(VAR_26);

 if (VAR_33 == 0) {
  (void) FUNC_14("successful split - results:\n");
  FUNC_3(&VAR_12);
  FUNC_17(VAR_22);
  FUNC_17(FUNC_21("splitp"));
  FUNC_4(&VAR_12);
  ++VAR_21->zs_splits;
  --VAR_21->zs_mirrors;
 }
 FUNC_4(&VAR_18);
}
