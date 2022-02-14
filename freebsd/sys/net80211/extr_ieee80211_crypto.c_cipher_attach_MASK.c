
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {int dummy; } ;
struct ieee80211_key {TYPE_1__* wk_cipher; } ;
struct TYPE_2__ {void* (* ic_attach ) (struct ieee80211vap*,struct ieee80211_key*) ;} ;


 void* FUNC_0 (struct ieee80211vap*,struct ieee80211_key*) ;

__attribute__((used)) static __inline void *
FUNC_1(struct ieee80211vap *VAR_0, struct ieee80211_key *VAR_1)
{
 return VAR_1->wk_cipher->ic_attach(VAR_0, VAR_1);
}
