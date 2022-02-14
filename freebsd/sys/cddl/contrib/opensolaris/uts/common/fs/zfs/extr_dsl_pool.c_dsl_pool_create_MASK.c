
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
typedef int objset_t ;
typedef int nvlist_t ;
struct TYPE_17__ {int dp_config_rwlock; int * dp_spa; int * dp_root_dir; void* dp_meta_objset; int dp_free_bpobj; int dp_free_dir; int dp_mos_dir; int dp_root_dir_obj; int dp_meta_rootbp; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_18__ {int ds_bp_rwlock; } ;
typedef TYPE_2__ dsl_dataset_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,int ,int *) ;
 int FUNC_4 (int *,void*,int ) ;
 void* FUNC_5 (int *,TYPE_2__*,int *,int ,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int *,int *,int ,int *) ;
 int * FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*,int ,int ,TYPE_2__**) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_1__*,int *,int *,int *) ;
 int FUNC_13 (TYPE_1__*,int ,int *,TYPE_1__*,int **) ;
 int FUNC_14 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_15 (int *,int ) ;
 int FUNC_16 (TYPE_1__*,int *,int *) ;
 int FUNC_17 (TYPE_1__*,int ) ;
 int VAR_14 ;
 int FUNC_18 (int *,int ,int ) ;
 int FUNC_19 (int *,int ) ;
 scalar_t__ FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (void*,int ,int ,int,int,int *,int *) ;
 int FUNC_22 (void*,int ,int ,int ,int ,int *) ;
 int FUNC_23 (int *,int ,int *,int *) ;

dsl_pool_t *
FUNC_24(spa_t *VAR_15, nvlist_t *VAR_16, uint64_t VAR_17)
{
 int VAR_18;
 dsl_pool_t *VAR_19 = FUNC_15(VAR_15, VAR_17);
 dmu_tx_t *VAR_20 = FUNC_7(VAR_19, VAR_17);
 dsl_dataset_t *VAR_21;
 uint64_t VAR_22;

 FUNC_18(&VAR_19->dp_config_rwlock, VAR_10, VAR_7);


 VAR_19->dp_meta_objset = FUNC_5(VAR_15,
     ((void*)0), &VAR_19->dp_meta_rootbp, VAR_0, VAR_20);


 VAR_18 = FUNC_22(VAR_19->dp_meta_objset, VAR_4,
     VAR_3, VAR_2, 0, VAR_20);
 FUNC_0(VAR_18);


 FUNC_2(FUNC_17(VAR_19, VAR_17));


 VAR_19->dp_root_dir_obj = FUNC_12(VAR_19, ((void*)0), ((void*)0), VAR_20);
 FUNC_2(FUNC_13(VAR_19, VAR_19->dp_root_dir_obj,
     ((void*)0), VAR_19, &VAR_19->dp_root_dir));


 (void) FUNC_12(VAR_19, VAR_19->dp_root_dir, VAR_8, VAR_20);
 FUNC_2(FUNC_16(VAR_19,
     VAR_8, &VAR_19->dp_mos_dir));

 if (FUNC_20(VAR_15) >= VAR_12) {

  (void) FUNC_12(VAR_19, VAR_19->dp_root_dir,
      VAR_6, VAR_20);
  FUNC_2(FUNC_16(VAR_19,
      VAR_6, &VAR_19->dp_free_dir));


  VAR_22 = FUNC_3(VAR_19->dp_meta_objset, VAR_11, VAR_20);
  FUNC_1(FUNC_21(VAR_19->dp_meta_objset, VAR_4,
      VAR_5, sizeof (uint64_t), 1, &VAR_22, VAR_20) == 0);
  FUNC_2(FUNC_4(&VAR_19->dp_free_bpobj,
      VAR_19->dp_meta_objset, VAR_22));
 }

 if (FUNC_20(VAR_15) >= VAR_13)
  FUNC_14(VAR_19, VAR_20);


 VAR_22 = FUNC_8(VAR_19->dp_root_dir, ((void*)0), 0, VAR_20);


 FUNC_2(FUNC_10(VAR_19, VAR_22, VAR_7, &VAR_21));
 FUNC_11(VAR_21, VAR_7);

 FUNC_6(VAR_20);

 FUNC_19(&VAR_19->dp_config_rwlock, VAR_7);

 return (VAR_19);
}
