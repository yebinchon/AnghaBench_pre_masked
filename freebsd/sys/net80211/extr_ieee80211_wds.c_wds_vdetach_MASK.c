
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {TYPE_1__* iv_bss; } ;
struct TYPE_2__ {struct ieee80211vap* ni_wdsvap; } ;



__attribute__((used)) static void
FUNC_0(struct ieee80211vap *VAR_0)
{
 if (VAR_0->iv_bss != ((void*)0)) {

  if (VAR_0->iv_bss->ni_wdsvap == VAR_0)
   VAR_0->iv_bss->ni_wdsvap = ((void*)0);
 }
}
