
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_channel {int dummy; } ;
struct ath_hal_5212 {struct ar5212AniState* ah_curani; } ;
struct ath_hal {int dummy; } ;
struct ar5212AniState {scalar_t__ noiseImmunityLevel; scalar_t__ spurImmunityLevel; scalar_t__ firstepLevel; scalar_t__ ofdmWeakSigDetectOff; struct ar5212AniParams* params; } ;
struct ar5212AniParams {scalar_t__ maxNoiseImmunityLevel; scalar_t__ maxSpurImmunityLevel; scalar_t__ maxFirstepLevel; scalar_t__ rssiThrHigh; scalar_t__ rssiThrLow; } ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {scalar_t__ ah_opmode; struct ieee80211_channel* ah_curchan; } ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 struct ieee80211_channel const* VAR_1 ;
 TYPE_1__* FUNC_1 (struct ath_hal*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 scalar_t__ FUNC_4 (struct ath_hal_5212*) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_7 (struct ath_hal*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_8(struct ath_hal *VAR_8)
{
 struct ath_hal_5212 *VAR_9 = FUNC_0(VAR_8);
 const struct ieee80211_channel *VAR_10 = FUNC_1(VAR_8)->ah_curchan;
 struct ar5212AniState *VAR_11;
 const struct ar5212AniParams *VAR_12;

 FUNC_5(VAR_10 != VAR_1);

 if (!FUNC_2(VAR_8))
  return;

 VAR_11 = VAR_9->ah_curani;
 VAR_12 = VAR_11->params;

 if (VAR_11->noiseImmunityLevel+1 < VAR_12->maxNoiseImmunityLevel) {
  if (FUNC_7(VAR_8, VAR_4,
     VAR_11->noiseImmunityLevel + 1))
   return;
 }

 if (VAR_11->spurImmunityLevel+1 < VAR_12->maxSpurImmunityLevel) {
  if (FUNC_7(VAR_8, VAR_6,
     VAR_11->spurImmunityLevel + 1))
   return;
 }






 if (FUNC_1(VAR_8)->ah_opmode == VAR_7) {
  if (VAR_11->firstepLevel < VAR_12->maxFirstepLevel) {
   if (FUNC_7(VAR_8, VAR_3,
       VAR_11->firstepLevel + 1))
    return;
  }
 }
 if (FUNC_3(VAR_8)) {
  int32_t VAR_13 = FUNC_4(VAR_9);
  if (VAR_13 > VAR_12->rssiThrHigh) {




   if (!VAR_11->ofdmWeakSigDetectOff) {
    FUNC_7(VAR_8,
        VAR_5,
        VAR_0);
    FUNC_7(VAR_8,
        VAR_6, 0);
    return;
   }




   if (VAR_11->firstepLevel < VAR_12->maxFirstepLevel) {
    if (FUNC_7(VAR_8, VAR_3,
       VAR_11->firstepLevel + 1))
     return;
   }
  } else if (VAR_13 > VAR_12->rssiThrLow) {




   if (VAR_11->ofdmWeakSigDetectOff)
    FUNC_7(VAR_8,
        VAR_5,
        VAR_2);
   if (VAR_11->firstepLevel < VAR_12->maxFirstepLevel)
    if (FUNC_7(VAR_8, VAR_3,
         VAR_11->firstepLevel + 1))
    return;
  } else {





   if (FUNC_6(VAR_10)) {
    if (!VAR_11->ofdmWeakSigDetectOff)
     FUNC_7(VAR_8,
         VAR_5,
         VAR_0);
    if (VAR_11->firstepLevel > 0)
     if (FUNC_7(VAR_8,
          VAR_3, 0))
      return;
   }
  }
 }
}
