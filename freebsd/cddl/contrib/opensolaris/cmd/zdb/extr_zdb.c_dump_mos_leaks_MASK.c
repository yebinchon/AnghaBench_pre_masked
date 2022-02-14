
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_9__ ;
typedef struct TYPE_40__ TYPE_8__ ;
typedef struct TYPE_39__ TYPE_7__ ;
typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_24__ ;
typedef struct TYPE_32__ TYPE_23__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_19__ ;
typedef struct TYPE_29__ TYPE_12__ ;
typedef struct TYPE_28__ TYPE_11__ ;
typedef struct TYPE_27__ TYPE_10__ ;


struct TYPE_39__ {TYPE_6__* vim_phys; } ;
typedef TYPE_7__ vdev_indirect_mapping_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
struct TYPE_37__ {int scip_next_mapping_object; int scip_prev_obsolete_sm_object; } ;
struct TYPE_36__ {int sav_object; } ;
struct TYPE_35__ {int sav_object; } ;
struct TYPE_40__ {TYPE_12__** spa_ddt; int spa_root_vdev; TYPE_5__ spa_condensing_indirect_phys; TYPE_4__ spa_spares; TYPE_3__ spa_l2cache; int spa_deferred_bpobj; TYPE_9__* spa_dsl_pool; int spa_all_vdev_zaps; int spa_errlog_scrub; int spa_errlog_last; int spa_history; int spa_feat_for_write_obj; int spa_feat_for_read_obj; int spa_feat_enabled_txg_obj; int spa_feat_desc_obj; int spa_ddt_stat_object; int spa_config_object; int spa_pool_props_object; int * spa_meta_objset; } ;
typedef TYPE_8__ spa_t ;
typedef int objset_t ;
struct TYPE_41__ {int * dp_leak_dir; int * dp_free_dir; int * dp_mos_dir; TYPE_10__* dp_origin_snap; int dp_free_bpobj; int dp_obsolete_bpobj; int dp_empty_bpobj; TYPE_2__* dp_scan; int dp_tmp_userrefs_obj; int dp_bptree_obj; } ;
typedef TYPE_9__ dsl_pool_t ;
struct TYPE_27__ {int ds_deadlist; } ;
typedef TYPE_10__ dsl_dataset_t ;
struct TYPE_28__ {int doi_type; } ;
typedef TYPE_11__ dmu_object_info_t ;
typedef size_t dmu_object_byteswap_t ;
struct TYPE_29__ {int ** ddt_object; } ;
typedef TYPE_12__ ddt_t ;
struct TYPE_38__ {int vimp_counts_object; } ;
struct TYPE_31__ {int scn_queue_obj; } ;
struct TYPE_34__ {TYPE_1__ scn_phys; } ;
struct TYPE_33__ {char* ot_name; } ;
struct TYPE_32__ {char* ob_name; } ;
struct TYPE_30__ {int ds_next_snap_obj; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_10__*) ;
 int FUNC_5 (int *,scalar_t__,TYPE_11__*) ;
 scalar_t__ FUNC_6 (int *,scalar_t__*,int ,int ) ;
 TYPE_24__* VAR_7 ;
 TYPE_23__* VAR_8 ;
 int FUNC_7 (TYPE_9__*,int ,int ,TYPE_10__**) ;
 TYPE_19__* FUNC_8 (TYPE_10__*) ;
 int FUNC_9 (TYPE_10__*,int ) ;
 int FUNC_10 (TYPE_9__*,int ) ;
 int FUNC_11 (TYPE_9__*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int VAR_9 ;
 int FUNC_14 (int ) ;
 int VAR_10 ;
 int FUNC_15 (char*,int ,char const*) ;
 scalar_t__ FUNC_16 (int ,scalar_t__,int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,scalar_t__,int) ;
 int FUNC_20 (int ,int *,int *) ;
 int FUNC_21 (int ,int ,int *) ;
 int FUNC_22 (TYPE_7__*) ;
 TYPE_7__* FUNC_23 (int *,int ) ;

__attribute__((used)) static int
FUNC_24(spa_t *VAR_11)
{
 int VAR_12 = 0;
 objset_t *VAR_13 = VAR_11->spa_meta_objset;
 dsl_pool_t *VAR_14 = VAR_11->spa_dsl_pool;



 FUNC_14(VAR_4);
 FUNC_14(VAR_11->spa_pool_props_object);
 FUNC_14(VAR_11->spa_config_object);
 FUNC_14(VAR_11->spa_ddt_stat_object);
 FUNC_14(VAR_11->spa_feat_desc_obj);
 FUNC_14(VAR_11->spa_feat_enabled_txg_obj);
 FUNC_14(VAR_11->spa_feat_for_read_obj);
 FUNC_14(VAR_11->spa_feat_for_write_obj);
 FUNC_14(VAR_11->spa_history);
 FUNC_14(VAR_11->spa_errlog_last);
 FUNC_14(VAR_11->spa_errlog_scrub);
 FUNC_14(VAR_11->spa_all_vdev_zaps);
 FUNC_14(VAR_11->spa_dsl_pool->dp_bptree_obj);
 FUNC_14(VAR_11->spa_dsl_pool->dp_tmp_userrefs_obj);
 FUNC_14(VAR_11->spa_dsl_pool->dp_scan->scn_phys.scn_queue_obj);
 FUNC_2(&VAR_11->spa_deferred_bpobj);
 FUNC_14(VAR_14->dp_empty_bpobj);
 FUNC_2(&VAR_14->dp_obsolete_bpobj);
 FUNC_2(&VAR_14->dp_free_bpobj);
 FUNC_14(VAR_11->spa_l2cache.sav_object);
 FUNC_14(VAR_11->spa_spares.sav_object);

 FUNC_14(VAR_11->spa_condensing_indirect_phys.
     scip_next_mapping_object);
 FUNC_14(VAR_11->spa_condensing_indirect_phys.
     scip_prev_obsolete_sm_object);
 if (VAR_11->spa_condensing_indirect_phys.scip_next_mapping_object != 0) {
  vdev_indirect_mapping_t *VAR_15 =
      FUNC_23(VAR_13,
      VAR_11->spa_condensing_indirect_phys.scip_next_mapping_object);
  FUNC_14(VAR_15->vim_phys->vimp_counts_object);
  FUNC_22(VAR_15);
 }

 if (VAR_14->dp_origin_snap != ((void*)0)) {
  dsl_dataset_t *VAR_16;

  FUNC_10(VAR_14, VAR_5);
  FUNC_1(FUNC_7(VAR_14,
      FUNC_8(VAR_14->dp_origin_snap)->ds_next_snap_obj,
      VAR_5, &VAR_16));
  FUNC_4(VAR_16);
  FUNC_12(&VAR_16->ds_deadlist);
  FUNC_9(VAR_16, VAR_5);
  FUNC_11(VAR_14, VAR_5);

  FUNC_4(VAR_14->dp_origin_snap);
  FUNC_12(&VAR_14->dp_origin_snap->ds_deadlist);
 }
 FUNC_3(VAR_14->dp_mos_dir);
 if (VAR_14->dp_free_dir != ((void*)0))
  FUNC_3(VAR_14->dp_free_dir);
 if (VAR_14->dp_leak_dir != ((void*)0))
  FUNC_3(VAR_14->dp_leak_dir);

 FUNC_13(VAR_11->spa_root_vdev);

 for (uint64_t VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {
  for (uint64_t VAR_18 = 0; VAR_18 < VAR_2; VAR_18++) {
   for (uint64_t VAR_19 = 0;
       VAR_19 < VAR_6; VAR_19++) {
    ddt_t *VAR_20 = VAR_11->spa_ddt[VAR_19];
    FUNC_14(VAR_20->ddt_object[VAR_18][VAR_17]);
   }
  }
 }




 uint64_t VAR_21 = 0;
 while (FUNC_6(VAR_13, &VAR_21, VAR_0, 0) == 0) {
  if (FUNC_16(VAR_10, VAR_21, 1)) {
   FUNC_19(VAR_10, VAR_21, 1);
  } else {
   dmu_object_info_t VAR_22;
   const char *VAR_23;
   FUNC_5(VAR_13, VAR_21, &VAR_22);
   if (VAR_22.doi_type & VAR_3) {
    dmu_object_byteswap_t VAR_24 =
        FUNC_0(VAR_22.doi_type);
    VAR_23 = VAR_8[VAR_24].ob_name;
   } else {
    VAR_23 = VAR_7[VAR_22.doi_type].ot_name;
   }

   (void) FUNC_15("MOS object %llu (%s) leaked\n",
       (u_longlong_t)VAR_21, VAR_23);
   VAR_12 = 2;
  }
 }
 (void) FUNC_21(VAR_10, VAR_9, ((void*)0));
 if (!FUNC_18(VAR_10))
  VAR_12 = 2;
 FUNC_20(VAR_10, ((void*)0), ((void*)0));
 FUNC_17(VAR_10);
 return (VAR_12);
}
