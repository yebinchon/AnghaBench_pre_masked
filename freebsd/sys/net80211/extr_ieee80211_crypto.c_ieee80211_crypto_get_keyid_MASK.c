
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211vap {struct ieee80211_key* iv_nw_keys; } ;
struct ieee80211_key {int dummy; } ;


 size_t VAR_0 ;

uint8_t
FUNC_0(struct ieee80211vap *VAR_1, struct ieee80211_key *VAR_2)
{
 if (VAR_2 >= &VAR_1->iv_nw_keys[0] &&
     VAR_2 < &VAR_1->iv_nw_keys[VAR_0])
  return (VAR_2 - VAR_1->iv_nw_keys);
 else
  return (0);
}
