
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct ieee80211_channel {int ic_freq; } ;
struct ath_hal {int dummy; } ;
typedef int int8_t ;
typedef int int16_t ;
struct TYPE_10__ {TYPE_3__* ah_eeprom; } ;
struct TYPE_9__ {TYPE_1__* ee_rawDataset2413; } ;
struct TYPE_8__ {int channelValue; } ;
struct TYPE_7__ {int numChannels; TYPE_2__* pDataPerChannel; } ;
typedef TYPE_1__ RAW_DATA_STRUCT_2413 ;
typedef TYPE_2__ RAW_DATA_PER_CHANNEL_2413 ;
typedef TYPE_3__ HAL_EEPROM ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 void* VAR_1 ;
 TYPE_6__* FUNC_0 (struct ath_hal*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 int FUNC_3 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_4 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_5 (struct ieee80211_channel const*) ;
 int FUNC_6 (struct ath_hal*,TYPE_2__ const*) ;
 int FUNC_7 (struct ath_hal*,TYPE_2__ const*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static HAL_BOOL
FUNC_8(struct ath_hal *VAR_6,
 const struct ieee80211_channel *VAR_7,
 int16_t *VAR_8, int16_t *VAR_9)
{
 uint16_t VAR_10 = VAR_7->ic_freq;
 const HAL_EEPROM *VAR_11 = FUNC_0(VAR_6)->ah_eeprom;
 const RAW_DATA_STRUCT_2413 *VAR_12 = VAR_1;
 const RAW_DATA_PER_CHANNEL_2413 *VAR_13=VAR_1;
 uint16_t VAR_14;
 int VAR_15,VAR_16, VAR_17,VAR_18, VAR_19;

 *VAR_8 = 0;

 if (FUNC_5(VAR_7) || FUNC_2(VAR_7))
  VAR_12 = &VAR_11->ee_rawDataset2413[VAR_5];
 else if (FUNC_4(VAR_7))
  VAR_12 = &VAR_11->ee_rawDataset2413[VAR_4];
 else {
  FUNC_1(FUNC_3(VAR_7));
  VAR_12 = &VAR_11->ee_rawDataset2413[VAR_3];
 }

 VAR_14 = VAR_12->numChannels;
 VAR_13 = VAR_12->pDataPerChannel;




 if (VAR_14 < 1)
  return(VAR_0);

 if ((VAR_10 < VAR_13[0].channelValue) ||
     (VAR_10 > VAR_13[VAR_14-1].channelValue)) {
  if (VAR_10 < VAR_13[0].channelValue) {
   *VAR_8 = FUNC_6(VAR_6, &VAR_13[0]);
   *VAR_9 = FUNC_7(VAR_6, &VAR_13[0]);
   return(VAR_2);
  } else {
   *VAR_8 = FUNC_6(VAR_6, &VAR_13[VAR_14 - 1]);
   *VAR_9 = FUNC_7(VAR_6, &VAR_13[VAR_14 - 1]);
   return(VAR_2);
  }
 }


 for (VAR_18=0,VAR_19=0; (VAR_19<VAR_14) && (VAR_10 > VAR_13[VAR_19].channelValue);
      VAR_18 = VAR_19++);
 VAR_15 = VAR_13[VAR_19].channelValue - VAR_13[VAR_18].channelValue;
 if (VAR_15 > 0) {
  VAR_16 = FUNC_6(VAR_6, &VAR_13[VAR_19]) - FUNC_6(VAR_6, &VAR_13[VAR_18]);
  *VAR_8 = (int8_t) ((VAR_16*(VAR_10-VAR_13[VAR_18].channelValue) +
         FUNC_6(VAR_6, &VAR_13[VAR_18])*VAR_15)/VAR_15);
  VAR_17 = FUNC_7(VAR_6, &VAR_13[VAR_19]) - FUNC_7(VAR_6, &VAR_13[VAR_18]);
  *VAR_9 = (int8_t) ((VAR_17*(VAR_10-VAR_13[VAR_18].channelValue) +
         FUNC_7(VAR_6, &VAR_13[VAR_18])*VAR_15)/VAR_15);
  return(VAR_2);
 } else {
  if (VAR_10 == VAR_13[VAR_19].channelValue) {
   *VAR_8 = FUNC_6(VAR_6, &VAR_13[VAR_19]);
   *VAR_9 = FUNC_7(VAR_6, &VAR_13[VAR_19]);
   return(VAR_2);
  } else
   return(VAR_0);
 }
}
