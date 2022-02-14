
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {struct r92c_softc* sc_priv; } ;
struct r92c_softc {int (* rs_scan_end ) (struct ieee80211com*) ;} ;
struct ieee80211com {struct rtwn_softc* ic_softc; } ;


 int FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (struct rtwn_softc*) ;
 int FUNC_2 (struct rtwn_softc*,int) ;
 int FUNC_3 (struct ieee80211com*) ;

void
FUNC_4(struct ieee80211com *VAR_0)
{
 struct rtwn_softc *VAR_1 = VAR_0->ic_softc;
 struct r92c_softc *VAR_2 = VAR_1->sc_priv;

 FUNC_0(VAR_1);

 FUNC_2(VAR_1, 0x32);
 FUNC_1(VAR_1);

 VAR_2->rs_scan_end(VAR_0);
}
