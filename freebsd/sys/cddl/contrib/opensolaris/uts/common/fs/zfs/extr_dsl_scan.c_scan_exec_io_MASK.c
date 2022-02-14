
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int zbookmark_phys_t ;
struct TYPE_12__ {scalar_t__ spa_scrub_inflight; scalar_t__ spa_last_io; int spa_scrub_lock; int spa_scrub_io_cv; } ;
typedef TYPE_2__ spa_t ;
typedef int kmutex_t ;
struct TYPE_13__ {scalar_t__ scn_maxinflight_bytes; int scn_zio_root; } ;
typedef TYPE_3__ dsl_scan_t ;
struct TYPE_14__ {scalar_t__ q_inflight_bytes; scalar_t__ q_maxinflight_bytes; int q_zio_cv; TYPE_1__* q_vd; } ;
typedef TYPE_4__ dsl_scan_io_queue_t ;
struct TYPE_15__ {TYPE_3__* dp_scan; int dp_blkstats; TYPE_2__* dp_spa; } ;
typedef TYPE_5__ dsl_pool_t ;
typedef int blkptr_t ;
typedef int abd_t ;
struct TYPE_11__ {int vdev_scan_io_queue_lock; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int const*) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_3 (size_t,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int const*) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,TYPE_2__*,int const*,int *,size_t,int ,TYPE_4__*,int ,int,int const*) ;

__attribute__((used)) static void
FUNC_12(dsl_pool_t *VAR_8, const blkptr_t *VAR_9, int VAR_10,
    const zbookmark_phys_t *VAR_11, dsl_scan_io_queue_t *VAR_12)
{
 spa_t *VAR_13 = VAR_8->dp_spa;
 dsl_scan_t *VAR_14 = VAR_8->dp_scan;
 size_t VAR_15 = FUNC_1(VAR_9);
 abd_t *VAR_16 = FUNC_3(VAR_15, VAR_0);
 unsigned int VAR_17 = 0;

 if (VAR_12 == ((void*)0)) {
  FUNC_8(&VAR_13->spa_scrub_lock);
  while (VAR_13->spa_scrub_inflight >= VAR_14->scn_maxinflight_bytes)
   FUNC_5(&VAR_13->spa_scrub_io_cv, &VAR_13->spa_scrub_lock);
  VAR_13->spa_scrub_inflight += FUNC_1(VAR_9);
  FUNC_9(&VAR_13->spa_scrub_lock);
 } else {
  kmutex_t *VAR_18 = &VAR_12->q_vd->vdev_scan_io_queue_lock;

  FUNC_8(VAR_18);
  while (VAR_12->q_inflight_bytes >= VAR_12->q_maxinflight_bytes)
   FUNC_5(&VAR_12->q_zio_cv, VAR_18);
  VAR_12->q_inflight_bytes += FUNC_1(VAR_9);
  FUNC_9(VAR_18);
 }

 if (VAR_10 & VAR_1)
  VAR_17 = VAR_5;
 else {
  FUNC_0(VAR_10 & VAR_2);
  VAR_17 = VAR_7;
 }

 if (VAR_17 && (FUNC_6() - VAR_13->spa_last_io <= VAR_6))
  FUNC_7(FUNC_2((int)VAR_17, 0));

 FUNC_4(VAR_8->dp_scan, VAR_8->dp_blkstats, VAR_9);
 FUNC_10(FUNC_11(VAR_8->dp_scan->scn_zio_root, VAR_13, VAR_9, VAR_16, VAR_15,
     VAR_4, VAR_12, VAR_3, VAR_10, VAR_11));
}
