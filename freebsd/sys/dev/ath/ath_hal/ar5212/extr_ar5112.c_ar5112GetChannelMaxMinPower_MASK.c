
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct ieee80211_channel {scalar_t__ ic_freq; } ;
struct ath_hal {int dummy; } ;
typedef int int8_t ;
typedef int int16_t ;
struct TYPE_9__ {TYPE_1__* ah_eeprom; } ;
struct TYPE_8__ {int numChannels; TYPE_2__* pDataPerChannel; } ;
struct TYPE_7__ {scalar_t__ channelValue; int maxPower_t4; } ;
struct TYPE_6__ {TYPE_3__* ee_modePowerArray5112; } ;
typedef TYPE_1__ HAL_EEPROM ;
typedef int HAL_BOOL ;
typedef TYPE_2__ EXPN_DATA_PER_CHANNEL_5112 ;
typedef TYPE_3__ EEPROM_POWER_EXPN_5112 ;


 int VAR_0 ;
 void* VAR_1 ;
 TYPE_5__* FUNC_0 (struct ath_hal*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_4 (struct ieee80211_channel const*) ;
 int FUNC_5 (struct ath_hal*,TYPE_2__ const*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static HAL_BOOL
FUNC_6(struct ath_hal *VAR_6,
 const struct ieee80211_channel *VAR_7,
 int16_t *VAR_8, int16_t *VAR_9)
{
 uint16_t VAR_10 = VAR_7->ic_freq;
 const HAL_EEPROM *VAR_11 = FUNC_0(VAR_6)->ah_eeprom;
 int VAR_12=0,VAR_13,VAR_14;
 int VAR_15, VAR_16,VAR_17;
 const EXPN_DATA_PER_CHANNEL_5112 *VAR_18=VAR_1;
 const EEPROM_POWER_EXPN_5112 *VAR_19=VAR_1;

 *VAR_8 = 0;
 if (FUNC_2(VAR_7)) {
  VAR_19 = VAR_11->ee_modePowerArray5112;
  VAR_18 = VAR_19[VAR_3].pDataPerChannel;
  VAR_12 = VAR_19[VAR_3].numChannels;
 } else if (FUNC_4(VAR_7) || FUNC_1(VAR_7)) {

  VAR_19 = VAR_11->ee_modePowerArray5112;
  VAR_18 = VAR_19[VAR_5].pDataPerChannel;
  VAR_12 = VAR_19[VAR_5].numChannels;
 } else if (FUNC_3(VAR_7)) {
  VAR_19 = VAR_11->ee_modePowerArray5112;
  VAR_18 = VAR_19[VAR_4].pDataPerChannel;
  VAR_12 = VAR_19[VAR_4].numChannels;
 } else {
  return (VAR_2);
 }



 if (VAR_12 < 1)
  return(VAR_0);

 if ((VAR_10 < VAR_18[0].channelValue) ||
     (VAR_10 > VAR_18[VAR_12-1].channelValue)) {
  if (VAR_10 < VAR_18[0].channelValue) {
   *VAR_8 = VAR_18[0].maxPower_t4;
   *VAR_9 = FUNC_5(VAR_6, &VAR_18[0]);
   return(VAR_2);
  } else {
   *VAR_8 = VAR_18[VAR_12 - 1].maxPower_t4;
   *VAR_9 = FUNC_5(VAR_6, &VAR_18[VAR_12 - 1]);
   return(VAR_2);
  }
 }


 for (VAR_14=0,VAR_13=0;
      (VAR_13<VAR_12) && (VAR_10 > VAR_18[VAR_13].channelValue);
      VAR_14=VAR_13++);
 VAR_15 = VAR_18[VAR_13].channelValue - VAR_18[VAR_14].channelValue;
 if (VAR_15 > 0) {
  VAR_16 = VAR_18[VAR_13].maxPower_t4 - VAR_18[VAR_14].maxPower_t4;
  *VAR_8 = (int8_t) ((VAR_16*(VAR_10-VAR_18[VAR_14].channelValue) + VAR_18[VAR_14].maxPower_t4*VAR_15)/VAR_15);

  VAR_17 = FUNC_5(VAR_6,&VAR_18[VAR_13]) - FUNC_5(VAR_6, &VAR_18[VAR_14]);
  *VAR_9 = (int8_t) ((VAR_17*(VAR_10-VAR_18[VAR_14].channelValue) + FUNC_5(VAR_6, &VAR_18[VAR_14])*VAR_15)/VAR_15);
  return (VAR_2);
 } else {
  if (VAR_10 == VAR_18[VAR_13].channelValue) {
   *VAR_8 = VAR_18[VAR_13].maxPower_t4;
   *VAR_9 = FUNC_5(VAR_6, &VAR_18[VAR_13]);
   return(VAR_2);
  } else
   return(VAR_0);
 }
}
