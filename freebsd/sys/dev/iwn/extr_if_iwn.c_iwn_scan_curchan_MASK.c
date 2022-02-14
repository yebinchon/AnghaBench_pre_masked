
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwn_softc {int dummy; } ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_curchan; struct iwn_softc* ic_softc; } ;
struct ieee80211_scan_state {struct ieee80211vap* ss_vap; } ;


 int FUNC_0 (struct iwn_softc*) ;
 int FUNC_1 (struct iwn_softc*) ;
 int FUNC_2 (struct ieee80211vap*) ;
 int FUNC_3 (struct iwn_softc*,struct ieee80211vap*,struct ieee80211_scan_state*,int ) ;

__attribute__((used)) static void
FUNC_4(struct ieee80211_scan_state *VAR_0, unsigned long VAR_1)
{
 struct ieee80211vap *VAR_2 = VAR_0->ss_vap;
 struct ieee80211com *VAR_3 = VAR_2->iv_ic;
 struct iwn_softc *VAR_4 = VAR_3->ic_softc;
 int VAR_5;

 FUNC_0(VAR_4);
 VAR_5 = FUNC_3(VAR_4, VAR_2, VAR_0, VAR_3->ic_curchan);
 FUNC_1(VAR_4);
 if (VAR_5 != 0)
  FUNC_2(VAR_2);
}
