
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct ieee80211_channel {int ic_freq; } ;
struct ath_hal {int dummy; } ;
struct TYPE_7__ {int ah_ini_cckFirNormal; int ah_ini_cckFirJapan2484; } ;
struct TYPE_6__ {struct ieee80211_channel const* ah_curchan; } ;
struct TYPE_5__ {int synth_center; } ;
typedef int HAL_BOOL ;
typedef TYPE_1__ CHAN_CENTERS ;


 TYPE_4__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (struct ath_hal*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (struct ath_hal*,int ,int ,int) ;
 int FUNC_4 (struct ath_hal*,int ,int ) ;
 int FUNC_5 (struct ath_hal*,int ) ;
 int FUNC_6 (struct ath_hal*,int ,int) ;
 int FUNC_7 (struct ath_hal*,struct ieee80211_channel const*,TYPE_1__*) ;
 int FUNC_8 (struct ath_hal*,int *,int,int) ;

__attribute__((used)) static HAL_BOOL
FUNC_9(struct ath_hal *VAR_7, const struct ieee80211_channel *VAR_8)
{
 uint16_t VAR_9, VAR_10, VAR_11 = 0;
 uint32_t VAR_12, VAR_13, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;
 CHAN_CENTERS VAR_17;
 uint32_t VAR_18 = 24;

 FUNC_4(VAR_7, VAR_0, VAR_8->ic_freq);

 FUNC_7(VAR_7, VAR_8, &VAR_17);
 VAR_12 = VAR_17.synth_center;

 VAR_16 = FUNC_5(VAR_7, VAR_6);
 VAR_16 &= 0xc0000000;

 if (VAR_12 < 4800) {
  uint32_t VAR_19;
  int VAR_20 = 0;

  VAR_9 = 1;
  VAR_10 = 1;
  VAR_11 = 0;
  VAR_14 = (VAR_12 * 0x10000)/15;

  if (FUNC_2(VAR_7)) {
   if (VAR_12 == 2484) {
    FUNC_8(VAR_7,
        &FUNC_0(VAR_7)->ah_ini_cckFirJapan2484, 1,
        VAR_20);
   } else {
    FUNC_8(VAR_7,
        &FUNC_0(VAR_7)->ah_ini_cckFirNormal, 1,
        VAR_20);
   }
  }

  VAR_19 = FUNC_5(VAR_7, VAR_4);
  if (VAR_12 == 2484) {

   FUNC_6(VAR_7, VAR_4,
       VAR_19 | VAR_5);
  } else {
   FUNC_6(VAR_7, VAR_4,
       VAR_19 &~ VAR_5);
  }
 } else {
  VAR_9 = 0;
  VAR_10 = 0;

  if ((VAR_12 % 20) == 0) {
   VAR_11 = 3;
  } else if ((VAR_12 % 10) == 0) {
   VAR_11 = 2;
  } else {
   VAR_11 = 0;




   VAR_10 = 1;
   VAR_18 = 1;
   VAR_14 = (VAR_12 * 0x8000)/15;


   FUNC_3(VAR_7, VAR_2,
       VAR_3, VAR_18);
  }
  if (!VAR_10) {
   VAR_13 = (VAR_12 * (VAR_18 >> VAR_11))/60;
   VAR_14 = VAR_13 & 0x1ff;
   VAR_15 = (VAR_13 & 0xfffffe00) * 2;
   VAR_14 = (VAR_14 << 17) | VAR_15;
  }
 }

 VAR_16 = VAR_16 | (VAR_9 << 29) | (VAR_10 << 28) |
     (VAR_11 << 26) | (VAR_14);

 FUNC_6(VAR_7, VAR_6, VAR_16);

 FUNC_1(VAR_7)->ah_curchan = VAR_8;

 return VAR_1;
}
