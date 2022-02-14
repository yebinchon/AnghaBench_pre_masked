
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;






int FUNC_0(int VAR_0, enum ieee80211_band VAR_1)
{


 if (VAR_0 <= 0)
  return 0;
 switch (VAR_1) {
 case 130:
  if (VAR_0 == 14)
   return 2484;
  else if (VAR_0 < 14)
   return 2407 + VAR_0 * 5;
  break;
 case 129:
  if (VAR_0 >= 182 && VAR_0 <= 196)
   return 4000 + VAR_0 * 5;
  else
   return 5000 + VAR_0 * 5;
  break;
 case 128:
  if (VAR_0 < 5)
   return 56160 + VAR_0 * 2160;
  break;
 default:
  ;
 }
 return 0;
}
