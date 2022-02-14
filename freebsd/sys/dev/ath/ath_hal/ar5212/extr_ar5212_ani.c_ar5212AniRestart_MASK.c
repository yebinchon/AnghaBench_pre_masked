
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_5212 {int ah_mibStats; scalar_t__ ah_hasHwPhyCounters; } ;
struct ath_hal {int dummy; } ;
struct ar5212AniState {scalar_t__ cckPhyErrCount; scalar_t__ ofdmPhyErrCount; struct ar5212AniParams* params; scalar_t__ listenTime; } ;
struct ar5212AniParams {int cckPhyErrBase; int ofdmPhyErrBase; } ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ath_hal*,int ,int ) ;
 int FUNC_2 (struct ath_hal*,int *) ;

__attribute__((used)) static void
FUNC_3(struct ath_hal *VAR_6, struct ar5212AniState *VAR_7)
{
 struct ath_hal_5212 *VAR_8 = FUNC_0(VAR_6);

 VAR_7->listenTime = 0;
 if (VAR_8->ah_hasHwPhyCounters) {
  const struct ar5212AniParams *VAR_9 = VAR_7->params;




  FUNC_1(VAR_6, VAR_0, VAR_9->ofdmPhyErrBase);
  FUNC_1(VAR_6, VAR_1, VAR_9->cckPhyErrBase);
  FUNC_1(VAR_6, VAR_2, VAR_5);
  FUNC_1(VAR_6, VAR_3, VAR_4);


  FUNC_2(VAR_6, &VAR_8->ah_mibStats);
 }
 VAR_7->ofdmPhyErrCount = 0;
 VAR_7->cckPhyErrCount = 0;
}
