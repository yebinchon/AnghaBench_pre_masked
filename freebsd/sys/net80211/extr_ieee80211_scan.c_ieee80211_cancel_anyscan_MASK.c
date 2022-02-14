
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {TYPE_1__* ic_scan_methods; } ;
struct TYPE_2__ {int (* sc_cancel_anyscan ) (struct ieee80211vap*) ;} ;


 int FUNC_0 (struct ieee80211vap*) ;

void
FUNC_1(struct ieee80211vap *VAR_0)
{
 struct ieee80211com *VAR_1 = VAR_0->iv_ic;

 VAR_1->ic_scan_methods->sc_cancel_anyscan(VAR_0);
}
