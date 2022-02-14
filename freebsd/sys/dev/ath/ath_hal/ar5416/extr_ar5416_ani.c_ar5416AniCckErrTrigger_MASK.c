
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_channel {int dummy; } ;
struct ath_hal_5212 {struct ar5212AniState* ah_curani; } ;
struct ath_hal {int dummy; } ;
struct ar5212AniState {scalar_t__ noiseImmunityLevel; scalar_t__ firstepLevel; struct ar5212AniParams* params; } ;
struct ar5212AniParams {scalar_t__ maxNoiseImmunityLevel; scalar_t__ rssiThrLow; scalar_t__ maxFirstepLevel; } ;
typedef scalar_t__ int32_t ;
struct TYPE_4__ {int ah_ani_function; } ;
struct TYPE_3__ {struct ieee80211_channel* ah_curchan; } ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 TYPE_2__* FUNC_1 (struct ath_hal*) ;
 struct ieee80211_channel const* VAR_0 ;
 TYPE_1__* FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (struct ath_hal*) ;
 scalar_t__ FUNC_4 (struct ath_hal*) ;
 scalar_t__ FUNC_5 (struct ath_hal_5212*) ;
 int FUNC_6 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (struct ieee80211_channel const*) ;
 int FUNC_8 (struct ath_hal*,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_9(struct ath_hal *VAR_3)
{
 struct ath_hal_5212 *VAR_4 = FUNC_0(VAR_3);
 const struct ieee80211_channel *VAR_5 = FUNC_2(VAR_3)->ah_curchan;
 struct ar5212AniState *VAR_6;
 const struct ar5212AniParams *VAR_7;

 FUNC_6(VAR_5 != VAR_0);

 if (!FUNC_3(VAR_3))
  return;


 VAR_6 = VAR_4->ah_curani;
 VAR_7 = VAR_6->params;
 if ((FUNC_1(VAR_3)->ah_ani_function & (1 << VAR_2) &&
     VAR_6->noiseImmunityLevel+1 < VAR_7->maxNoiseImmunityLevel)) {
  FUNC_8(VAR_3, VAR_2,
     VAR_6->noiseImmunityLevel + 1);
  return;
 }

 if (FUNC_4(VAR_3)) {
  int32_t VAR_8 = FUNC_5(VAR_4);
  if (VAR_8 > VAR_7->rssiThrLow) {




   if (VAR_6->firstepLevel < VAR_7->maxFirstepLevel)
    FUNC_8(VAR_3, VAR_1,
       VAR_6->firstepLevel + 1);
  } else {




   if (FUNC_7(VAR_5)) {
    if (VAR_6->firstepLevel > 0)
     FUNC_8(VAR_3,
         VAR_1, 0);
   }
  }
 }
}
