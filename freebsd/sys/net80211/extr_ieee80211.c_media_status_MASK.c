
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int dummy; } ;
typedef enum ieee80211_opmode { ____Placeholder_ieee80211_opmode } ieee80211_opmode ;


 scalar_t__ FUNC_0 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_4 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_5 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_6 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_7 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_8 (struct ieee80211_channel const*) ;







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

__attribute__((used)) static int
FUNC_9(enum ieee80211_opmode VAR_16, const struct ieee80211_channel *VAR_17)
{
 int VAR_18;

 VAR_18 = VAR_1;
 switch (VAR_16) {
 case 129:
  break;
 case 132:
  VAR_18 |= VAR_7;
  break;
 case 133:
  VAR_18 |= VAR_9;
  break;
 case 130:
  VAR_18 |= VAR_13;
  break;
 case 134:
  VAR_18 |= VAR_7 | VAR_0;
  break;
 case 128:
  VAR_18 |= VAR_15;
  break;
 case 131:
  VAR_18 |= VAR_12;
  break;
 }
 if (FUNC_6(VAR_17)) {
  VAR_18 |= VAR_5;
 } else if (FUNC_7(VAR_17)) {
  VAR_18 |= VAR_6;
 } else if (FUNC_0(VAR_17)) {
  VAR_18 |= VAR_2;
 } else if (FUNC_2(VAR_17)) {
  VAR_18 |= VAR_3;
 } else if (FUNC_1(VAR_17)) {
  VAR_18 |= VAR_4;
 } else if (FUNC_3(VAR_17)) {
  VAR_18 |= VAR_8;
 }


 if (FUNC_8(VAR_17))
  VAR_18 |= VAR_14;






 return VAR_18;
}
