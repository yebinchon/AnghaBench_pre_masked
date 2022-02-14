
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {scalar_t__ ic_promisc; struct bwn_softc* ic_softc; } ;
struct bwn_softc {int sc_filters; struct bwn_mac* sc_curmac; } ;
struct bwn_mac {scalar_t__ mac_status; } ;


 int FUNC_0 (struct bwn_softc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct bwn_softc*) ;
 int FUNC_2 (struct bwn_mac*) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211com *VAR_2)
{
 struct bwn_softc *VAR_3 = VAR_2->ic_softc;
 struct bwn_mac *VAR_4 = VAR_3->sc_curmac;

 FUNC_0(VAR_3);
 VAR_4 = VAR_3->sc_curmac;
 if (VAR_4 != ((void*)0) && VAR_4->mac_status >= VAR_1) {
  if (VAR_2->ic_promisc > 0)
   VAR_3->sc_filters |= VAR_0;
  else
   VAR_3->sc_filters &= ~VAR_0;
  FUNC_2(VAR_4);
 }
 FUNC_1(VAR_3);
}
