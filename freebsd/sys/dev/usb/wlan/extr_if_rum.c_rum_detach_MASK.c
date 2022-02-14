
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {struct rum_softc* ic_softc; } ;
struct rum_softc {int sc_detached; int sc_snd; int cmdq_task; int sc_xfer; struct ieee80211com sc_ic; } ;
typedef int device_t ;


 int FUNC_0 (struct rum_softc*) ;
 int FUNC_1 (struct rum_softc*) ;
 int FUNC_2 (struct rum_softc*) ;
 int VAR_0 ;
 int FUNC_3 (struct rum_softc*) ;
 struct rum_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211com*,int *) ;
 int FUNC_6 (struct ieee80211com*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct rum_softc*) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_1)
{
 struct rum_softc *VAR_2 = FUNC_4(VAR_1);
 struct ieee80211com *VAR_3 = &VAR_2->sc_ic;


 FUNC_1(VAR_2);
 VAR_2->sc_detached = 1;
 FUNC_3(VAR_2);


 FUNC_9(VAR_2->sc_xfer, VAR_0);


 FUNC_1(VAR_2);
 FUNC_8(VAR_2);
 FUNC_3(VAR_2);

 if (VAR_3->ic_softc == VAR_2) {
  FUNC_5(VAR_3, &VAR_2->cmdq_task);
  FUNC_6(VAR_3);
 }

 FUNC_7(&VAR_2->sc_snd);
 FUNC_0(VAR_2);
 FUNC_2(VAR_2);

 return (0);
}
