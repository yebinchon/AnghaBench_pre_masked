
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {struct ural_softc* ic_softc; } ;
struct ural_softc {int sc_detached; int sc_mtx; int sc_snd; int sc_xfer; struct ieee80211com sc_ic; } ;
typedef int device_t ;


 int FUNC_0 (struct ural_softc*) ;
 int FUNC_1 (struct ural_softc*) ;
 int VAR_0 ;
 struct ural_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211com*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ural_softc*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_1)
{
 struct ural_softc *VAR_2 = FUNC_2(VAR_1);
 struct ieee80211com *VAR_3 = &VAR_2->sc_ic;


 FUNC_0(VAR_2);
 VAR_2->sc_detached = 1;
 FUNC_1(VAR_2);


 FUNC_7(VAR_2->sc_xfer, VAR_0);


 FUNC_0(VAR_2);
 FUNC_6(VAR_2);
 FUNC_1(VAR_2);

 if (VAR_3->ic_softc == VAR_2)
  FUNC_3(VAR_3);
 FUNC_4(&VAR_2->sc_snd);
 FUNC_5(&VAR_2->sc_mtx);

 return (0);
}
