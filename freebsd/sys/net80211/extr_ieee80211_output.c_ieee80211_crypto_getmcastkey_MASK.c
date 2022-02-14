
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {size_t iv_def_txkey; struct ieee80211_key* iv_nw_keys; } ;
struct ieee80211_node {int dummy; } ;
struct ieee80211_key {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct ieee80211_key*) ;

__attribute__((used)) static __inline struct ieee80211_key *
FUNC_1(struct ieee80211vap *VAR_1,
 struct ieee80211_node *VAR_2)
{
 if (VAR_1->iv_def_txkey == VAR_0 ||
     FUNC_0(&VAR_1->iv_nw_keys[VAR_1->iv_def_txkey]))
  return ((void*)0);
 return &VAR_1->iv_nw_keys[VAR_1->iv_def_txkey];
}
