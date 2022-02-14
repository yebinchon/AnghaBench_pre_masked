
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct ieee80211_hwmp_state* iv_hwmp; } ;
struct ieee80211_hwmp_state {int hs_roottimer; } ;


 int FUNC_0 (struct ieee80211_hwmp_state*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211vap *VAR_1)
{
 struct ieee80211_hwmp_state *VAR_2 = VAR_1->iv_hwmp;

 FUNC_1(&VAR_2->hs_roottimer);
 FUNC_0(VAR_1->iv_hwmp, VAR_0);
 VAR_1->iv_hwmp = ((void*)0);
}
