
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int currGain; int active; } ;
struct ath_hal_5211 {scalar_t__ ah_rfgainState; TYPE_1__ ah_gainValues; } ;
struct ath_hal {int dummy; } ;
typedef scalar_t__ HAL_RFGAIN ;
typedef TYPE_1__ GAIN_VALUES ;


 struct ath_hal_5211* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct ath_hal*,int ) ;
 scalar_t__ FUNC_2 (struct ath_hal*,TYPE_1__*) ;
 int FUNC_3 (struct ath_hal*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct ath_hal*,TYPE_1__*) ;
 int FUNC_5 (struct ath_hal*,TYPE_1__*) ;

HAL_RFGAIN
FUNC_6(struct ath_hal *VAR_6)
{
 struct ath_hal_5211 *VAR_7 = FUNC_0(VAR_6);
 GAIN_VALUES *VAR_8 = &VAR_7->ah_gainValues;
 uint32_t VAR_9;

 if (!VAR_8->active)
  return VAR_3;

 if (VAR_7->ah_rfgainState == VAR_5) {

  VAR_9 = FUNC_1(VAR_6, VAR_0);

  if ((VAR_9 & VAR_2) == 0) {

   VAR_8->currGain = VAR_9 >> VAR_1;

   VAR_7->ah_rfgainState = VAR_3;

   if (!FUNC_3(VAR_6, VAR_8) &&
       FUNC_4(VAR_6, VAR_8) &&
       FUNC_2(VAR_6, VAR_8) > 0) {




    FUNC_5(VAR_6, VAR_8);
    VAR_7->ah_rfgainState = VAR_4;
   }
  }
 }
 return VAR_7->ah_rfgainState;
}
