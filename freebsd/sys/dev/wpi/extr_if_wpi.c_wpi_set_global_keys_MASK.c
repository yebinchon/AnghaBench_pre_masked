
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct ieee80211_key* iv_nw_keys; } ;
struct ieee80211_node {struct ieee80211vap* ni_vap; } ;
struct ieee80211_key {scalar_t__ wk_keyix; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ieee80211_node*,struct ieee80211_key*) ;

__attribute__((used)) static int
FUNC_1(struct ieee80211_node *VAR_2)
{
 struct ieee80211vap *VAR_3 = VAR_2->ni_vap;
 struct ieee80211_key *VAR_4 = &VAR_3->iv_nw_keys[0];
 int VAR_5 = 1;

 for (; VAR_4 < &VAR_3->iv_nw_keys[VAR_1] && VAR_5; VAR_4++)
  if (VAR_4->wk_keyix != VAR_0)
   VAR_5 = FUNC_0(VAR_2, VAR_4);

 return !VAR_5;
}
