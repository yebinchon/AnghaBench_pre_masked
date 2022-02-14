
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_flags; struct ieee80211_scan_state* ic_scan; } ;
struct ieee80211_scan_state {struct ieee80211vap* ss_vap; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211com*) ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211_scan_state*,int ) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211vap *VAR_2)
{
 struct ieee80211com *VAR_3 = VAR_2->iv_ic;
 struct ieee80211_scan_state *VAR_4 = VAR_3->ic_scan;

 FUNC_0(VAR_3);

 if (VAR_4 != ((void*)0) && VAR_4->ss_vap == VAR_2 &&
     (VAR_3->ic_flags & VAR_0))
  FUNC_1(VAR_4, VAR_1);
}
