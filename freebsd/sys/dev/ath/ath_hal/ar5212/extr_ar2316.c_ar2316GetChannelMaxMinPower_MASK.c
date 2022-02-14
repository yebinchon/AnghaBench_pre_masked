
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
typedef TYPE_1__ RAW_DATA_STRUCT_2316 ;
typedef TYPE_2__ RAW_DATA_PER_CHANNEL_2316 ;
typedef TYPE_3__ HAL_EEPROM ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 void* VAR_1 ;
 TYPE_6__* FUNC_0 (struct ath_hal*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel const*) ;
 int FUNC_4 (struct ath_hal*,TYPE_2__ const*) ;
 int FUNC_5 (struct ath_hal*,TYPE_2__ const*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static HAL_BOOL
FUNC_6(struct ath_hal *VAR_5,
 const struct ieee80211_channel *VAR_6,
 int16_t *VAR_7, int16_t *VAR_8)
{
 uint16_t VAR_9 = VAR_6->ic_freq;
 const HAL_EEPROM *VAR_10 = FUNC_0(VAR_5)->ah_eeprom;
 const RAW_DATA_STRUCT_2316 *VAR_11 = VAR_1;
 const RAW_DATA_PER_CHANNEL_2316 *VAR_12=VAR_1;
 uint16_t VAR_13;
 int VAR_14,VAR_15, VAR_16,VAR_17, VAR_18;

 *VAR_7 = 0;

 if (FUNC_3(VAR_6) || FUNC_1(VAR_6))
  VAR_11 = &VAR_10->ee_rawDataset2413[VAR_4];
 else if (FUNC_2(VAR_6))
  VAR_11 = &VAR_10->ee_rawDataset2413[VAR_3];
 else
  return(VAR_0);

 VAR_13 = VAR_11->numChannels;
 VAR_12 = VAR_11->pDataPerChannel;




 if (VAR_13 < 1)
  return(VAR_0);

 if ((VAR_9 < VAR_12[0].channelValue) ||
     (VAR_9 > VAR_12[VAR_13-1].channelValue)) {
  if (VAR_9 < VAR_12[0].channelValue) {
   *VAR_7 = FUNC_4(VAR_5, &VAR_12[0]);
   *VAR_8 = FUNC_5(VAR_5, &VAR_12[0]);
   return(VAR_2);
  } else {
   *VAR_7 = FUNC_4(VAR_5, &VAR_12[VAR_13 - 1]);
   *VAR_8 = FUNC_5(VAR_5, &VAR_12[VAR_13 - 1]);
   return(VAR_2);
  }
 }


 for (VAR_17=0,VAR_18=0; (VAR_18<VAR_13) && (VAR_9 > VAR_12[VAR_18].channelValue);
      VAR_17 = VAR_18++);
 VAR_14 = VAR_12[VAR_18].channelValue - VAR_12[VAR_17].channelValue;
 if (VAR_14 > 0) {
  VAR_15 = FUNC_4(VAR_5, &VAR_12[VAR_18]) - FUNC_4(VAR_5, &VAR_12[VAR_17]);
  *VAR_7 = (int8_t) ((VAR_15*(VAR_9-VAR_12[VAR_17].channelValue) +
         FUNC_4(VAR_5, &VAR_12[VAR_17])*VAR_14)/VAR_14);
  VAR_16 = FUNC_5(VAR_5, &VAR_12[VAR_18]) - FUNC_5(VAR_5, &VAR_12[VAR_17]);
  *VAR_8 = (int8_t) ((VAR_16*(VAR_9-VAR_12[VAR_17].channelValue) +
         FUNC_5(VAR_5, &VAR_12[VAR_17])*VAR_14)/VAR_14);
  return(VAR_2);
 } else {
  if (VAR_9 == VAR_12[VAR_18].channelValue) {
   *VAR_7 = FUNC_4(VAR_5, &VAR_12[VAR_18]);
   *VAR_8 = FUNC_5(VAR_5, &VAR_12[VAR_18]);
   return(VAR_2);
  } else
   return(VAR_0);
 }
}
