
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int beacons; int rts_good; int fcs_bad; int rts_bad; int ackrcv_bad; } ;
struct TYPE_4__ {TYPE_2__ ast_mibstats; } ;
struct ath_hal_9300 {TYPE_1__ ah_stats; } ;
struct ath_hal {int dummy; } ;
typedef TYPE_2__ HAL_MIB_STATS ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;

void
FUNC_1(struct ath_hal *VAR_0, HAL_MIB_STATS* VAR_1)
{
    struct ath_hal_9300 *VAR_2 = FUNC_0(VAR_0);
    HAL_MIB_STATS* VAR_3 = &VAR_2->ah_stats.ast_mibstats;

    VAR_1->ackrcv_bad = VAR_3->ackrcv_bad;
    VAR_1->rts_bad = VAR_3->rts_bad;
    VAR_1->fcs_bad = VAR_3->fcs_bad;
    VAR_1->rts_good = VAR_3->rts_good;
    VAR_1->beacons = VAR_3->beacons;
}
