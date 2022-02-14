
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;


typedef int uint64_t ;
struct TYPE_18__ {int tx_open_txg; } ;
struct TYPE_19__ {int dp_config_rwlock; TYPE_1__ dp_tx; int dp_tmp_userrefs_obj; int dp_meta_objset; int dp_empty_bpobj; int dp_spa; int dp_bptree_obj; int * dp_leak_dir; int dp_obsolete_bpobj; int dp_free_bpobj; int * dp_free_dir; int * dp_origin_snap; int * dp_mos_dir; int dp_root_dir; int dp_root_dir_obj; } ;
typedef TYPE_2__ dsl_pool_t ;
typedef int dsl_dir_t ;
typedef int dsl_dataset_t ;
struct TYPE_20__ {int dd_head_dataset_obj; } ;
struct TYPE_17__ {int ds_prev_snap_obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,TYPE_2__*,int **) ;
 TYPE_13__* FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int *,TYPE_2__*,int *) ;
 TYPE_9__* FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ,int **) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (int *,int ,TYPE_2__*) ;
 int FUNC_11 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int ,int,int,int *) ;

int
FUNC_15(dsl_pool_t *VAR_19)
{
 int VAR_20;
 dsl_dir_t *VAR_21;
 dsl_dataset_t *VAR_22;
 uint64_t VAR_23;

 FUNC_10(&VAR_19->dp_config_rwlock, VAR_13, VAR_9);
 VAR_20 = FUNC_14(VAR_19->dp_meta_objset, VAR_1,
     VAR_5, sizeof (uint64_t), 1,
     &VAR_19->dp_root_dir_obj);
 if (VAR_20)
  goto out;

 VAR_20 = FUNC_5(VAR_19, VAR_19->dp_root_dir_obj,
     ((void*)0), VAR_19, &VAR_19->dp_root_dir);
 if (VAR_20)
  goto out;

 VAR_20 = FUNC_8(VAR_19, VAR_11, &VAR_19->dp_mos_dir);
 if (VAR_20)
  goto out;

 if (FUNC_13(VAR_19->dp_spa) >= VAR_18) {
  VAR_20 = FUNC_8(VAR_19, VAR_12, &VAR_21);
  if (VAR_20)
   goto out;
  VAR_20 = FUNC_2(VAR_19,
      FUNC_6(VAR_21)->dd_head_dataset_obj, VAR_9, &VAR_22);
  if (VAR_20 == 0) {
   VAR_20 = FUNC_2(VAR_19,
       FUNC_3(VAR_22)->ds_prev_snap_obj, VAR_19,
       &VAR_19->dp_origin_snap);
   FUNC_4(VAR_22, VAR_9);
  }
  FUNC_7(VAR_21, VAR_19);
  if (VAR_20)
   goto out;
 }

 if (FUNC_13(VAR_19->dp_spa) >= VAR_17) {
  VAR_20 = FUNC_8(VAR_19, VAR_8,
      &VAR_19->dp_free_dir);
  if (VAR_20)
   goto out;

  VAR_20 = FUNC_14(VAR_19->dp_meta_objset, VAR_1,
      VAR_3, sizeof (uint64_t), 1, &VAR_23);
  if (VAR_20)
   goto out;
  FUNC_0(FUNC_1(&VAR_19->dp_free_bpobj,
      VAR_19->dp_meta_objset, VAR_23));
 }

 if (FUNC_12(VAR_19->dp_spa, VAR_16)) {
  VAR_20 = FUNC_14(VAR_19->dp_meta_objset, VAR_1,
      VAR_4, sizeof (uint64_t), 1, &VAR_23);
  if (VAR_20 == 0) {
   FUNC_0(FUNC_1(&VAR_19->dp_obsolete_bpobj,
       VAR_19->dp_meta_objset, VAR_23));
  } else if (VAR_20 == VAR_7) {



   VAR_20 = 0;
  } else {
   goto out;
  }
 }





 (void) FUNC_8(VAR_19, VAR_10,
     &VAR_19->dp_leak_dir);

 if (FUNC_12(VAR_19->dp_spa, VAR_14)) {
  VAR_20 = FUNC_14(VAR_19->dp_meta_objset, VAR_1,
      VAR_0, sizeof (uint64_t), 1,
      &VAR_19->dp_bptree_obj);
  if (VAR_20 != 0)
   goto out;
 }

 if (FUNC_12(VAR_19->dp_spa, VAR_15)) {
  VAR_20 = FUNC_14(VAR_19->dp_meta_objset, VAR_1,
      VAR_2, sizeof (uint64_t), 1,
      &VAR_19->dp_empty_bpobj);
  if (VAR_20 != 0)
   goto out;
 }

 VAR_20 = FUNC_14(VAR_19->dp_meta_objset, VAR_1,
     VAR_6, sizeof (uint64_t), 1,
     &VAR_19->dp_tmp_userrefs_obj);
 if (VAR_20 == VAR_7)
  VAR_20 = 0;
 if (VAR_20)
  goto out;

 VAR_20 = FUNC_9(VAR_19, VAR_19->dp_tx.tx_open_txg);

out:
 FUNC_11(&VAR_19->dp_config_rwlock, VAR_9);
 return (VAR_20);
}
