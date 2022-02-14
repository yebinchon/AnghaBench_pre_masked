
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_myaddr; struct ieee80211_key* iv_nw_keys; } ;
struct ieee80211_key {scalar_t__ wk_keyix; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ieee80211vap*,struct ieee80211_key*,int ) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211vap *VAR_2)
{
 struct ieee80211_key *VAR_3;

 VAR_3 = &VAR_2->iv_nw_keys[0];
 for (; VAR_3 < &VAR_2->iv_nw_keys[VAR_1]; VAR_3++)
  if (VAR_3->wk_keyix != VAR_0)
   (void) FUNC_0(VAR_2, VAR_3, VAR_2->iv_myaddr);
}
