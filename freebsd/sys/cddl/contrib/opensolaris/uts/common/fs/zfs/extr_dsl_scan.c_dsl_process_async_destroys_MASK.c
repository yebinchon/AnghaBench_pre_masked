
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_11__ ;


typedef int spa_t ;
typedef int longlong_t ;
struct TYPE_21__ {int scn_async_destroying; int scn_async_stalled; scalar_t__ scn_visited_this_txg; int scn_async_block_min_time_ms; void* scn_is_bptree; scalar_t__ scn_sync_start_time; int * scn_zio_root; } ;
typedef TYPE_1__ dsl_scan_t ;
struct TYPE_22__ {int dp_obsolete_bpobj; int * dp_spa; int dp_meta_objset; int * dp_free_dir; int * dp_leak_dir; int dp_config_rwlock; int dp_root_dir; scalar_t__ dp_bptree_obj; int dp_free_bpobj; TYPE_1__* dp_scan; } ;
typedef TYPE_2__ dsl_pool_t ;
struct TYPE_23__ {scalar_t__ tx_txg; } ;
typedef TYPE_3__ dmu_tx_t ;
struct TYPE_20__ {int dd_uncompressed_bytes; int dd_compressed_bytes; int dd_used_bytes; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (int ) ;
 int VAR_15 ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,TYPE_1__*,TYPE_3__*) ;
 int FUNC_8 (int ,scalar_t__,TYPE_3__*) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,scalar_t__,void*,int ,TYPE_1__*,TYPE_3__*) ;
 int FUNC_11 (int *,scalar_t__) ;
 int FUNC_12 (TYPE_2__*,int ,int ,TYPE_3__*) ;
 int FUNC_13 (int *,int ,int ,int ,int ,TYPE_3__*) ;
 TYPE_11__* FUNC_14 (int *) ;
 int FUNC_15 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_16 (TYPE_2__*,int ,int **) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_17 () ;
 int FUNC_18 (int *,int ,int ) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,int ,TYPE_3__*) ;
 int FUNC_21 (int *,int ) ;
 scalar_t__ FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int ,int ,int ) ;
 int FUNC_25 (int ,int ,int ,TYPE_3__*) ;
 int FUNC_26 (char*,int ,int ,int ,int) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_27 (char*,int) ;
 void* FUNC_28 (int *,int *,int *,int ) ;
 int FUNC_29 (int *) ;

