
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct ieee80211_key const* iv_nw_keys; } ;
struct ieee80211_key {int dummy; } ;


 size_t VAR_0 ;

int
FUNC_0(const struct ieee80211vap *VAR_1,
    const struct ieee80211_key *VAR_2)
{

 if (VAR_2 >= &VAR_1->iv_nw_keys[0] &&
     VAR_2 < &VAR_1->iv_nw_keys[VAR_0])
  return (VAR_2 - VAR_1->iv_nw_keys);
 return (-1);
}
