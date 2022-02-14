
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct ieee80211_channel {size_t ic_ieee; } ;
struct ath_hal {int dummy; } ;
typedef size_t int16_t ;
struct TYPE_2__ {struct ieee80211_channel const* ah_curchan; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 int FUNC_3 (struct ath_hal*,int ,int) ;
 int FUNC_4 (struct ath_hal*,int ) ;
 int FUNC_5 (struct ath_hal*,int ,int) ;
 int FUNC_6 (struct ath_hal*,struct ieee80211_channel const*) ;
 int FUNC_7 (size_t,int) ;

__attribute__((used)) static HAL_BOOL
FUNC_8(struct ath_hal *VAR_5, const struct ieee80211_channel *VAR_6)
{

 uint16_t VAR_7 = FUNC_6(VAR_5, VAR_6);
 uint32_t VAR_8, VAR_9, VAR_10;
 int16_t VAR_11, VAR_12;





 typedef struct {
  uint32_t refClkSel;
  uint32_t channelSelect;
  uint16_t channel5111;
 } CHAN_INFO_2GHZ;

 static const CHAN_INFO_2GHZ VAR_13[] = {
  { 1, 0x46, 96 },
  { 1, 0x46, 97 },
  { 1, 0x46, 98 },
  { 1, 0x46, 99 },
  { 1, 0x46, 100 },
  { 1, 0x46, 101 },
  { 1, 0x46, 102 },
  { 1, 0x46, 103 },
  { 1, 0x46, 104 },
  { 1, 0x46, 105 },
  { 1, 0x46, 106 },
  { 1, 0x46, 107 },
  { 1, 0x46, 108 },

  { 1, 0x46, 116 },
  { 1, 0x46, 116 },
  { 1, 0x46, 116 },
  { 1, 0x46, 116 },
  { 1, 0x46, 116 },
  { 1, 0x46, 116 },
  { 1, 0x46, 116 },
  { 1, 0x46, 116 },
  { 1, 0x46, 117 },
  { 1, 0x46, 118 },
  { 1, 0x46, 119 },
  { 1, 0x46, 120 },
  { 1, 0x46, 121 },
  { 1, 0x46, 122 },
  { 1, 0x46, 123 },
  { 1, 0x46, 124 },
  { 1, 0x46, 125 },
  { 1, 0x46, 126 },
  { 1, 0x46, 127 },
  { 1, 0x46, 128 },
  { 1, 0x44, 124 },
  { 1, 0x46, 136 },
  { 1, 0x46, 140 },
  { 1, 0x46, 144 },
  { 1, 0x46, 148 },
  { 1, 0x46, 152 },
  { 1, 0x46, 156 },
  { 1, 0x46, 160 },
  { 1, 0x46, 164 },
  { 1, 0x46, 168 },
  { 1, 0x46, 172 },
  { 1, 0x46, 176 },
  { 1, 0x46, 180 }
 };

 FUNC_3(VAR_5, VAR_0, VAR_7);

 VAR_12 = VAR_6->ic_ieee;
 if (FUNC_2(VAR_6)) {
  const CHAN_INFO_2GHZ* VAR_14 =
   &VAR_13[VAR_12 + 19];
  uint32_t VAR_15;

  VAR_10 = ((FUNC_7(VAR_14->channelSelect, 8) & 0xff)
    << 5)
    | (VAR_14->refClkSel << 4);
  VAR_11 = VAR_14->channel5111;
  VAR_15 = FUNC_4(VAR_5, VAR_2);
  if (VAR_7 == 2484) {

   FUNC_5(VAR_5, VAR_2,
    VAR_15 | VAR_3);
  } else {
   FUNC_5(VAR_5, VAR_2,
    VAR_15 &~ VAR_3);
  }
 } else {
  VAR_11 = VAR_12;
  VAR_10 = 0;
 }


 if (VAR_11 >= 145 || (VAR_11 & 0x1)) {
  VAR_9 = FUNC_7(VAR_11 - 24, 8) & 0xff;
  VAR_8 = 1;
 } else {
  VAR_9 = FUNC_7(((VAR_11 - 24)/2), 8) & 0xff;
  VAR_8 = 0;
 }

 VAR_9 = (VAR_9 << 2) | (VAR_8 << 1) | (1 << 10) | 0x1;
 FUNC_5(VAR_5, FUNC_1(0x27), ((VAR_10 & 0xff) << 8) | (VAR_9 & 0xff));
 VAR_9 >>= 8;
 FUNC_5(VAR_5, FUNC_1(0x34), (VAR_10 & 0xff00) | (VAR_9 & 0xff));

 FUNC_0(VAR_5)->ah_curchan = VAR_6;
 return VAR_1;

}
