
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_myaddr; struct ieee80211_node* iv_bss; struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_bintval; int ic_sta; } ;
struct ieee80211_node {int ni_bssid; int ni_intval; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ieee80211_node*,struct ieee80211_node*) ;
 struct ieee80211_node* FUNC_3 (int *,struct ieee80211vap*,int ) ;
 int FUNC_4 (struct ieee80211_node*) ;
 int FUNC_5 (int *,struct ieee80211vap*) ;
 struct ieee80211_node* FUNC_6 (struct ieee80211_node*) ;
 int FUNC_7 (struct ieee80211com*) ;

void
FUNC_8(struct ieee80211vap *VAR_0)
{
 struct ieee80211com *VAR_1 = VAR_0->iv_ic;
 struct ieee80211_node *VAR_2, *VAR_3;

 FUNC_5(&VAR_1->ic_sta, VAR_0);

 FUNC_7(VAR_1);

 VAR_2 = FUNC_3(&VAR_1->ic_sta, VAR_0, VAR_0->iv_myaddr);
 FUNC_1(VAR_2 != ((void*)0), ("unable to setup initial BSS node"));
 VAR_3 = VAR_0->iv_bss;
 VAR_0->iv_bss = FUNC_6(VAR_2);
 if (VAR_3 != ((void*)0)) {
  FUNC_2(VAR_2, VAR_3);
  VAR_2->ni_intval = VAR_1->ic_bintval;
  FUNC_4(VAR_3);
 } else
  FUNC_0(VAR_2->ni_bssid, VAR_0->iv_myaddr);
}
