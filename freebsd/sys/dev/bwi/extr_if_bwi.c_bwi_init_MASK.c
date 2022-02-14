
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct bwi_softc {int sc_flags; struct ieee80211com sc_ic; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwi_softc*) ;
 int FUNC_1 (struct bwi_softc*) ;
 int FUNC_2 (struct bwi_softc*,int) ;
 int FUNC_3 (struct ieee80211com*) ;

__attribute__((used)) static void
FUNC_4(struct bwi_softc *VAR_1)
{
 struct ieee80211com *VAR_2 = &VAR_1->sc_ic;

 FUNC_0(VAR_1);
 FUNC_2(VAR_1, 1);
 FUNC_1(VAR_1);

 if (VAR_1->sc_flags & VAR_0)
  FUNC_3(VAR_2);
}
