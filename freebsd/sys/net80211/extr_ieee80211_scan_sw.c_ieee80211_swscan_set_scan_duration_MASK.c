
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {struct ieee80211_scan_state* ic_scan; } ;
struct ieee80211_scan_state {int dummy; } ;
struct TYPE_2__ {int ss_duration; int ss_iflags; } ;


 int FUNC_0 (struct ieee80211com*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct ieee80211_scan_state*) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211vap *VAR_1, u_int VAR_2)
{
 struct ieee80211com *VAR_3 = VAR_1->iv_ic;
 struct ieee80211_scan_state *VAR_4 = VAR_3->ic_scan;

 FUNC_0(VAR_3);


 FUNC_1(VAR_4)->ss_iflags |= VAR_0;
 FUNC_1(VAR_4)->ss_duration = VAR_2;
}
