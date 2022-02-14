
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_8__ {scalar_t__ currGain; int active; } ;
struct ath_hal_5212 {scalar_t__ ah_rfgainState; int ah_bIQCalibration; int ah_cwCalRequire; int ah_phyPowerOn; TYPE_2__ ah_gainValues; } ;
struct ath_hal {scalar_t__ ah_magic; } ;
struct TYPE_9__ {scalar_t__ ah_phyRev; TYPE_1__* ah_eeprom; } ;
struct TYPE_7__ {scalar_t__ ee_cckOfdmGainDelta; } ;
typedef scalar_t__ HAL_RFGAIN ;
typedef TYPE_1__ HAL_EEPROM ;
typedef TYPE_2__ GAIN_VALUES ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 TYPE_6__* FUNC_1 (struct ath_hal*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct ath_hal*) ;
 scalar_t__ FUNC_4 (struct ath_hal*) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (struct ath_hal*,int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_7 (struct ath_hal*,TYPE_2__*) ;
 scalar_t__ FUNC_8 (struct ath_hal*) ;
 int FUNC_9 (struct ath_hal*,TYPE_2__*) ;
 scalar_t__ FUNC_10 (struct ath_hal*,TYPE_2__*) ;

HAL_RFGAIN
FUNC_11(struct ath_hal *VAR_13)
{
 struct ath_hal_5212 *VAR_14 = FUNC_0(VAR_13);
 GAIN_VALUES *VAR_15 = &VAR_14->ah_gainValues;
 uint32_t VAR_16, VAR_17;


 if (!VAR_15->active || !VAR_14->ah_phyPowerOn)
  return VAR_8;

 if (VAR_14->ah_rfgainState == VAR_10) {

  VAR_16 = FUNC_6(VAR_13, VAR_3);

  if ((VAR_16 & VAR_5) == 0) {

   VAR_15->currGain = VAR_16 >> VAR_4;
   VAR_17 = FUNC_5(VAR_16, VAR_6);
   if (VAR_17 == VAR_7) {
    const HAL_EEPROM *VAR_18 = FUNC_1(VAR_13)->ah_eeprom;

    FUNC_2(FUNC_3(VAR_13));
    FUNC_2(VAR_13->ah_magic == VAR_1);
    if (FUNC_1(VAR_13)->ah_phyRev >= VAR_2)
     VAR_15->currGain += VAR_18->ee_cckOfdmGainDelta;
    else
     VAR_15->currGain += VAR_12;
   }
   if (FUNC_4(VAR_13)) {
    uint32_t VAR_19 = FUNC_8(VAR_13);
    if (VAR_15->currGain >= VAR_19)
     VAR_15->currGain -= VAR_19;
    else
     VAR_15->currGain = 0;
   }

   VAR_14->ah_rfgainState = VAR_8;

   if (!FUNC_9(VAR_13, VAR_15) &&
       FUNC_10(VAR_13, VAR_15) &&
       FUNC_7(VAR_13, VAR_15) > 0) {




    VAR_14->ah_rfgainState = VAR_9;

    VAR_14->ah_cwCalRequire = VAR_0;

    VAR_14->ah_bIQCalibration = VAR_11;
   }
  }
 }
 return VAR_14->ah_rfgainState;
}
