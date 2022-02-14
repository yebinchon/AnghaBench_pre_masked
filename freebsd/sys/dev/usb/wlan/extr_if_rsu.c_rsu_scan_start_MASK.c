
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsu_softc {int sc_active_scan; int sc_dev; } ;
struct ieee80211vap {int dummy; } ;
struct ieee80211com {int ic_vaps; struct ieee80211_scan_state* ic_scan; struct rsu_softc* ic_softc; } ;
struct ieee80211_scan_state {int ss_flags; scalar_t__ ss_nssid; int * ss_ssid; } ;


 int VAR_0 ;
 int FUNC_0 (struct rsu_softc*) ;
 int FUNC_1 (struct rsu_softc*) ;
 struct ieee80211vap* FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ieee80211vap*) ;
 int FUNC_5 (struct rsu_softc*,int *) ;

__attribute__((used)) static void
FUNC_6(struct ieee80211com *VAR_1)
{
 struct rsu_softc *VAR_2 = VAR_1->ic_softc;
 struct ieee80211_scan_state *VAR_3 = VAR_1->ic_scan;
 struct ieee80211vap *VAR_4 = FUNC_2(&VAR_1->ic_vaps);
 int VAR_5;


 FUNC_0(VAR_2);
 VAR_2->sc_active_scan = !!(VAR_3->ss_flags & VAR_0);

 VAR_5 = FUNC_5(VAR_2, VAR_3->ss_nssid > 0 ? &VAR_3->ss_ssid[0] : ((void*)0));
 FUNC_1(VAR_2);
 if (VAR_5 != 0) {
  FUNC_3(VAR_2->sc_dev,
      "could not send site survey command\n");
  FUNC_4(VAR_4);
 }
}
