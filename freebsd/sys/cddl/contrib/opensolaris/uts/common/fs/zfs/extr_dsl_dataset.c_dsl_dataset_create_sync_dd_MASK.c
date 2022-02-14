
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_15__ ;
typedef struct TYPE_30__ TYPE_10__ ;


typedef void* uint64_t ;
typedef size_t spa_feature_t ;
typedef int objset_t ;
struct TYPE_32__ {int dp_spa; TYPE_3__* dp_origin_snap; int * dp_meta_objset; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_33__ {TYPE_6__* dd_dbuf; int dd_object; TYPE_1__* dd_pool; } ;
typedef TYPE_2__ dsl_dir_t ;
struct TYPE_34__ {TYPE_2__* ds_dir; int ds_object; int ds_deadlist; TYPE_6__* ds_dbuf; scalar_t__* ds_feature_inuse; int ds_bp_rwlock; } ;
typedef TYPE_3__ dsl_dataset_t ;
struct TYPE_35__ {int ds_flags; scalar_t__ ds_guid; int ds_creation_txg; int ds_prev_snap_obj; int ds_prev_snap_txg; int ds_deadlist_obj; int ds_bp; int ds_uncompressed_bytes; int ds_compressed_bytes; int ds_referenced_bytes; int ds_creation_time; int ds_snapnames_zapobj; int ds_fsid_guid; int ds_dir_obj; } ;
typedef TYPE_4__ dsl_dataset_phys_t ;
struct TYPE_36__ {int tx_txg; } ;
typedef TYPE_5__ dmu_tx_t ;
struct TYPE_37__ {TYPE_4__* db_data; } ;
typedef TYPE_6__ dmu_buf_t ;
struct TYPE_31__ {scalar_t__ ds_num_children; int ds_flags; scalar_t__ ds_next_clones_obj; int ds_bp; int ds_uncompressed_bytes; int ds_compressed_bytes; int ds_referenced_bytes; int ds_creation_txg; } ;
struct TYPE_30__ {scalar_t__ dd_head_dataset_obj; scalar_t__ dd_clones; int dd_origin_obj; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (int *,void*,int ,TYPE_6__**) ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*) ;
 void* FUNC_6 (int *,int ,int ,int ,int,TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (void*,size_t,TYPE_5__*) ;
 int FUNC_9 (TYPE_1__*,scalar_t__,int ,TYPE_3__**) ;
 TYPE_15__* FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (int *,TYPE_5__*) ;
 int FUNC_13 (int *,int ,int ,TYPE_5__*) ;
 TYPE_10__* FUNC_14 (TYPE_2__*) ;
 int FUNC_15 () ;
 int FUNC_16 (void*,int) ;
 int FUNC_17 (int *,int ,int ) ;
 int FUNC_18 (int *,int ) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 () ;
 int FUNC_21 (int *,scalar_t__,void*,TYPE_5__*) ;
 void* FUNC_22 (int *,int ,int ,int ,TYPE_5__*) ;
 int FUNC_23 (int *,int ,int ,int ,int ,TYPE_5__*) ;

uint64_t
FUNC_24(dsl_dir_t *VAR_16, dsl_dataset_t *VAR_17,
    uint64_t VAR_18, dmu_tx_t *VAR_19)
{
 dsl_pool_t *VAR_20 = VAR_16->dd_pool;
 dmu_buf_t *VAR_21;
 dsl_dataset_phys_t *VAR_22;
 uint64_t VAR_23;
 objset_t *VAR_24 = VAR_20->dp_meta_objset;

 if (VAR_17 == ((void*)0))
  VAR_17 = VAR_20->dp_origin_snap;

 FUNC_0(VAR_17 == ((void*)0) || VAR_17->ds_dir->dd_pool == VAR_20);
 FUNC_0(VAR_17 == ((void*)0) || FUNC_10(VAR_17)->ds_num_children > 0);
 FUNC_0(FUNC_7(VAR_19));
 FUNC_0(FUNC_14(VAR_16)->dd_head_dataset_obj == 0);

 VAR_23 = FUNC_6(VAR_24, VAR_1, 0,
     VAR_1, sizeof (dsl_dataset_phys_t), VAR_19);
 FUNC_1(FUNC_3(VAR_24, VAR_23, VAR_8, &VAR_21));
 FUNC_5(VAR_21, VAR_19);
 VAR_22 = VAR_21->db_data;
 FUNC_2(VAR_22, sizeof (dsl_dataset_phys_t));
 VAR_22->ds_dir_obj = VAR_16->dd_object;
 VAR_22->ds_flags = VAR_18;
 VAR_22->ds_fsid_guid = FUNC_20();
 do {
  (void) FUNC_16((void*)&VAR_22->ds_guid,
      sizeof (VAR_22->ds_guid));
 } while (VAR_22->ds_guid == 0);
 VAR_22->ds_snapnames_zapobj =
     FUNC_23(VAR_24, VAR_15, VAR_2,
     VAR_4, 0, VAR_19);
 VAR_22->ds_creation_time = FUNC_15();
 VAR_22->ds_creation_txg = VAR_19->tx_txg == VAR_14 ? 1 : VAR_19->tx_txg;

 if (VAR_17 == ((void*)0)) {
  VAR_22->ds_deadlist_obj = FUNC_12(VAR_24, VAR_19);
 } else {
  dsl_dataset_t *VAR_25;

  VAR_22->ds_prev_snap_obj = VAR_17->ds_object;
  VAR_22->ds_prev_snap_txg =
      FUNC_10(VAR_17)->ds_creation_txg;
  VAR_22->ds_referenced_bytes =
      FUNC_10(VAR_17)->ds_referenced_bytes;
  VAR_22->ds_compressed_bytes =
      FUNC_10(VAR_17)->ds_compressed_bytes;
  VAR_22->ds_uncompressed_bytes =
      FUNC_10(VAR_17)->ds_uncompressed_bytes;
  FUNC_17(&VAR_17->ds_bp_rwlock, VAR_9, VAR_8);
  VAR_22->ds_bp = FUNC_10(VAR_17)->ds_bp;
  FUNC_18(&VAR_17->ds_bp_rwlock, VAR_8);





  VAR_22->ds_flags |= FUNC_10(VAR_17)->ds_flags &
      (VAR_6 | VAR_5);

  for (spa_feature_t VAR_26 = 0; VAR_26 < VAR_10; VAR_26++) {
   if (VAR_17->ds_feature_inuse[VAR_26])
    FUNC_8(VAR_23, VAR_26, VAR_19);
  }

  FUNC_5(VAR_17->ds_dbuf, VAR_19);
  FUNC_10(VAR_17)->ds_num_children++;

  FUNC_1(FUNC_9(VAR_20,
      FUNC_14(VAR_17->ds_dir)->dd_head_dataset_obj,
      VAR_8, &VAR_25));
  VAR_22->ds_deadlist_obj = FUNC_13(&VAR_25->ds_deadlist,
      VAR_22->ds_prev_snap_txg, VAR_22->ds_prev_snap_obj, VAR_19);
  FUNC_11(VAR_25, VAR_8);

  if (FUNC_19(VAR_20->dp_spa) >= VAR_12) {
   if (FUNC_10(VAR_17)->ds_next_clones_obj == 0) {
    FUNC_10(VAR_17)->ds_next_clones_obj =
        FUNC_22(VAR_24,
        VAR_3, VAR_4, 0, VAR_19);
   }
   FUNC_1(FUNC_21(VAR_24,
       FUNC_10(VAR_17)->ds_next_clones_obj,
       VAR_23, VAR_19));
  }

  FUNC_5(VAR_16->dd_dbuf, VAR_19);
  FUNC_14(VAR_16)->dd_origin_obj = VAR_17->ds_object;
  if (FUNC_19(VAR_20->dp_spa) >= VAR_11) {
   if (FUNC_14(VAR_17->ds_dir)->dd_clones == 0) {
    FUNC_5(VAR_17->ds_dir->dd_dbuf, VAR_19);
    FUNC_14(VAR_17->ds_dir)->dd_clones =
        FUNC_22(VAR_24,
        VAR_0, VAR_4, 0, VAR_19);
   }
   FUNC_1(FUNC_21(VAR_24,
       FUNC_14(VAR_17->ds_dir)->dd_clones,
       VAR_23, VAR_19));
  }
 }

 if (FUNC_19(VAR_20->dp_spa) >= VAR_13)
  VAR_22->ds_flags |= VAR_7;

 FUNC_4(VAR_21, VAR_8);

 FUNC_5(VAR_16->dd_dbuf, VAR_19);
 FUNC_14(VAR_16)->dd_head_dataset_obj = VAR_23;

 return (VAR_23);
}
