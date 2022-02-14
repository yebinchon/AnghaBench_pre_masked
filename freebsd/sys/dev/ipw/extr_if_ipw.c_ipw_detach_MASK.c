
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct ipw_softc {int sc_mtx; int * sc_firmware; int mem; int irq; int sc_snd; int sc_wdtimer; int sc_init_task; int sc_ih; struct ieee80211com sc_ic; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 struct ipw_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct ieee80211com*,int *) ;
 int FUNC_6 (struct ieee80211com*) ;
 int FUNC_7 (struct ipw_softc*) ;
 int FUNC_8 (struct ipw_softc*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_3)
{
 struct ipw_softc *VAR_4 = FUNC_3(VAR_3);
 struct ieee80211com *VAR_5 = &VAR_4->sc_ic;

 FUNC_1(VAR_3, VAR_4->irq, VAR_4->sc_ih);

 FUNC_5(VAR_5, &VAR_4->sc_init_task);
 FUNC_8(VAR_4);

 FUNC_6(VAR_5);

 FUNC_2(&VAR_4->sc_wdtimer);
 FUNC_9(&VAR_4->sc_snd);

 FUNC_7(VAR_4);

 FUNC_0(VAR_3, VAR_1, FUNC_11(VAR_4->irq), VAR_4->irq);

 FUNC_0(VAR_3, VAR_2, FUNC_11(VAR_4->mem),
     VAR_4->mem);

 if (VAR_4->sc_firmware != ((void*)0)) {
  FUNC_4(VAR_4->sc_firmware, VAR_0);
  VAR_4->sc_firmware = ((void*)0);
 }

 FUNC_10(&VAR_4->sc_mtx);

 return 0;
}
