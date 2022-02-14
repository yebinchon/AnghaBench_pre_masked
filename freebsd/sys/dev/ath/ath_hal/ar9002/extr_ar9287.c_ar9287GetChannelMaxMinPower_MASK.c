
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_channel {scalar_t__ channel; } ;
struct ath_hal_5212 {TYPE_2__* ah_modePowerArray5112; } ;
struct ath_hal {int dummy; } ;
typedef int int8_t ;
typedef int int16_t ;
struct TYPE_5__ {int numChannels; TYPE_1__* pDataPerChannel; } ;
struct TYPE_4__ {scalar_t__ channelValue; int maxPower_t4; } ;
typedef int HAL_BOOL ;
typedef TYPE_1__ EXPN_DATA_PER_CHANNEL_5112 ;
typedef TYPE_2__ EEPROM_POWER_EXPN_5112 ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_4 (struct ieee80211_channel const*) ;
 int FUNC_5 (struct ath_hal*,TYPE_1__*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static HAL_BOOL
FUNC_6(struct ath_hal *VAR_6,
 const struct ieee80211_channel *VAR_7,
 int16_t *VAR_8, int16_t *VAR_9)
{
 *VAR_8 = *VAR_9 = 0;
 return VAR_0;

}
