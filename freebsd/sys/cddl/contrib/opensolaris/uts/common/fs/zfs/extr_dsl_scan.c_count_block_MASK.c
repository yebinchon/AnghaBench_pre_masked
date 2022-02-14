
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {int zb_ditto_3_of_3_samevdev; int zb_ditto_2_of_3_samevdev; int zb_ditto_2_of_2_samevdev; int zb_gangs; int zb_psize; int zb_lsize; int zb_asize; int zb_count; } ;
typedef TYPE_3__ zfs_blkstat_t ;
struct TYPE_20__ {int zab_lock; TYPE_3__** zab_type; } ;
typedef TYPE_4__ zfs_all_blkstats_t ;
struct TYPE_21__ {TYPE_2__* scn_dp; } ;
typedef TYPE_5__ dsl_scan_t ;
struct TYPE_22__ {int * blk_dva; } ;
typedef TYPE_6__ blkptr_t ;
struct TYPE_18__ {TYPE_1__* dp_spa; } ;
struct TYPE_17__ {int spa_scan_pass_issued; } ;


 scalar_t__ FUNC_0 (TYPE_6__ const*) ;
 scalar_t__ FUNC_1 (TYPE_6__ const*) ;
 int FUNC_2 (TYPE_6__ const*) ;
 scalar_t__ FUNC_3 (TYPE_6__ const*) ;
 int FUNC_4 (TYPE_6__ const*) ;
 scalar_t__ FUNC_5 (TYPE_6__ const*) ;
 int FUNC_6 (TYPE_6__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(dsl_scan_t *VAR_4, zfs_all_blkstats_t *VAR_5, const blkptr_t *VAR_6)
{
 int VAR_7;


 for (VAR_7 = 0; VAR_7 < FUNC_4(VAR_6); VAR_7++) {
  FUNC_9(&VAR_4->scn_dp->dp_spa->spa_scan_pass_issued,
      FUNC_7(&VAR_6->blk_dva[VAR_7]));
 }





 if (VAR_5 == ((void*)0))
  return;

 FUNC_10(&VAR_5->zab_lock);

 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  int VAR_8 = (VAR_7 < 2) ? FUNC_2(VAR_6) : VAR_3;
  int VAR_9 = (VAR_7 & 1) ? FUNC_6(VAR_6) : VAR_2;
  if (VAR_9 & VAR_0)
   VAR_9 = VAR_1;
  zfs_blkstat_t *VAR_10 = &VAR_5->zab_type[VAR_8][VAR_9];
  int VAR_11;

  VAR_10->zb_count++;
  VAR_10->zb_asize += FUNC_1(VAR_6);
  VAR_10->zb_lsize += FUNC_3(VAR_6);
  VAR_10->zb_psize += FUNC_5(VAR_6);
  VAR_10->zb_gangs += FUNC_0(VAR_6);

  switch (FUNC_4(VAR_6)) {
  case 2:
   if (FUNC_8(&VAR_6->blk_dva[0]) ==
       FUNC_8(&VAR_6->blk_dva[1]))
    VAR_10->zb_ditto_2_of_2_samevdev++;
   break;
  case 3:
   VAR_11 = (FUNC_8(&VAR_6->blk_dva[0]) ==
       FUNC_8(&VAR_6->blk_dva[1])) +
       (FUNC_8(&VAR_6->blk_dva[0]) ==
       FUNC_8(&VAR_6->blk_dva[2])) +
       (FUNC_8(&VAR_6->blk_dva[1]) ==
       FUNC_8(&VAR_6->blk_dva[2]));
   if (VAR_11 == 1)
    VAR_10->zb_ditto_2_of_3_samevdev++;
   else if (VAR_11 == 3)
    VAR_10->zb_ditto_3_of_3_samevdev++;
   break;
  }
 }

 FUNC_11(&VAR_5->zab_lock);
}
