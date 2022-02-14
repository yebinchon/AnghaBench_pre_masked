
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_21__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_19__ ;
typedef struct TYPE_24__ TYPE_14__ ;


typedef int zfs_all_blkstats_t ;
struct TYPE_28__ {int spa_scrub_started; TYPE_7__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
typedef scalar_t__ pool_scan_func_t ;
struct TYPE_27__ {scalar_t__ scn_min_txg; int scn_max_txg; int scn_queue_obj; scalar_t__ scn_ddt_class_max; int scn_to_examine; scalar_t__ scn_errors; int scn_start_time; int scn_state; scalar_t__ scn_func; } ;
struct TYPE_29__ {TYPE_21__ scn_phys; int scn_phys_cached; int scn_checkpointing; scalar_t__ scn_last_checkpoint; scalar_t__ scn_done_txg; scalar_t__ scn_restart_txg; scalar_t__ scn_issued_before_pass; TYPE_4__* scn_dp; } ;
typedef TYPE_3__ dsl_scan_t ;
struct TYPE_30__ {int dp_meta_objset; TYPE_14__* dp_blkstats; TYPE_2__* dp_spa; } ;
typedef TYPE_4__ dsl_pool_t ;
struct TYPE_31__ {int tx_txg; } ;
typedef TYPE_5__ dmu_tx_t ;
typedef scalar_t__ dmu_object_type_t ;
struct TYPE_26__ {int vs_alloc; } ;
struct TYPE_32__ {TYPE_1__ vdev_stat; } ;
struct TYPE_25__ {TYPE_3__* dp_scan; } ;
struct TYPE_24__ {TYPE_21__ zab_type; int zab_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (TYPE_21__*,int *,int) ;
 int FUNC_3 (TYPE_21__*,int) ;
 TYPE_19__* FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_7 () ;
 TYPE_14__* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *,int ,int *) ;
 int FUNC_10 (TYPE_2__*,int *,int *,int ) ;
 int FUNC_11 (TYPE_2__*,char*,TYPE_5__*,char*,scalar_t__,scalar_t__,int ) ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_7__*) ;
 scalar_t__ FUNC_15 (TYPE_7__*,scalar_t__*,int *) ;
 int FUNC_16 (int ,scalar_t__,int ,int ,TYPE_5__*) ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static void
FUNC_17(void *VAR_18, dmu_tx_t *VAR_19)
{
 dsl_scan_t *VAR_20 = FUNC_4(VAR_19)->dp_scan;
 pool_scan_func_t *VAR_21 = VAR_18;
 dmu_object_type_t VAR_22 = 0;
 dsl_pool_t *VAR_23 = VAR_20->scn_dp;
 spa_t *VAR_24 = VAR_23->dp_spa;

 FUNC_0(!FUNC_5(VAR_20));
 FUNC_0(*VAR_21 > VAR_13 && *VAR_21 < VAR_12);
 FUNC_3(&VAR_20->scn_phys, sizeof (VAR_20->scn_phys));
 VAR_20->scn_phys.scn_func = *VAR_21;
 VAR_20->scn_phys.scn_state = VAR_7;
 VAR_20->scn_phys.scn_min_txg = 0;
 VAR_20->scn_phys.scn_max_txg = VAR_19->tx_txg;
 VAR_20->scn_phys.scn_ddt_class_max = VAR_2 - 1;
 VAR_20->scn_phys.scn_start_time = FUNC_7();
 VAR_20->scn_phys.scn_errors = 0;
 VAR_20->scn_phys.scn_to_examine = VAR_24->spa_root_vdev->vdev_stat.vs_alloc;
 VAR_20->scn_issued_before_pass = 0;
 VAR_20->scn_restart_txg = 0;
 VAR_20->scn_done_txg = 0;
 VAR_20->scn_last_checkpoint = 0;
 VAR_20->scn_checkpointing = VAR_0;
 FUNC_12(VAR_24);

 if (FUNC_1(VAR_20)) {
  VAR_20->scn_phys.scn_ddt_class_max = VAR_17;


  FUNC_14(VAR_24->spa_root_vdev);

  if (FUNC_15(VAR_24->spa_root_vdev,
      &VAR_20->scn_phys.scn_min_txg, &VAR_20->scn_phys.scn_max_txg)) {
   FUNC_10(VAR_24, ((void*)0), ((void*)0),
       VAR_8);
  } else {
   FUNC_10(VAR_24, ((void*)0), ((void*)0), VAR_9);
  }

  VAR_24->spa_scrub_started = VAR_1;





  if (VAR_20->scn_phys.scn_min_txg > VAR_16)
   VAR_20->scn_phys.scn_ddt_class_max = VAR_3;

 }



 if (VAR_23->dp_blkstats == ((void*)0)) {
  VAR_23->dp_blkstats =
      FUNC_8(sizeof (zfs_all_blkstats_t), VAR_10);
  FUNC_9(&VAR_23->dp_blkstats->zab_lock, ((void*)0),
      VAR_11, ((void*)0));
 }
 FUNC_3(&VAR_23->dp_blkstats->zab_type, sizeof (VAR_23->dp_blkstats->zab_type));

 if (FUNC_13(VAR_24) < VAR_14)
  VAR_22 = VAR_6;

 VAR_20->scn_phys.scn_queue_obj = FUNC_16(VAR_23->dp_meta_objset,
     VAR_22 ? VAR_22 : VAR_5, VAR_4, 0, VAR_19);

 FUNC_2(&VAR_20->scn_phys, &VAR_20->scn_phys_cached, sizeof (VAR_20->scn_phys));

 FUNC_6(VAR_20, VAR_19, VAR_15);

 FUNC_11(VAR_24, "scan setup", VAR_19,
     "func=%u mintxg=%llu maxtxg=%llu",
     *VAR_21, VAR_20->scn_phys.scn_min_txg, VAR_20->scn_phys.scn_max_txg);
}
