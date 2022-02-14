
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int * bands; } ;
struct ieee80211_regdomain {int dummy; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct wiphy*,int ,struct ieee80211_regdomain const*) ;

void FUNC_2(struct wiphy *VAR_1,
       const struct ieee80211_regdomain *VAR_2)
{
 enum ieee80211_band VAR_3;
 unsigned int VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!VAR_1->bands[VAR_3])
   continue;
  FUNC_1(VAR_1, VAR_1->bands[VAR_3], VAR_2);
  VAR_4++;
 }





 FUNC_0(!VAR_4);
}
