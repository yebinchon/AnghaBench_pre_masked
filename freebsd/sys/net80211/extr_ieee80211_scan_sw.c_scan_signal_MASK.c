
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct ieee80211_scan_state {struct ieee80211com* ss_ic; } ;


 int FUNC_0 (struct ieee80211com*) ;
 int FUNC_1 (struct ieee80211com*) ;
 int FUNC_2 (struct ieee80211com*) ;
 int FUNC_3 (struct ieee80211_scan_state*,int) ;

__attribute__((used)) static void
FUNC_4(struct ieee80211_scan_state *VAR_0, int VAR_1)
{
 struct ieee80211com *VAR_2 = VAR_0->ss_ic;

 FUNC_2(VAR_2);

 FUNC_0(VAR_2);
 FUNC_3(VAR_0, VAR_1);
 FUNC_1(VAR_2);
}
