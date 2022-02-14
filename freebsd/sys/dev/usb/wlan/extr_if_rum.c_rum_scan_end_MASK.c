
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rum_softc {int sc_bssid; } ;
struct ieee80211com {int ic_flags_ext; scalar_t__ ic_opmode; struct rum_softc* ic_softc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rum_softc*) ;
 int FUNC_1 (struct rum_softc*) ;
 int FUNC_2 (struct rum_softc*) ;
 int FUNC_3 (struct rum_softc*) ;
 int FUNC_4 (struct rum_softc*,int ) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211com *VAR_2)
{
 struct rum_softc *VAR_3 = VAR_2->ic_softc;

 if (VAR_2->ic_flags_ext & VAR_0) {
  FUNC_0(VAR_3);
  if (VAR_2->ic_opmode != VAR_1)
   FUNC_3(VAR_3);
  else
   FUNC_2(VAR_3);
  FUNC_4(VAR_3, VAR_3->sc_bssid);
  FUNC_1(VAR_3);
 }
}
