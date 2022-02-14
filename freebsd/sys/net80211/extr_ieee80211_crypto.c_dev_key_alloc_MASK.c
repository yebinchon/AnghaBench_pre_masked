
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int (* iv_key_alloc ) (struct ieee80211vap*,struct ieee80211_key*,int *,int *) ;} ;
struct ieee80211_key {int dummy; } ;
typedef int ieee80211_keyix ;


 int FUNC_0 (struct ieee80211vap*,struct ieee80211_key*,int *,int *) ;

__attribute__((used)) static __inline int
FUNC_1(struct ieee80211vap *VAR_0,
 struct ieee80211_key *VAR_1,
 ieee80211_keyix *VAR_2, ieee80211_keyix *VAR_3)
{
 return VAR_0->iv_key_alloc(VAR_0, VAR_1, VAR_2, VAR_3);
}
