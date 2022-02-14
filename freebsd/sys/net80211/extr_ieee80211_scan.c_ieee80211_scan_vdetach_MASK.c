
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {TYPE_2__* ic_scan_methods; struct ieee80211_scan_state* ic_scan; } ;
struct ieee80211_scan_state {struct ieee80211vap* ss_vap; TYPE_1__* ss_ops; } ;
struct TYPE_4__ {int (* sc_vdetach ) (struct ieee80211vap*) ;} ;
struct TYPE_3__ {int (* scan_detach ) (struct ieee80211_scan_state*) ;} ;


 int FUNC_0 (struct ieee80211com*) ;
 int FUNC_1 (struct ieee80211com*) ;
 int FUNC_2 (struct ieee80211vap*) ;
 int FUNC_3 (struct ieee80211_scan_state*) ;

void
FUNC_4(struct ieee80211vap *VAR_0)
{
 struct ieee80211com *VAR_1 = VAR_0->iv_ic;
 struct ieee80211_scan_state *VAR_2;

 FUNC_0(VAR_1);
 VAR_2 = VAR_1->ic_scan;

 VAR_1->ic_scan_methods->sc_vdetach(VAR_0);

 if (VAR_2 != ((void*)0) && VAR_2->ss_vap == VAR_0) {
  if (VAR_2->ss_ops != ((void*)0)) {
   VAR_2->ss_ops->scan_detach(VAR_2);
   VAR_2->ss_ops = ((void*)0);
  }
  VAR_2->ss_vap = ((void*)0);
 }
 FUNC_1(VAR_1);
}
