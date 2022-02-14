
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2860_softc {int sc_flags; } ;
struct ieee80211com {scalar_t__ ic_nrunning; struct rt2860_softc* ic_softc; } ;


 int FUNC_0 (struct rt2860_softc*) ;
 int FUNC_1 (struct rt2860_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct ieee80211com*) ;
 int FUNC_3 (struct rt2860_softc*) ;
 int FUNC_4 (struct rt2860_softc*) ;
 int FUNC_5 (struct ieee80211com*) ;

__attribute__((used)) static void
FUNC_6(struct ieee80211com *VAR_1)
{
 struct rt2860_softc *VAR_2 = VAR_1->ic_softc;
 int VAR_3 = 0;

 FUNC_0(VAR_2);
 if (VAR_1->ic_nrunning> 0) {
  if (!(VAR_2->sc_flags & VAR_0)) {
   FUNC_3(VAR_2);
   VAR_3 = 1;
  } else
   FUNC_5(VAR_1);
 } else if (VAR_2->sc_flags & VAR_0)
  FUNC_4(VAR_2);
 FUNC_1(VAR_2);
 if (VAR_3)
  FUNC_2(VAR_1);
}
