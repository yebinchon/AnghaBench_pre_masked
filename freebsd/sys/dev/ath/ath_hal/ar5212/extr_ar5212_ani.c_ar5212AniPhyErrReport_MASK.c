
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_rx_status {scalar_t__ rs_phyerr; } ;
struct TYPE_2__ {int ast_ani_cckerrs; int ast_ani_ofdmerrs; } ;
struct ath_hal_5212 {TYPE_1__ ah_stats; struct ar5212AniState* ah_curani; int ah_hasHwPhyCounters; } ;
struct ath_hal {int dummy; } ;
struct ar5212AniState {scalar_t__ ofdmPhyErrCount; scalar_t__ cckPhyErrCount; struct ar5212AniParams* params; } ;
struct ar5212AniParams {scalar_t__ ofdmTrigHigh; scalar_t__ cckTrigHigh; } ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 struct ath_rx_status const* VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (struct ath_hal*) ;
 int FUNC_4 (struct ath_hal*,struct ar5212AniState*) ;

void
FUNC_5(struct ath_hal *VAR_3, const struct ath_rx_status *VAR_4)
{
 struct ath_hal_5212 *VAR_5 = FUNC_0(VAR_3);
 struct ar5212AniState *VAR_6;
 const struct ar5212AniParams *VAR_7;

 FUNC_1(!VAR_5->ah_hasHwPhyCounters && VAR_4 != VAR_0);

 VAR_6 = VAR_5->ah_curani;
 VAR_7 = VAR_6->params;
 if (VAR_4->rs_phyerr == VAR_2) {
  VAR_6->ofdmPhyErrCount++;
  VAR_5->ah_stats.ast_ani_ofdmerrs++;
  if (VAR_6->ofdmPhyErrCount > VAR_7->ofdmTrigHigh) {
   FUNC_3(VAR_3);
   FUNC_4(VAR_3, VAR_6);
  }
 } else if (VAR_4->rs_phyerr == VAR_1) {
  VAR_6->cckPhyErrCount++;
  VAR_5->ah_stats.ast_ani_cckerrs++;
  if (VAR_6->cckPhyErrCount > VAR_7->cckTrigHigh) {
   FUNC_2(VAR_3);
   FUNC_4(VAR_3, VAR_6);
  }
 }
}
