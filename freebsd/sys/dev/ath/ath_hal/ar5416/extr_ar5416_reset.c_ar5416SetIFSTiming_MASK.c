
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
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_4 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_5 (struct ath_hal*,struct ieee80211_channel const*) ;
 int FUNC_6 (struct ath_hal*,int ) ;
 int FUNC_7 (struct ath_hal*,int ,int ,int) ;
 int FUNC_8 (struct ath_hal*,int ,int) ;

__attribute__((used)) static void
FUNC_9(struct ath_hal *VAR_25, const struct ieee80211_channel *VAR_26)
{
 uint32_t VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 int VAR_34 = 0;

 FUNC_0(FUNC_3(VAR_26) ||
     FUNC_4(VAR_26));


 if (FUNC_1(VAR_26))
  VAR_34 = 1;
 else if (FUNC_2(VAR_26) &&
     FUNC_5(VAR_25, VAR_26))
  VAR_34 = 1;





 VAR_31 = FUNC_6(VAR_25, VAR_23) & VAR_24;





 if (FUNC_3(VAR_26)) {
  if (VAR_34) {
   VAR_30 = VAR_7;
   VAR_28 = VAR_14 <<
       VAR_17;
   VAR_27 = VAR_15 <<
       VAR_18;
   VAR_29 = VAR_1;
   VAR_32 = VAR_3;
   VAR_33 = VAR_11 >> 1;
  } else {
   VAR_30 = VAR_6;
   VAR_28 = VAR_14 <<
       VAR_17;
   VAR_27 = VAR_15 <<
       VAR_18;
   VAR_29 = VAR_0;
   VAR_32 = VAR_2;
   VAR_33 = VAR_10 >> 1;
  }
 } else {
  if (VAR_34) {
   VAR_30 = VAR_9;
   VAR_28 = VAR_14 <<
       VAR_17;
   VAR_27 = VAR_16 <<
       VAR_18;
   VAR_29 = VAR_13;
   VAR_32 = VAR_5;
   VAR_33 = VAR_11 >> 2;
  } else {
   VAR_30 = VAR_8;
   VAR_28 = VAR_14 <<
       VAR_17;
   VAR_27 = VAR_16 <<
       VAR_18;
   VAR_29 = VAR_12;
   VAR_32 = VAR_4;
   VAR_33 = VAR_10 >> 2;
  }
 }


 FUNC_8(VAR_25, VAR_23, (VAR_29 | VAR_31 | VAR_27 | VAR_28));
 FUNC_8(VAR_25, VAR_22, VAR_30);
 FUNC_8(VAR_25, VAR_19, VAR_32);
 FUNC_7(VAR_25, VAR_20,
     VAR_21, VAR_33);
}