__attribute__((used)) static int
FUNC_30(dsl_pool_t *VAR_22, dmu_tx_t *VAR_23)
{
 int VAR_24 = 0;
 dsl_scan_t *VAR_25 = VAR_22->dp_scan;
 spa_t *VAR_26 = VAR_22->dp_spa;

 if (FUNC_22(VAR_26))
  return (0);

 if (VAR_18 &&
     FUNC_23(VAR_26) >= VAR_14) {
  VAR_25->scn_is_bptree = VAR_0;
  VAR_25->scn_async_block_min_time_ms = VAR_20;
  VAR_25->scn_zio_root = FUNC_28(VAR_26, ((void*)0),
      ((void*)0), VAR_15);
  VAR_24 = FUNC_7(&VAR_22->dp_free_bpobj,
      VAR_16, VAR_25, VAR_23);
  FUNC_4(FUNC_29(VAR_25->scn_zio_root));
  VAR_25->scn_zio_root = ((void*)0);

  if (VAR_24 != 0 && VAR_24 != VAR_8)
   FUNC_27("error %u from bpobj_iterate()", VAR_24);
 }

 if (VAR_24 == 0 && FUNC_21(VAR_26, VAR_12)) {
  FUNC_0(VAR_25->scn_async_destroying);
  VAR_25->scn_is_bptree = VAR_1;
  VAR_25->scn_zio_root = FUNC_28(VAR_26, ((void*)0),
      ((void*)0), VAR_15);
  VAR_24 = FUNC_10(VAR_22->dp_meta_objset,
      VAR_22->dp_bptree_obj, VAR_1, VAR_16, VAR_25, VAR_23);
  FUNC_4(FUNC_29(VAR_25->scn_zio_root));
  VAR_25->scn_zio_root = ((void*)0);

  if (VAR_24 == VAR_7 || VAR_24 == VAR_6) {
   VAR_24 = 0;
  } else if (VAR_24 != 0 && VAR_24 != VAR_8) {
   FUNC_27("error %u from "
       "traverse_dataset_destroyed()", VAR_24);
  }

  if (FUNC_9(VAR_22->dp_meta_objset, VAR_22->dp_bptree_obj)) {

   FUNC_20(VAR_26, VAR_12, VAR_23);
   FUNC_0(!FUNC_21(VAR_26,
       VAR_12));
   FUNC_4(FUNC_25(VAR_22->dp_meta_objset,
       VAR_4,
       VAR_3, VAR_23));
   FUNC_4(FUNC_8(VAR_22->dp_meta_objset,
       VAR_22->dp_bptree_obj, VAR_23));
   VAR_22->dp_bptree_obj = 0;
   VAR_25->scn_async_destroying = VAR_0;
   VAR_25->scn_async_stalled = VAR_0;
  } else {
   VAR_25->scn_async_stalled =
       (VAR_25->scn_visited_this_txg == 0);
  }
 }
 if (VAR_25->scn_visited_this_txg) {
  FUNC_26("freed %llu blocks in %llums from "
      "free_bpobj/bptree txg %llu; err=%d",
      (longlong_t)VAR_25->scn_visited_this_txg,
      (longlong_t)
      FUNC_3(FUNC_17() - VAR_25->scn_sync_start_time),
      (longlong_t)VAR_23->tx_txg, VAR_24);
  VAR_25->scn_visited_this_txg = 0;






  FUNC_11(VAR_26, VAR_23->tx_txg);
 }
 if (VAR_24 != 0)
  return (VAR_24);
 if (VAR_22->dp_free_dir != ((void*)0) && !VAR_25->scn_async_destroying &&
     VAR_19 &&
     (FUNC_14(VAR_22->dp_free_dir)->dd_used_bytes != 0 ||
     FUNC_14(VAR_22->dp_free_dir)->dd_compressed_bytes != 0 ||
     FUNC_14(VAR_22->dp_free_dir)->dd_uncompressed_bytes != 0)) {





  if (VAR_22->dp_leak_dir == ((void*)0)) {
   FUNC_18(&VAR_22->dp_config_rwlock, VAR_11, VAR_9);
   (void) FUNC_12(VAR_22, VAR_22->dp_root_dir,
       VAR_10, VAR_23);
   FUNC_4(FUNC_16(VAR_22,
       VAR_10, &VAR_22->dp_leak_dir));
   FUNC_19(&VAR_22->dp_config_rwlock, VAR_9);
  }
  FUNC_13(VAR_22->dp_leak_dir, VAR_2,
      FUNC_14(VAR_22->dp_free_dir)->dd_used_bytes,
      FUNC_14(VAR_22->dp_free_dir)->dd_compressed_bytes,
      FUNC_14(VAR_22->dp_free_dir)->dd_uncompressed_bytes, VAR_23);
  FUNC_13(VAR_22->dp_free_dir, VAR_2,
      -FUNC_14(VAR_22->dp_free_dir)->dd_used_bytes,
      -FUNC_14(VAR_22->dp_free_dir)->dd_compressed_bytes,
      -FUNC_14(VAR_22->dp_free_dir)->dd_uncompressed_bytes, VAR_23);
 }

 if (VAR_22->dp_free_dir != ((void*)0) && !VAR_25->scn_async_destroying) {

  FUNC_1(FUNC_14(VAR_22->dp_free_dir)->dd_used_bytes);
  FUNC_1(FUNC_14(VAR_22->dp_free_dir)->dd_compressed_bytes);
  FUNC_1(FUNC_14(VAR_22->dp_free_dir)->dd_uncompressed_bytes);
 }

 FUNC_2(FUNC_6(&VAR_22->dp_obsolete_bpobj),
     0 == FUNC_24(VAR_22->dp_meta_objset, VAR_4,
     VAR_5));
 if (VAR_24 == 0 && FUNC_6(&VAR_22->dp_obsolete_bpobj)) {
  FUNC_0(FUNC_21(VAR_22->dp_spa,
      VAR_13));

  VAR_25->scn_is_bptree = VAR_0;
  VAR_25->scn_async_block_min_time_ms = VAR_21;
  VAR_24 = FUNC_7(&VAR_22->dp_obsolete_bpobj,
      VAR_17, VAR_25, VAR_23);
  if (VAR_24 != 0 && VAR_24 != VAR_8)
   FUNC_27("error %u from bpobj_iterate()", VAR_24);

  if (FUNC_5(&VAR_22->dp_obsolete_bpobj))
   FUNC_15(VAR_22, VAR_23);
 }

 return (0);
}
