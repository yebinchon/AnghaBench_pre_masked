
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2560_softc {int dummy; } ;
struct ieee80211vap {TYPE_2__* iv_bss; } ;
struct ieee80211com {TYPE_1__* ic_scan; struct rt2560_softc* ic_softc; } ;
struct TYPE_4__ {int ni_bssid; } ;
struct TYPE_3__ {struct ieee80211vap* ss_vap; } ;


 int FUNC_0 (struct rt2560_softc*) ;
 int FUNC_1 (struct rt2560_softc*,int ) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211com *VAR_0)
{
 struct rt2560_softc *VAR_1 = VAR_0->ic_softc;
 struct ieee80211vap *VAR_2 = VAR_0->ic_scan->ss_vap;

 FUNC_0(VAR_1);

 FUNC_1(VAR_1, VAR_2->iv_bss->ni_bssid);
}
