
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {scalar_t__* bands; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;

void FUNC_1(struct wiphy *VAR_1)
{
 enum ieee80211_band VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->bands[VAR_2])
   FUNC_0(VAR_1->bands[VAR_2], VAR_2);
}
