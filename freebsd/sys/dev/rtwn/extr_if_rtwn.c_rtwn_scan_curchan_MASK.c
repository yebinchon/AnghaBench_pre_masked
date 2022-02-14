
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtwn_softc {int (* sc_scan_curchan ) (struct ieee80211_scan_state*,unsigned long) ;int ledlink; } ;
struct ieee80211_scan_state {TYPE_1__* ss_ic; } ;
struct TYPE_2__ {struct rtwn_softc* ic_softc; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (struct rtwn_softc*) ;
 int FUNC_2 (struct rtwn_softc*,int ,int) ;
 int FUNC_3 (struct ieee80211_scan_state*,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct ieee80211_scan_state *VAR_1, unsigned long VAR_2)
{
 struct rtwn_softc *VAR_3 = VAR_1->ss_ic->ic_softc;


 FUNC_0(VAR_3);
 FUNC_2(VAR_3, VAR_0, !VAR_3->ledlink);
 FUNC_1(VAR_3);

 VAR_3->sc_scan_curchan(VAR_1, VAR_2);
}
