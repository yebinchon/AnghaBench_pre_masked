
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {TYPE_2__* ic_scan_methods; int ic_flags_ext; TYPE_1__* ic_curchan; } ;
struct TYPE_4__ {int (* sc_scan_probe_curchan ) (struct ieee80211vap*,int) ;} ;
struct TYPE_3__ {int ic_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211vap*,int) ;

void
FUNC_1(struct ieee80211vap *VAR_2, int VAR_3)
{
 struct ieee80211com *VAR_4 = VAR_2->iv_ic;

 if ((VAR_4->ic_curchan->ic_flags & VAR_0) && !VAR_3) {
  VAR_4->ic_flags_ext |= VAR_1;
  return;
 }

 VAR_4->ic_scan_methods->sc_scan_probe_curchan(VAR_2, VAR_3);
}
