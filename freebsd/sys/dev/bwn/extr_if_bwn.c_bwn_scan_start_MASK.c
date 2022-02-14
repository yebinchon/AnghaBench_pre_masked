
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {struct bwn_softc* ic_softc; } ;
struct bwn_softc {int sc_filters; struct bwn_mac* sc_curmac; } ;
struct bwn_mac {scalar_t__ mac_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_softc*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct bwn_softc*) ;
 int FUNC_2 (struct bwn_mac*) ;
 int FUNC_3 (struct bwn_mac*,int) ;
 int FUNC_4 (struct bwn_mac*) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211com *VAR_3)
{
 struct bwn_softc *VAR_4 = VAR_3->ic_softc;
 struct bwn_mac *VAR_5;

 FUNC_0(VAR_4);
 VAR_5 = VAR_4->sc_curmac;
 if (VAR_5 != ((void*)0) && VAR_5->mac_status >= VAR_2) {
  VAR_4->sc_filters |= VAR_1;
  FUNC_4(VAR_5);

  FUNC_3(VAR_5, FUNC_2(VAR_5) | VAR_0);
 }
 FUNC_1(VAR_4);
}
