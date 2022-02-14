
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int (* iv_key_set ) (struct ieee80211vap*,struct ieee80211_key const*) ;} ;
struct ieee80211_key {int dummy; } ;


 int FUNC_0 (struct ieee80211vap*,struct ieee80211_key const*) ;

__attribute__((used)) static __inline int
FUNC_1(struct ieee80211vap *VAR_0, const struct ieee80211_key *VAR_1)
{
 return VAR_0->iv_key_set(VAR_0, VAR_1);
}
