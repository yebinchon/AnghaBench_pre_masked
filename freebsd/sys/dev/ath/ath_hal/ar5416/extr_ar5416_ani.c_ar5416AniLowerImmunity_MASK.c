
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hal_5212 {struct ar5212AniState* ah_curani; } ;
struct ath_hal {int dummy; } ;
struct ar5212AniState {scalar_t__ firstepLevel; scalar_t__ spurImmunityLevel; scalar_t__ noiseImmunityLevel; scalar_t__ ofdmWeakSigDetectOff; struct ar5212AniParams* params; } ;
struct ar5212AniParams {scalar_t__ rssiThrHigh; scalar_t__ rssiThrLow; } ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {scalar_t__ ah_opmode; } ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 TYPE_1__* FUNC_1 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 scalar_t__ FUNC_4 (struct ath_hal_5212*) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_6 (struct ath_hal*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct ath_hal *VAR_6)
{
 struct ath_hal_5212 *VAR_7 = FUNC_0(VAR_6);
 struct ar5212AniState *VAR_8;
 const struct ar5212AniParams *VAR_9;

 FUNC_5(FUNC_2(VAR_6));

 VAR_8 = VAR_7->ah_curani;
 VAR_9 = VAR_8->params;






 if (FUNC_1(VAR_6)->ah_opmode == VAR_5) {
  if (VAR_8->firstepLevel > 0) {
   if (FUNC_6(VAR_6, VAR_1,
       VAR_8->firstepLevel - 1))
    return;
  }
 }
 if (FUNC_3(VAR_6)) {
  int32_t VAR_10 = FUNC_4(VAR_7);
  if (VAR_10 > VAR_9->rssiThrHigh) {





  } else if (VAR_10 > VAR_9->rssiThrLow) {




   if (VAR_8->ofdmWeakSigDetectOff) {
    if (FUNC_6(VAR_6,
        VAR_3,
        VAR_0))
     return;
   }
   if (VAR_8->firstepLevel > 0) {
    if (FUNC_6(VAR_6, VAR_1,
       VAR_8->firstepLevel - 1))
     return;
   }
  } else {



   if (VAR_8->firstepLevel > 0) {
    if (FUNC_6(VAR_6, VAR_1,
       VAR_8->firstepLevel - 1))
     return;
   }
  }
 }

 if (VAR_8->spurImmunityLevel > 0) {
  if (FUNC_6(VAR_6, VAR_4,
     VAR_8->spurImmunityLevel - 1))
   return;
 }




 if (VAR_8->noiseImmunityLevel > 0) {
  if (FUNC_6(VAR_6, VAR_2,
     VAR_8->noiseImmunityLevel - 1))
   return;
 }
}
