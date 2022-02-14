
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211_channel {int ic_freq; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_channel const* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_0 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_4 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_5 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_6 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_7 (struct ath_hal*) ;
 scalar_t__ FUNC_8 (struct ath_hal*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct ath_hal*,int ,int ) ;
 int FUNC_11 (struct ath_hal*,int ) ;
 int FUNC_12 (struct ath_hal*,int ,int) ;
 int VAR_29 ;
 int FUNC_13 (struct ath_hal*,int ,int ) ;
 int FUNC_14 (struct ath_hal*,int) ;

HAL_BOOL
FUNC_15(struct ath_hal *VAR_30, const struct ieee80211_channel *VAR_31)
{

 FUNC_10(VAR_30, VAR_1, VAR_31 ? VAR_31->ic_freq : 0);





 if (!FUNC_14(VAR_30, VAR_26 | VAR_25 | VAR_27))
  return VAR_0;


 if (!FUNC_13(VAR_30, VAR_28, VAR_3))
  return VAR_0;


 if (!FUNC_14(VAR_30, 0))
  return VAR_0;
 if (VAR_31 != VAR_2) {
  uint32_t VAR_32, VAR_33 = 0, VAR_34, VAR_35;

  if (FUNC_7(VAR_30)) {
   VAR_32 = VAR_8;
   if (FUNC_3(VAR_31))
    VAR_32 |= VAR_11;
   else if (FUNC_5(VAR_31))
    VAR_32 |= VAR_13;

   if (FUNC_1(VAR_31))
    VAR_33 = VAR_21;
   else
    VAR_33 = VAR_19;
  } else if (FUNC_8(VAR_30)) {
   VAR_32 = VAR_7;
   if (FUNC_1(VAR_31))
    VAR_33 = VAR_20;
   else
    VAR_33 = VAR_17;
   if (FUNC_3(VAR_31))
    VAR_33 = VAR_22;
   else if (FUNC_5(VAR_31))
    VAR_33 = VAR_23;
  } else {
   VAR_32 = VAR_8;
   if (FUNC_1(VAR_31))
    VAR_33 = VAR_21;
   else
    VAR_33 = VAR_18;
   if (FUNC_3(VAR_31))
    VAR_33 |= VAR_22;
   else if (FUNC_5(VAR_31))
    VAR_33 |= VAR_23;
  }
  if (FUNC_2(VAR_31))
   VAR_32 |= VAR_10;
  else if (FUNC_4(VAR_31))
   VAR_32 |= VAR_12;
  else
   VAR_32 |= VAR_9;
  if (FUNC_0(VAR_31))
   VAR_32 |= VAR_15;
  else
   VAR_32 |= VAR_14;
  VAR_35 = FUNC_6(VAR_31) ?
   (VAR_4 | VAR_5) : 0;
  VAR_34 = FUNC_11(VAR_30, VAR_16);







  if (FUNC_1(VAR_31)) {
   FUNC_12(VAR_30, VAR_24, VAR_35);
   FUNC_12(VAR_30, VAR_6, VAR_32);
   if (VAR_34 != VAR_33) {
    FUNC_12(VAR_30, VAR_16, VAR_33);

    FUNC_9(VAR_29);
   }
  } else {
   if (VAR_34 != VAR_33) {
    FUNC_12(VAR_30, VAR_16, VAR_33);

    FUNC_9(VAR_29);
   }
   FUNC_12(VAR_30, VAR_24, VAR_35);
   FUNC_12(VAR_30, VAR_6, VAR_32);
  }
 }
 return VAR_3;
}
