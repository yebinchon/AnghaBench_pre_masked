
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_key {TYPE_1__* wk_cipher; } ;
struct TYPE_2__ {int (* ic_detach ) (struct ieee80211_key*) ;} ;


 int FUNC_0 (struct ieee80211_key*) ;

__attribute__((used)) static __inline void
FUNC_1(struct ieee80211_key *VAR_0)
{
 VAR_0->wk_cipher->ic_detach(VAR_0);
}
