
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct wi_softc {int wi_gone; int sc_mtx; int sc_snd; int wi_intrhand; int irq; struct ieee80211com sc_ic; } ;
typedef int device_t ;


 int FUNC_0 (struct wi_softc*) ;
 int FUNC_1 (struct wi_softc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 struct wi_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211com*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct wi_softc*,int ) ;

int
FUNC_10(device_t VAR_0)
{
 struct wi_softc *VAR_1 = FUNC_4(VAR_0);
 struct ieee80211com *VAR_2 = &VAR_1->sc_ic;

 FUNC_0(VAR_1);


 VAR_1->wi_gone |= !FUNC_2(VAR_0);

 FUNC_9(VAR_1, 0);
 FUNC_1(VAR_1);
 FUNC_5(VAR_2);

 FUNC_3(VAR_0, VAR_1->irq, VAR_1->wi_intrhand);
 FUNC_8(VAR_0);
 FUNC_6(&VAR_1->sc_snd);
 FUNC_7(&VAR_1->sc_mtx);
 return (0);
}
