
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int vdev_children; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
struct TYPE_13__ {scalar_t__ spa_scrub_inflight; int spa_scrub_lock; int spa_scrub_io_cv; TYPE_2__* spa_root_vdev; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_14__ {int spic_spc; int spic_zb; int spic_bp; } ;
typedef TYPE_4__ scan_prefetch_issue_ctx_t ;
struct TYPE_15__ {scalar_t__ scn_maxinflight_bytes; int scn_prefetch_queue; scalar_t__ scn_prefetch_stop; TYPE_1__* scn_dp; int scn_zio_root; } ;
typedef TYPE_5__ dsl_scan_t ;
typedef int arc_flags_t ;
struct TYPE_11__ {TYPE_3__* dp_spa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,TYPE_3__*,int *,int ,int ,int ,int,int*,int *) ;
 TYPE_4__* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_4__*) ;
 int FUNC_7 (int *,int *) ;
 int VAR_6 ;
 int FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,TYPE_5__*) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_12(void *VAR_8)
{
 dsl_scan_t *VAR_9 = VAR_8;
 spa_t *VAR_10 = VAR_9->scn_dp->dp_spa;
 vdev_t *VAR_11 = VAR_10->spa_root_vdev;
 uint64_t VAR_12 = VAR_11->vdev_children * VAR_7;
 scan_prefetch_issue_ctx_t *VAR_13;


 while (!VAR_9->scn_prefetch_stop) {
  arc_flags_t VAR_14 = VAR_0 |
                    VAR_2 | VAR_1;
  int VAR_15 = VAR_3 | VAR_4;

  FUNC_9(&VAR_10->spa_scrub_lock);





  while (!VAR_9->scn_prefetch_stop &&
      (FUNC_5(&VAR_9->scn_prefetch_queue) == 0 ||
      VAR_10->spa_scrub_inflight >= VAR_9->scn_maxinflight_bytes)) {
   FUNC_7(&VAR_10->spa_scrub_io_cv, &VAR_10->spa_scrub_lock);
  }


  if (VAR_9->scn_prefetch_stop) {
   FUNC_10(&VAR_10->spa_scrub_lock);
   break;
  }


  VAR_13 = FUNC_4(&VAR_9->scn_prefetch_queue);
  VAR_10->spa_scrub_inflight += FUNC_2(&VAR_13->spic_bp);
  FUNC_6(&VAR_9->scn_prefetch_queue, VAR_13);

  FUNC_10(&VAR_10->spa_scrub_lock);


  (void) FUNC_3(VAR_9->scn_zio_root, VAR_9->scn_dp->dp_spa,
      &VAR_13->spic_bp, VAR_6, VAR_13->spic_spc,
      VAR_5, VAR_15, &VAR_14, &VAR_13->spic_zb);

  FUNC_8(VAR_13, sizeof (scan_prefetch_issue_ctx_t));
 }

 FUNC_0(VAR_9->scn_prefetch_stop);


 FUNC_9(&VAR_10->spa_scrub_lock);
 while ((VAR_13 = FUNC_4(&VAR_9->scn_prefetch_queue)) != ((void*)0)) {
  FUNC_6(&VAR_9->scn_prefetch_queue, VAR_13);
  FUNC_11(VAR_13->spic_spc, VAR_9);
  FUNC_8(VAR_13, sizeof (scan_prefetch_issue_ctx_t));
 }
 FUNC_1(FUNC_5(&VAR_9->scn_prefetch_queue));
 FUNC_10(&VAR_10->spa_scrub_lock);
}
