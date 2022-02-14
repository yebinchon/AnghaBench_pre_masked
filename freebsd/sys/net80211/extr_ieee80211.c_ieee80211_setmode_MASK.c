
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_curmode; int * ic_sup_rates; } ;
typedef enum ieee80211_phymode { ____Placeholder_ieee80211_phymode } ieee80211_phymode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211com*) ;
 int FUNC_1 (int *,int) ;

int
FUNC_2(struct ieee80211com *VAR_2, enum ieee80211_phymode VAR_3)
{






 if (VAR_3 == VAR_1 || VAR_3 == VAR_0)
  FUNC_1(&VAR_2->ic_sup_rates[VAR_3], VAR_3);

 VAR_2->ic_curmode = VAR_3;
 FUNC_0(VAR_2);

 return 0;
}
