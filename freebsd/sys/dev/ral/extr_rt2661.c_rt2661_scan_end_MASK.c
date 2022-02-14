
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2661_softc {int dummy; } ;
struct ieee80211vap {TYPE_1__* iv_bss; } ;
struct ieee80211com {int ic_vaps; struct rt2661_softc* ic_softc; } ;
struct TYPE_2__ {int ni_bssid; } ;


 struct ieee80211vap* FUNC_0 (int *) ;
 int FUNC_1 (struct rt2661_softc*) ;
 int FUNC_2 (struct rt2661_softc*,int ) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211com *VAR_0)
{
 struct rt2661_softc *VAR_1 = VAR_0->ic_softc;
 struct ieee80211vap *VAR_2 = FUNC_0(&VAR_0->ic_vaps);

 FUNC_1(VAR_1);

 FUNC_2(VAR_1, VAR_2->iv_bss->ni_bssid);
}
