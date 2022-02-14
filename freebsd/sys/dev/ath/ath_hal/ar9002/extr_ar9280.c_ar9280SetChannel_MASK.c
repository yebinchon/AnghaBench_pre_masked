
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct ieee80211_channel {int ic_freq; } ;
struct ath_hal {int dummy; } ;
struct TYPE_5__ {struct ieee80211_channel const* ah_curchan; } ;
struct TYPE_4__ {int synth_center; } ;
typedef int HAL_BOOL ;
typedef TYPE_1__ CHAN_CENTERS ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct ath_hal*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct ieee80211_channel const*) ;
 int FUNC_2 (struct ieee80211_channel const*) ;
 int FUNC_3 (struct ath_hal*,int ,int ,int) ;
 int FUNC_4 (struct ath_hal*,int ,int ) ;
 int FUNC_5 (struct ath_hal*,int ) ;
 int FUNC_6 (struct ath_hal*,int ,int) ;
 int FUNC_7 (struct ath_hal*,struct ieee80211_channel const*,TYPE_1__*) ;
 scalar_t__ FUNC_8 (struct ath_hal*,int ,int*) ;

__attribute__((used)) static HAL_BOOL
FUNC_9(struct ath_hal *VAR_9, const struct ieee80211_channel *VAR_10)
{
 uint16_t VAR_11, VAR_12, VAR_13 = 0;
 uint32_t VAR_14, VAR_15, VAR_16 = 0, VAR_17 = 0, VAR_18 = 0;
 CHAN_CENTERS VAR_19;
 uint32_t VAR_20 = 24;
 uint8_t VAR_21;

 FUNC_4(VAR_9, VAR_0, VAR_10->ic_freq);

 FUNC_7(VAR_9, VAR_10, &VAR_19);
 VAR_14 = VAR_19.synth_center;

 VAR_18 = FUNC_5(VAR_9, VAR_7);
 VAR_18 &= 0xc0000000;

 if (FUNC_8(VAR_9, VAR_4, &VAR_21) != VAR_8)
  VAR_21 = 0;

 if (VAR_14 < 4800) {
  uint32_t VAR_22;

  VAR_11 = 1;
  VAR_12 = 1;
  VAR_13 = 0;
  VAR_16 = (VAR_14 * 0x10000)/15;

  VAR_22 = FUNC_5(VAR_9, VAR_5);
  if (VAR_14 == 2484) {

   FUNC_6(VAR_9, VAR_5,
       VAR_22 | VAR_6);
  } else {
   FUNC_6(VAR_9, VAR_5,
       VAR_22 &~ VAR_6);
  }
 } else {
  VAR_11 = 0;
  VAR_12 = 0;

  switch (VAR_21) {
  case 0:







   if (FUNC_2(VAR_10) ||
       FUNC_1(VAR_10))
    VAR_13 = 0;
   else if ((VAR_14 % 20) == 0) {
    VAR_13 = 3;
   } else if ((VAR_14 % 10) == 0) {
    VAR_13 = 2;
   }
   if (VAR_13) break;
  case 1:
  default:
   VAR_13 = 0;
    VAR_12 = 1;
    VAR_20 = 1;
    VAR_16 = (VAR_14 * 0x8000)/15;
   FUNC_3(VAR_9, VAR_2,
       VAR_3, VAR_20);
  }

  if (!VAR_12) {
   VAR_15 = (VAR_14 * (VAR_20 >> VAR_13))/60;
   VAR_16 = VAR_15 & 0x1ff;
   VAR_17 = (VAR_15 & 0xfffffe00) * 2;
   VAR_16 = (VAR_16 << 17) | VAR_17;
  }
 }

 VAR_18 = VAR_18 | (VAR_11 << 29) | (VAR_12 << 28) |
     (VAR_13 << 26) | (VAR_16);

 FUNC_6(VAR_9, VAR_7, VAR_18);

 FUNC_0(VAR_9)->ah_curchan = VAR_10;

 return VAR_1;
}
