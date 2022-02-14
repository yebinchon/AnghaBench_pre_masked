
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {struct bwn_softc* ic_softc; } ;
struct bwn_softc {int sc_flags; scalar_t__ sc_curmac; } ;
struct bwn_mac {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_softc*) ;
 int FUNC_1 (struct bwn_softc*) ;
 int FUNC_2 (struct ieee80211com*) ;
 int FUNC_3 (struct bwn_mac*,int ) ;

__attribute__((used)) static void
FUNC_4(struct ieee80211com *VAR_1)
{
 struct bwn_softc *VAR_2 = VAR_1->ic_softc;
 struct bwn_mac *VAR_3;

 FUNC_0(VAR_2);
 if (VAR_2->sc_flags & VAR_0) {
  VAR_3 = (struct bwn_mac *)VAR_2->sc_curmac;
  FUNC_3(VAR_3, FUNC_2(VAR_1));
 }
 FUNC_1(VAR_2);
}
