
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_24__ {int spa_root_vdev; void* spa_scrub_active; void* spa_scrub_started; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_23__ {scalar_t__ scn_queue_obj; int scn_end_time; scalar_t__ scn_min_txg; int scn_max_txg; int scn_state; int scn_flags; } ;
struct TYPE_25__ {TYPE_1__ scn_phys; int * scn_taskq; void* scn_is_sorted; TYPE_4__* scn_dp; } ;
typedef TYPE_3__ dsl_scan_t ;
struct TYPE_26__ {int dp_meta_objset; TYPE_2__* dp_spa; } ;
typedef TYPE_4__ dsl_pool_t ;
struct TYPE_27__ {int tx_txg; } ;
typedef TYPE_5__ dmu_tx_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,TYPE_5__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int *,int *,int ) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,char*,TYPE_5__*,char*,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int ,int ,int ) ;
 int FUNC_17 (int ,int ,char const*,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_18(dsl_scan_t *VAR_10, boolean_t VAR_11, dmu_tx_t *VAR_12)
{
 static const char *VAR_13[] = {
  "scrub_bookmark",
  "scrub_ddt_bookmark",
  "scrub_ddt_class_max",
  "scrub_queue",
  "scrub_min_txg",
  "scrub_max_txg",
  "scrub_func",
  "scrub_errors",
  ((void*)0)
 };

 dsl_pool_t *VAR_14 = VAR_10->scn_dp;
 spa_t *VAR_15 = VAR_14->dp_spa;
 int VAR_16;


 for (VAR_16 = 0; VAR_13[VAR_16]; VAR_16++) {
  (void) FUNC_17(VAR_14->dp_meta_objset,
      VAR_2, VAR_13[VAR_16], VAR_12);
 }

 if (VAR_10->scn_phys.scn_queue_obj != 0) {
  FUNC_2(FUNC_3(VAR_14->dp_meta_objset,
      VAR_10->scn_phys.scn_queue_obj, VAR_12));
  VAR_10->scn_phys.scn_queue_obj = 0;
 }
 FUNC_7(VAR_10);

 VAR_10->scn_phys.scn_flags &= ~VAR_3;





 if (!FUNC_4(VAR_10)) {
  FUNC_0(!VAR_10->scn_is_sorted);
  return;
 }

 if (VAR_10->scn_is_sorted) {
  FUNC_8(VAR_10);
  VAR_10->scn_is_sorted = VAR_0;

  if (VAR_10->scn_taskq != ((void*)0)) {
   FUNC_15(VAR_10->scn_taskq);
   VAR_10->scn_taskq = ((void*)0);
  }
 }

 VAR_10->scn_phys.scn_state = VAR_11 ? VAR_5 : VAR_4;

 if (FUNC_5(VAR_10, VAR_12))
  FUNC_14(VAR_15, "scan aborted, restarting", VAR_12,
      "errors=%llu", FUNC_13(VAR_15));
 else if (!VAR_11)
  FUNC_14(VAR_15, "scan cancelled", VAR_12,
      "errors=%llu", FUNC_13(VAR_15));
 else
  FUNC_14(VAR_15, "scan done", VAR_12,
      "errors=%llu", FUNC_13(VAR_15));

 if (FUNC_1(VAR_10)) {
  VAR_15->spa_scrub_started = VAR_0;
  VAR_15->spa_scrub_active = VAR_0;
  if (VAR_11 &&
      !FUNC_12(VAR_15, VAR_9)) {
   FUNC_16(VAR_15->spa_root_vdev, VAR_12->tx_txg,
       VAR_10->scn_phys.scn_max_txg, VAR_1);

   FUNC_11(VAR_15, ((void*)0), ((void*)0),
       VAR_10->scn_phys.scn_min_txg ?
       VAR_6 : VAR_7);
  } else {
   FUNC_16(VAR_15->spa_root_vdev, VAR_12->tx_txg,
       0, VAR_1);
  }
  FUNC_10(VAR_15);





  FUNC_9(VAR_15, VAR_8);
 }

 VAR_10->scn_phys.scn_end_time = FUNC_6();

 FUNC_0(!FUNC_4(VAR_10));
}
