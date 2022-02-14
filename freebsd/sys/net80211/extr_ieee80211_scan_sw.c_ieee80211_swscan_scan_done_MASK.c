
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {struct ieee80211_scan_state* ic_scan; } ;
struct ieee80211_scan_state {int dummy; } ;


 int FUNC_0 (struct ieee80211com*) ;
 int FUNC_1 (struct ieee80211_scan_state*,int ) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211vap *VAR_0)
{
 struct ieee80211com *VAR_1 = VAR_0->iv_ic;
 struct ieee80211_scan_state *VAR_2 = VAR_1->ic_scan;

 FUNC_0(VAR_1);

 FUNC_1(VAR_2, 0);
}
