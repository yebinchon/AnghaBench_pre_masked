
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uath_softc {int sc_flags; } ;
struct ieee80211com {struct uath_softc* ic_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct uath_softc*) ;
 int FUNC_1 (struct uath_softc*) ;
 int FUNC_2 (struct uath_softc*,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211com *VAR_8)
{
 struct uath_softc *VAR_9 = VAR_8->ic_softc;

 FUNC_0(VAR_9);
 if ((VAR_9->sc_flags & VAR_7) ||
     (VAR_9->sc_flags & VAR_6) == 0) {
  FUNC_1(VAR_9);
  return;
 }
 if (VAR_9->sc_flags & VAR_6) {
  FUNC_2(VAR_9,
      VAR_5 | VAR_3 |
      VAR_1 | VAR_2 |
      VAR_4, VAR_0);
 }
 FUNC_1(VAR_9);
}
