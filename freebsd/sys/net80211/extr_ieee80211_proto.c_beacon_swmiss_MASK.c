
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {scalar_t__ iv_state; int (* iv_bmiss ) (struct ieee80211vap*) ;struct ieee80211com* iv_ic; } ;
struct ieee80211com {int dummy; } ;


 int FUNC_0 (struct ieee80211com*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ieee80211com*) ;
 int FUNC_2 (struct ieee80211vap*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1, int VAR_2)
{
 struct ieee80211vap *VAR_3 = VAR_1;
 struct ieee80211com *VAR_4 = VAR_3->iv_ic;

 FUNC_0(VAR_4);
 if (VAR_3->iv_state >= VAR_0) {

  VAR_3->iv_bmiss(VAR_3);
 }
 FUNC_1(VAR_4);
}
