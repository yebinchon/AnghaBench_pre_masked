
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct ieee80211_key* iv_nw_keys; } ;
struct ieee80211_key {int wk_flags; } ;
typedef scalar_t__ ieee80211_keyix ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct ieee80211vap*,struct ieee80211_key*) ;

__attribute__((used)) static int
FUNC_1(struct ieee80211vap *VAR_3, struct ieee80211_key *VAR_4,
 ieee80211_keyix *VAR_5, ieee80211_keyix *VAR_6)
{
 if (!(&VAR_3->iv_nw_keys[0] <= VAR_4 &&
      VAR_4 < &VAR_3->iv_nw_keys[VAR_2])) {
  if (VAR_4->wk_flags & VAR_1)
   return 0;
  *VAR_5 = 0;
 } else {
  *VAR_5 = FUNC_0(VAR_3, VAR_4);
 }
 *VAR_6 = VAR_0;
 return 1;
}
