
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_sta_rates {int dummy; } ;
struct ieee80211_sta {int rates; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct ieee80211_sta_rates*,int ) ;
 int FUNC_1 (int ,struct ieee80211_sta_rates*) ;
 struct ieee80211_sta_rates* FUNC_2 (int ,int) ;
 int VAR_0 ;

int FUNC_3(struct ieee80211_hw *VAR_1,
      struct ieee80211_sta *VAR_2,
      struct ieee80211_sta_rates *VAR_3)
{
 struct ieee80211_sta_rates *VAR_4;







 VAR_4 = FUNC_2(VAR_2->rates, 1);
 FUNC_1(VAR_2->rates, VAR_3);
 if (VAR_4)
  FUNC_0(VAR_4, VAR_0);

 return 0;
}
