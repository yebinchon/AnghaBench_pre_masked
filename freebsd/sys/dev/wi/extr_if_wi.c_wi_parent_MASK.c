
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wi_softc {int sc_flags; scalar_t__ wi_gone; } ;
struct ieee80211com {scalar_t__ ic_nrunning; scalar_t__ ic_opmode; scalar_t__ ic_promisc; struct wi_softc* ic_softc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wi_softc*) ;
 int VAR_3 ;
 int FUNC_1 (struct wi_softc*) ;
 int FUNC_2 (struct ieee80211com*) ;
 int FUNC_3 (struct wi_softc*) ;
 int FUNC_4 (struct wi_softc*,int) ;
 int FUNC_5 (struct wi_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct ieee80211com *VAR_4)
{
 struct wi_softc *VAR_5 = VAR_4->ic_softc;
 int VAR_6 = 0;

 FUNC_0(VAR_5);





 if (VAR_4->ic_nrunning > 0) {
  if (VAR_4->ic_opmode != VAR_0 &&
      VAR_5->sc_flags & VAR_2) {
   if (VAR_4->ic_promisc > 0 &&
       (VAR_5->sc_flags & VAR_1) == 0) {
    FUNC_5(VAR_5, VAR_3, 1);
    VAR_5->sc_flags |= VAR_1;
   } else if (VAR_4->ic_promisc == 0 &&
       (VAR_5->sc_flags & VAR_1) != 0) {
    FUNC_5(VAR_5, VAR_3, 0);
    VAR_5->sc_flags &= ~VAR_1;
   } else {
    FUNC_3(VAR_5);
    VAR_6 = 1;
   }
  } else {
   FUNC_3(VAR_5);
   VAR_6 = 1;
  }
 } else if (VAR_5->sc_flags & VAR_2) {
  FUNC_4(VAR_5, 1);
  VAR_5->wi_gone = 0;
 }
 FUNC_1(VAR_5);
 if (VAR_6)
  FUNC_2(VAR_4);
}
