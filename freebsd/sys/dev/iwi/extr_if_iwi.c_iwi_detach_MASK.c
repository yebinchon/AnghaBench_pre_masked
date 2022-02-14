
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct iwi_softc {int sc_snd; int sc_unr; int mem; int irq; int rxq; int * txq; int cmdq; int sc_monitortask; int sc_disassoctask; int sc_restarttask; int sc_radiofftask; int sc_radiontask; int sc_ih; struct ieee80211com sc_ic; } ;
typedef int device_t ;


 int FUNC_0 (struct iwi_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 struct iwi_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211com*,int *) ;
 int FUNC_6 (struct ieee80211com*) ;
 int FUNC_7 (struct iwi_softc*,int *) ;
 int FUNC_8 (struct iwi_softc*,int *) ;
 int FUNC_9 (struct iwi_softc*,int *) ;
 int FUNC_10 (struct iwi_softc*) ;
 int FUNC_11 (struct iwi_softc*) ;
 int FUNC_12 (struct iwi_softc*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_2)
{
 struct iwi_softc *VAR_3 = FUNC_4(VAR_2);
 struct ieee80211com *VAR_4 = &VAR_3->sc_ic;

 FUNC_2(VAR_2, VAR_3->irq, VAR_3->sc_ih);


 FUNC_5(VAR_4, &VAR_3->sc_radiontask);
 FUNC_5(VAR_4, &VAR_3->sc_radiofftask);
 FUNC_5(VAR_4, &VAR_3->sc_restarttask);
 FUNC_5(VAR_4, &VAR_3->sc_disassoctask);
 FUNC_5(VAR_4, &VAR_3->sc_monitortask);

 FUNC_12(VAR_3);

 FUNC_6(VAR_4);

 FUNC_10(VAR_3);
 FUNC_11(VAR_3);

 FUNC_7(VAR_3, &VAR_3->cmdq);
 FUNC_9(VAR_3, &VAR_3->txq[0]);
 FUNC_9(VAR_3, &VAR_3->txq[1]);
 FUNC_9(VAR_3, &VAR_3->txq[2]);
 FUNC_9(VAR_3, &VAR_3->txq[3]);
 FUNC_8(VAR_3, &VAR_3->rxq);

 FUNC_1(VAR_2, VAR_0, FUNC_14(VAR_3->irq), VAR_3->irq);

 FUNC_1(VAR_2, VAR_1, FUNC_14(VAR_3->mem),
     VAR_3->mem);

 FUNC_3(VAR_3->sc_unr);
 FUNC_13(&VAR_3->sc_snd);

 FUNC_0(VAR_3);

 return 0;
}
