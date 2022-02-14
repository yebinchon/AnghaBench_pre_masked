
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct ieee80211_node* iv_bss; } ;
struct ieee80211_node {struct ieee80211vap* ni_vap; } ;


 int FUNC_0 (struct ieee80211_node*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, struct ieee80211_node *VAR_1)
{
 struct ieee80211vap *VAR_2 = VAR_1->ni_vap;

 if (VAR_1 != VAR_2->iv_bss)
  FUNC_0(VAR_1);
}
