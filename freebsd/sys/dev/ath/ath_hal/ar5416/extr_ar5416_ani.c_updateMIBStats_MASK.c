
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int ast_ani_cckerrs; int ast_ani_ofdmerrs; } ;
struct ath_hal_5212 {TYPE_1__ ah_stats; int ah_mibStats; } ;
struct ath_hal {int dummy; } ;
struct ar5212AniState {scalar_t__ ofdmPhyErrCount; scalar_t__ cckPhyErrCount; struct ar5212AniParams* params; } ;
struct ar5212AniParams {scalar_t__ ofdmPhyErrBase; scalar_t__ cckPhyErrBase; } ;
typedef scalar_t__ int32_t ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ath_hal*,int ,char*,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct ath_hal*,int ) ;
 int FUNC_3 (struct ath_hal*,int *) ;

__attribute__((used)) static void
FUNC_4(struct ath_hal *VAR_4, struct ar5212AniState *VAR_5)
{
 struct ath_hal_5212 *VAR_6 = FUNC_0(VAR_4);
 const struct ar5212AniParams *VAR_7 = VAR_5->params;
 uint32_t VAR_8, VAR_9;
 int32_t VAR_10, VAR_11;


 FUNC_3(VAR_4, &VAR_6->ah_mibStats);


 VAR_8 = FUNC_2(VAR_4, VAR_1);
 VAR_9 = FUNC_2(VAR_4, VAR_2);


 VAR_10 = VAR_8 - VAR_7->ofdmPhyErrBase;
 if (VAR_10 < 0) {
  FUNC_1(VAR_4, VAR_3, "OFDM phyErrCnt %d phyCnt1 0x%x\n",
      VAR_10, VAR_8);
  VAR_10 = VAR_0;
 }
 VAR_6->ah_stats.ast_ani_ofdmerrs +=
      VAR_10 - VAR_5->ofdmPhyErrCount;
 VAR_5->ofdmPhyErrCount = VAR_10;

 VAR_11 = VAR_9 - VAR_7->cckPhyErrBase;
 if (VAR_11 < 0) {
  FUNC_1(VAR_4, VAR_3, "CCK phyErrCnt %d phyCnt2 0x%x\n",
      VAR_11, VAR_9);
  VAR_11 = VAR_0;
 }
 VAR_6->ah_stats.ast_ani_cckerrs +=
  VAR_11 - VAR_5->cckPhyErrCount;
 VAR_5->cckPhyErrCount = VAR_11;
}
