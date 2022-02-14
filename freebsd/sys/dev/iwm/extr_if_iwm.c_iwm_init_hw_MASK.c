
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211com {int * ic_channels; } ;
struct iwm_softc {int sc_dev; TYPE_1__* cfg; int * sc_phyctxt; int sc_phy_db; int sc_ps_disabled; int sf_state; struct ieee80211com sc_ic; } ;
struct TYPE_2__ {scalar_t__ device_family; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct iwm_softc*,int ,int,int ) ;
 scalar_t__ FUNC_2 (struct iwm_softc*,int ) ;
 int * VAR_8 ;
 int FUNC_3 (struct iwm_softc*) ;
 scalar_t__ FUNC_4 (struct iwm_softc*) ;
 int FUNC_5 (struct iwm_softc*) ;
 int FUNC_6 (struct iwm_softc*) ;
 int FUNC_7 (struct iwm_softc*) ;
 int FUNC_8 (struct iwm_softc*,int ) ;
 int FUNC_9 (struct iwm_softc*,int *,int *,int,int) ;
 int FUNC_10 (struct iwm_softc*) ;
 int FUNC_11 (struct iwm_softc*,int *,int ) ;
 int FUNC_12 (struct iwm_softc*,int ) ;
 int FUNC_13 (struct iwm_softc*,int ) ;
 int FUNC_14 (struct iwm_softc*) ;
 int FUNC_15 (struct iwm_softc*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct iwm_softc*,int ) ;
 int FUNC_18 (struct iwm_softc*,char*) ;
 int FUNC_19 (struct iwm_softc*) ;
 int FUNC_20 (struct iwm_softc*) ;
 int FUNC_21 (char*,int) ;

__attribute__((used)) static int
FUNC_22(struct iwm_softc *VAR_9)
{
 struct ieee80211com *VAR_10 = &VAR_9->sc_ic;
 int VAR_11, VAR_12, VAR_13;

 VAR_9->sf_state = VAR_3;

 if ((VAR_11 = FUNC_19(VAR_9)) != 0) {
  FUNC_21("iwm_start_hw: failed %d\n", VAR_11);
  return VAR_11;
 }

 if ((VAR_11 = FUNC_13(VAR_9, 0)) != 0) {
  FUNC_21("iwm_run_init_mvm_ucode: failed %d\n", VAR_11);
  return VAR_11;
 }





 FUNC_20(VAR_9);
 VAR_9->sc_ps_disabled = VAR_0;
 if ((VAR_11 = FUNC_19(VAR_9)) != 0) {
  FUNC_0(VAR_9->sc_dev, "could not initialize hardware\n");
  return VAR_11;
 }


 VAR_11 = FUNC_8(VAR_9, VAR_5);
 if (VAR_11) {
  FUNC_0(VAR_9->sc_dev, "could not load firmware\n");
  goto error;
 }

 VAR_11 = FUNC_11(VAR_9, ((void*)0), VAR_0);
 if (VAR_11)
  FUNC_0(VAR_9->sc_dev, "Failed to initialize Smart Fifo\n");

 if ((VAR_11 = FUNC_14(VAR_9)) != 0) {
  FUNC_0(VAR_9->sc_dev, "bt init conf failed\n");
  goto error;
 }

 VAR_11 = FUNC_17(VAR_9, FUNC_7(VAR_9));
 if (VAR_11 != 0) {
  FUNC_0(VAR_9->sc_dev, "antenna config failed\n");
  goto error;
 }


 if ((VAR_11 = FUNC_16(VAR_9->sc_phy_db)) != 0)
  goto error;

 if ((VAR_11 = FUNC_15(VAR_9)) != 0) {
  FUNC_0(VAR_9->sc_dev, "phy_cfg_cmd failed\n");
  goto error;
 }


 if ((VAR_11 = FUNC_3(VAR_9)) != 0) {
  FUNC_0(VAR_9->sc_dev, "add_aux_sta failed\n");
  goto error;
 }

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {





  if ((VAR_11 = FUNC_9(VAR_9,
      &VAR_9->sc_phyctxt[VAR_12], &VAR_10->ic_channels[1], 1, 1)) != 0)
   goto error;
 }


 if (VAR_9->cfg->device_family == VAR_1)
  FUNC_12(VAR_9, 0);

 if (FUNC_4(VAR_9) != 0)
  FUNC_0(VAR_9->sc_dev, "PCIe LTR configuration failed\n");

 VAR_11 = FUNC_10(VAR_9);
 if (VAR_11)
  goto error;

 if ((VAR_11 = FUNC_18(VAR_9, "ZZ")) != 0)
  goto error;

 if (FUNC_2(VAR_9, VAR_6)) {
  if ((VAR_11 = FUNC_5(VAR_9)) != 0)
   goto error;
 }


 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  VAR_11 = FUNC_1(VAR_9, VAR_4, VAR_13,
      VAR_8[VAR_13]);
  if (VAR_11)
   goto error;
 }

 if ((VAR_11 = FUNC_6(VAR_9)) != 0) {
  FUNC_0(VAR_9->sc_dev, "failed to disable beacon filter\n");
  goto error;
 }

 return 0;

 error:
 FUNC_20(VAR_9);
 return VAR_11;
}
