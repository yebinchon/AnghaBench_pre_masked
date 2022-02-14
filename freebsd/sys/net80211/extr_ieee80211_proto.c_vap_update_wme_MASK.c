
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211vap {int (* iv_wme_update ) (struct ieee80211vap*,int ) ;struct ieee80211com* iv_ic; } ;
struct TYPE_3__ {int cap_wmeParams; } ;
struct TYPE_4__ {int (* wme_update ) (struct ieee80211com*) ;TYPE_1__ wme_chanParams; } ;
struct ieee80211com {TYPE_2__ ic_wme; } ;


 int FUNC_0 (struct ieee80211vap*,int ) ;
 int FUNC_1 (struct ieee80211com*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, int VAR_1)
{
 struct ieee80211vap *VAR_2 = VAR_0;
 struct ieee80211com *VAR_3 = VAR_2->iv_ic;

 if (VAR_2->iv_wme_update != ((void*)0))
  VAR_2->iv_wme_update(VAR_2,
      VAR_3->ic_wme.wme_chanParams.cap_wmeParams);
 else
  VAR_3->ic_wme.wme_update(VAR_3);
}
