
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urtw_softc {int sc_flags; } ;
struct ieee80211com {scalar_t__ ic_nrunning; scalar_t__ ic_promisc; scalar_t__ ic_allmulti; struct urtw_softc* ic_softc; } ;


 int VAR_0 ;
 int FUNC_0 (struct urtw_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct urtw_softc*) ;
 int FUNC_2 (struct ieee80211com*) ;
 int FUNC_3 (struct urtw_softc*) ;
 int FUNC_4 (struct urtw_softc*) ;
 int FUNC_5 (struct urtw_softc*) ;

__attribute__((used)) static void
FUNC_6(struct ieee80211com *VAR_2)
{
 struct urtw_softc *VAR_3 = VAR_2->ic_softc;
 int VAR_4 = 0;

 FUNC_0(VAR_3);
 if (VAR_3->sc_flags & VAR_0) {
  FUNC_1(VAR_3);
  return;
 }

 if (VAR_2->ic_nrunning > 0) {
  if (VAR_3->sc_flags & VAR_1) {
   if (VAR_2->ic_promisc > 0 || VAR_2->ic_allmulti > 0)
    FUNC_4(VAR_3);
  } else {
   FUNC_3(VAR_3);
   VAR_4 = 1;
  }
 } else if (VAR_3->sc_flags & VAR_1)
  FUNC_5(VAR_3);
 FUNC_1(VAR_3);
 if (VAR_4)
  FUNC_2(VAR_2);
}
