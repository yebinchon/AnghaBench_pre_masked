
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_scan_end; int ic_scan_start; } ;
struct rtwn_softc {struct ieee80211com sc_ic; struct r92c_softc* sc_priv; } ;
struct r92c_softc {int rs_scan_end; int rs_scan_start; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct rtwn_softc *VAR_2)
{
 struct r92c_softc *VAR_3 = VAR_2->sc_priv;
 struct ieee80211com *VAR_4 = &VAR_2->sc_ic;

 VAR_3->rs_scan_start = VAR_4->ic_scan_start;
 VAR_4->ic_scan_start = VAR_1;
 VAR_3->rs_scan_end = VAR_4->ic_scan_end;
 VAR_4->ic_scan_end = VAR_0;
}
