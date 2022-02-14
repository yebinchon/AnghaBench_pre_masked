
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int beacons; int rts_good; int fcs_bad; int rts_bad; int ackrcv_bad; } ;
struct TYPE_3__ {TYPE_2__ ast_mibstats; } ;
struct ath_hal_9300 {TYPE_1__ ah_stats; } ;
struct ath_hal {int dummy; } ;
typedef TYPE_2__ HAL_MIB_STATS ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct ath_hal*,int ) ;

void
FUNC_2(struct ath_hal *VAR_5)
{
    struct ath_hal_9300 *VAR_6 = FUNC_0(VAR_5);
    HAL_MIB_STATS* VAR_7 = &VAR_6->ah_stats.ast_mibstats;

    VAR_7->ackrcv_bad += FUNC_1(VAR_5, VAR_0);
    VAR_7->rts_bad += FUNC_1(VAR_5, VAR_3);
    VAR_7->fcs_bad += FUNC_1(VAR_5, VAR_2);
    VAR_7->rts_good += FUNC_1(VAR_5, VAR_4);
    VAR_7->beacons += FUNC_1(VAR_5, VAR_1);
}
