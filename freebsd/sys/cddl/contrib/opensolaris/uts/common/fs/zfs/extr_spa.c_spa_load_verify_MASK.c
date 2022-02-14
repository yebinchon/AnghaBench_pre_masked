
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_16__ {int zlp_rewind; scalar_t__ zlp_maxmeta; scalar_t__ zlp_maxdata; } ;
typedef TYPE_2__ zpool_load_policy_t ;
typedef int zio_t ;
typedef scalar_t__ u_longlong_t ;
struct TYPE_15__ {scalar_t__ ub_timestamp; int ub_txg; } ;
struct TYPE_17__ {scalar_t__ spa_load_meta_errors; scalar_t__ spa_load_data_errors; scalar_t__ spa_load_txg_ts; scalar_t__ spa_last_ubsync_txg_ts; TYPE_1__ spa_uberblock; int spa_load_max_txg; int spa_load_info; int spa_load_txg; int spa_verify_min_txg; scalar_t__ spa_extreme_rewind; TYPE_11__* spa_dsl_pool; int spa_config; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_18__ {scalar_t__ sle_meta_count; scalar_t__ sle_data_count; int member_0; } ;
typedef TYPE_4__ spa_load_error_t ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_14__ {int dp_root_dir_obj; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_11__*,int ,int ,int *,int ) ;
 int FUNC_3 (TYPE_11__*,int ) ;
 int FUNC_4 (TYPE_11__*,int ) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (TYPE_3__*,char*,scalar_t__,scalar_t__) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_8 (TYPE_3__*,int ,int,int ,int *) ;
 int VAR_18 ;
 int * FUNC_9 (TYPE_3__*,int *,TYPE_4__*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_12(spa_t *VAR_19)
{
 zio_t *VAR_20;
 spa_load_error_t VAR_21 = { 0 };
 zpool_load_policy_t VAR_22;
 boolean_t VAR_23 = VAR_0;
 int VAR_24 = 0;

 FUNC_11(VAR_19->spa_config, &VAR_22);

 if (VAR_22.zlp_rewind & VAR_13)
  return (0);

 FUNC_3(VAR_19->spa_dsl_pool, VAR_5);
 VAR_24 = FUNC_2(VAR_19->spa_dsl_pool,
     VAR_19->spa_dsl_pool->dp_root_dir_obj, VAR_18, ((void*)0),
     VAR_2);
 FUNC_4(VAR_19->spa_dsl_pool, VAR_5);
 if (VAR_24 != 0)
  return (VAR_24);

 VAR_20 = FUNC_9(VAR_19, ((void*)0), &VAR_21,
     VAR_8 | VAR_9);

 if (VAR_17) {
  if (VAR_19->spa_extreme_rewind) {
   FUNC_7(VAR_19, "performing a complete scan of the "
       "pool since extreme rewind is on. This may take "
       "a very long time.\n  (spa_load_verify_data=%u, "
       "spa_load_verify_metadata=%u)",
       VAR_15, VAR_17);
  }
  VAR_24 = FUNC_8(VAR_19, VAR_19->spa_verify_min_txg,
      VAR_6 | VAR_7,
      VAR_14, VAR_20);
 }

 (void) FUNC_10(VAR_20);

 VAR_19->spa_load_meta_errors = VAR_21.sle_meta_count;
 VAR_19->spa_load_data_errors = VAR_21.sle_data_count;

 if (VAR_21.sle_meta_count != 0 || VAR_21.sle_data_count != 0) {
  FUNC_7(VAR_19, "spa_load_verify found %llu metadata errors "
      "and %llu data errors", (u_longlong_t)VAR_21.sle_meta_count,
      (u_longlong_t)VAR_21.sle_data_count);
 }

 if (VAR_16 ||
     (!VAR_24 && VAR_21.sle_meta_count <= VAR_22.zlp_maxmeta &&
     VAR_21.sle_data_count <= VAR_22.zlp_maxdata)) {
  int64_t VAR_25 = 0;

  VAR_23 = VAR_1;
  VAR_19->spa_load_txg = VAR_19->spa_uberblock.ub_txg;
  VAR_19->spa_load_txg_ts = VAR_19->spa_uberblock.ub_timestamp;

  VAR_25 = VAR_19->spa_last_ubsync_txg_ts - VAR_19->spa_load_txg_ts;
  FUNC_1(FUNC_6(VAR_19->spa_load_info,
      VAR_11, VAR_19->spa_load_txg_ts) == 0);
  FUNC_1(FUNC_5(VAR_19->spa_load_info,
      VAR_12, VAR_25) == 0);
  FUNC_1(FUNC_6(VAR_19->spa_load_info,
      VAR_10, VAR_21.sle_data_count) == 0);
 } else {
  VAR_19->spa_load_max_txg = VAR_19->spa_uberblock.ub_txg;
 }

 if (VAR_16)
  return (0);

 if (VAR_24) {
  if (VAR_24 != VAR_4 && VAR_24 != VAR_3)
   VAR_24 = FUNC_0(VAR_3);
  return (VAR_24);
 }

 return (VAR_23 ? 0 : VAR_3);
}
