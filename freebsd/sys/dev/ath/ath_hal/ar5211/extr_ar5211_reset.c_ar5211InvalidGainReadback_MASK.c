
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_5__ {struct ieee80211_channel* ah_curchan; } ;
struct TYPE_4__ {int loTrig; int hiTrig; int currGain; } ;
typedef int HAL_BOOL ;
typedef TYPE_1__ GAIN_VALUES ;


 TYPE_3__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;

__attribute__((used)) static HAL_BOOL
FUNC_2(struct ath_hal *VAR_2, GAIN_VALUES *VAR_3)
{
 const struct ieee80211_channel *VAR_4 = FUNC_0(VAR_2)->ah_curchan;
 uint32_t VAR_5, VAR_6;
 uint32_t VAR_7, VAR_8, VAR_9, VAR_10;

 if (FUNC_1(VAR_4)) {
  VAR_5 = 0x18;
  VAR_7 = 0;
  VAR_8 = VAR_5 + 4;
  VAR_9 = 0x40;
  VAR_10 = VAR_9 + 50;

  VAR_3->loTrig = VAR_7;
  VAR_3->hiTrig = VAR_10+5;
 } else {
  VAR_5 = 0x3f;
  VAR_7 = 0;
  VAR_8 = 50;
  VAR_9 = VAR_7;
  VAR_10 = VAR_9 + 50;

  VAR_3->loTrig = VAR_7 + VAR_0;
  VAR_3->hiTrig = VAR_10 - VAR_1;
 }
 VAR_6 = VAR_3->currGain;

 return !((VAR_6 >= VAR_7 && VAR_6<= VAR_8) || (VAR_6 >= VAR_9 && VAR_6 <= VAR_10));
}
