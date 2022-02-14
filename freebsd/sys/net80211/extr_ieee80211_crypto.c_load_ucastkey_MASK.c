
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {scalar_t__ iv_state; } ;
struct ieee80211_key {int wk_flags; } ;
struct ieee80211_node {struct ieee80211_key ni_ucastkey; struct ieee80211vap* ni_vap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ieee80211vap*,struct ieee80211_key*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_2, struct ieee80211_node *VAR_3)
{
 struct ieee80211vap *VAR_4 = VAR_3->ni_vap;
 struct ieee80211_key *VAR_5;

 if (VAR_4->iv_state != VAR_1)
  return;
 VAR_5 = &VAR_3->ni_ucastkey;
 if (VAR_5->wk_flags & VAR_0)
  FUNC_0(VAR_4, VAR_5);
}
