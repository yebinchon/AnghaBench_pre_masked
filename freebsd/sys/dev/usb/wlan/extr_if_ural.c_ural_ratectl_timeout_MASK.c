
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ural_vap {int ratectl_task; struct ieee80211vap vap; } ;
struct ieee80211com {int dummy; } ;


 int FUNC_0 (struct ieee80211com*,int *) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct ural_vap *VAR_1 = VAR_0;
 struct ieee80211vap *VAR_2 = &VAR_1->vap;
 struct ieee80211com *VAR_3 = VAR_2->iv_ic;

 FUNC_0(VAR_3, &VAR_1->ratectl_task);
}
