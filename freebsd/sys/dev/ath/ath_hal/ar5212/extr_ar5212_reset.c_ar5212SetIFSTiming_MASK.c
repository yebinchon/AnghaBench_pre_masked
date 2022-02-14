
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct ath_hal*,int ) ;
 int FUNC_4 (struct ath_hal*,int ,int ,int) ;
 int FUNC_5 (struct ath_hal*,int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

void
FUNC_6(struct ath_hal *VAR_18, const struct ieee80211_channel *VAR_19)
{
 uint32_t VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;

 FUNC_0(FUNC_1(VAR_19) ||
    FUNC_2(VAR_19));

 VAR_24 = FUNC_3(VAR_18, VAR_6) & VAR_7;
 if (FUNC_1(VAR_19)) {
  VAR_23 = VAR_11;
  VAR_21 = VAR_15 << VAR_0;
  VAR_20 = VAR_16 << VAR_1;
  VAR_22 = VAR_8;
  VAR_25 = VAR_9;
  VAR_26 = VAR_13 >> 1;
 } else {
  VAR_23 = VAR_12;
  VAR_21 = VAR_15 << VAR_0;
  VAR_20 = VAR_17 << VAR_1;
  VAR_22 = VAR_14;
  VAR_25 = VAR_10;
  VAR_26 = VAR_13 >> 2;
 }

 FUNC_5(VAR_18, VAR_6, (VAR_22 | VAR_24 | VAR_20 | VAR_21));
 FUNC_5(VAR_18, VAR_5, VAR_23);
 FUNC_5(VAR_18, VAR_2, VAR_25);
 FUNC_4(VAR_18, VAR_3,
    VAR_4, VAR_26);
}
