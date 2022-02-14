
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct ieee80211_channel {size_t ic_ieee; } ;
struct ath_hal {int dummy; } ;
typedef size_t int16_t ;
struct TYPE_5__ {struct ieee80211_channel const* ah_curchan; } ;
struct TYPE_4__ {size_t channelSelect; int refClkSel; size_t channel5111; } ;
typedef int HAL_BOOL ;
typedef TYPE_1__ CHAN_INFO_2GHZ ;


 TYPE_3__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 int FUNC_3 (struct ath_hal*,int ,int) ;
 int FUNC_4 (size_t,int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static HAL_BOOL
FUNC_5(struct ath_hal *VAR_3, const struct ieee80211_channel *VAR_4)
{
 uint32_t VAR_5, VAR_6, VAR_7;
 int16_t VAR_8, VAR_9;

 VAR_9 = VAR_4->ic_ieee;
 if (FUNC_2(VAR_4)) {
  const CHAN_INFO_2GHZ* VAR_10 =
   &VAR_2[VAR_9 + VAR_1];

  VAR_7 = ((FUNC_4(VAR_10->channelSelect, 8) & 0xff)
    << 5)
    | (VAR_10->refClkSel << 4);
  VAR_8 = VAR_10->channel5111;
 } else {
  VAR_7 = 0;
  VAR_8 = VAR_9;
 }


 if (VAR_8 >= 145 || (VAR_8 & 0x1)) {
  VAR_6 = FUNC_4(VAR_8 - 24, 8) & 0xFF;
  VAR_5 = 1;
 } else {
  VAR_6 = FUNC_4(((VAR_8 - 24) / 2), 8) & 0xFF;
  VAR_5 = 0;
 }

 VAR_6 = (VAR_6 << 2) | (VAR_5 << 1) | (1 << 10) | 0x1;
 FUNC_3(VAR_3, FUNC_1(0x27), ((VAR_7 & 0xff) << 8) | (VAR_6 & 0xff));
 VAR_6 >>= 8;
 FUNC_3(VAR_3, FUNC_1(0x34), (VAR_7 & 0xff00) | (VAR_6 & 0xff));

 FUNC_0(VAR_3)->ah_curchan = VAR_4;
 return VAR_0;
}
