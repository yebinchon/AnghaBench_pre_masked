
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_vap {scalar_t__ curr_mode; int tsf_sync_adhoc_task; } ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct rtwn_vap* FUNC_0 (struct ieee80211vap*) ;
 int FUNC_1 (struct ieee80211com*,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct ieee80211vap *VAR_2 = VAR_1;
 struct ieee80211com *VAR_3 = VAR_2->iv_ic;
 struct rtwn_vap *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->curr_mode != VAR_0) {

  FUNC_1(VAR_3, &VAR_4->tsf_sync_adhoc_task);
 }
}
