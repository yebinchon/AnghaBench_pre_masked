
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uath_softc {int sc_flags; } ;
struct ieee80211com {struct uath_softc* ic_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uath_softc*) ;
 int FUNC_1 (struct uath_softc*) ;
 int FUNC_2 (struct uath_softc*) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211com *VAR_2)
{
 struct uath_softc *VAR_3 = VAR_2->ic_softc;

 FUNC_0(VAR_3);
 if ((VAR_3->sc_flags & VAR_1) ||
     (VAR_3->sc_flags & VAR_0) == 0) {
  FUNC_1(VAR_3);
  return;
 }




 if (VAR_3->sc_flags & VAR_0)
  (void)FUNC_2(VAR_3);
 FUNC_1(VAR_3);
}
