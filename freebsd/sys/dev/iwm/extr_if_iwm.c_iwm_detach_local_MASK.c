
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_fw_info {int * fw_fp; } ;
struct iwm_softc {int * sc_notif_wait; int fw_dma; int kw_dma; int ict_dma; int sched_dma; int * txq; int rxq; int nvm_data; int * sc_phy_db; int sc_watchdog_to; int sc_led_blink_to; int sc_ic; int sc_es_task; scalar_t__ sc_attached; int sc_dev; struct iwm_fw_info sc_fw; } ;
typedef int device_t ;


 int FUNC_0 (struct iwm_softc*) ;
 int FUNC_1 (struct iwm_softc*) ;
 int FUNC_2 (struct iwm_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct iwm_softc*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct iwm_softc*,int *) ;
 int FUNC_10 (struct iwm_softc*,int *) ;
 int FUNC_11 (struct iwm_fw_info*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct iwm_softc*) ;
 int FUNC_16 (struct iwm_softc*) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int
FUNC_18(struct iwm_softc *VAR_0, int VAR_1)
{
 struct iwm_fw_info *VAR_2 = &VAR_0->sc_fw;
 device_t VAR_3 = VAR_0->sc_dev;
 int VAR_4;

 if (!VAR_0->sc_attached)
  return 0;
 VAR_0->sc_attached = 0;
 if (VAR_1) {
  FUNC_4(&VAR_0->sc_ic, &VAR_0->sc_es_task);
 }
 FUNC_15(VAR_0);
 if (VAR_1) {
  FUNC_0(VAR_0);
  FUNC_16(VAR_0);
  FUNC_2(VAR_0);
  FUNC_5(&VAR_0->sc_ic);
 }
 FUNC_3(&VAR_0->sc_led_blink_to);
 FUNC_3(&VAR_0->sc_watchdog_to);

 FUNC_14(VAR_0->sc_phy_db);
 VAR_0->sc_phy_db = ((void*)0);

 FUNC_8(VAR_0->nvm_data);


 FUNC_9(VAR_0, &VAR_0->rxq);
 for (VAR_4 = 0; VAR_4 < FUNC_17(VAR_0->txq); VAR_4++)
  FUNC_10(VAR_0, &VAR_0->txq[VAR_4]);


 if (VAR_2->fw_fp != ((void*)0))
  FUNC_11(VAR_2);


 FUNC_6(&VAR_0->sched_dma);
 FUNC_6(&VAR_0->ict_dma);
 FUNC_6(&VAR_0->kw_dma);
 FUNC_6(&VAR_0->fw_dma);

 FUNC_7(VAR_0);


 FUNC_13(VAR_3);

 if (VAR_0->sc_notif_wait != ((void*)0)) {
  FUNC_12(VAR_0->sc_notif_wait);
  VAR_0->sc_notif_wait = ((void*)0);
 }

 FUNC_1(VAR_0);

 return (0);
}
