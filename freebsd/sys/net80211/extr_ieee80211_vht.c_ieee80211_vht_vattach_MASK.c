
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_flags_vht; int iv_vht_mcsinfo; int iv_vhtextcaps; int iv_vhtcaps; struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_vht_mcsinfo; int ic_vhtextcaps; int ic_vhtcaps; } ;
struct ieee80211_vht_mcs_info {int dummy; } ;


 int FUNC_0 (struct ieee80211com*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int) ;

void
FUNC_2(struct ieee80211vap *VAR_3)
{
 struct ieee80211com *VAR_4 = VAR_3->iv_ic;

 if (! FUNC_0(VAR_4))
  return;

 VAR_3->iv_vhtcaps = VAR_4->ic_vhtcaps;
 VAR_3->iv_vhtextcaps = VAR_4->ic_vhtextcaps;


 VAR_3->iv_flags_vht =
     VAR_2
     | VAR_0
     | VAR_1;


 FUNC_1(&VAR_3->iv_vht_mcsinfo, &VAR_4->ic_vht_mcsinfo,
     sizeof(struct ieee80211_vht_mcs_info));
}
