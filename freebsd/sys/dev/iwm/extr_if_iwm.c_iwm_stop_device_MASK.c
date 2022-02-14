
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct iwm_vap {scalar_t__ is_uploaded; int * phy_ctxt; } ;
struct ieee80211com {int ic_vaps; } ;
struct iwm_softc {TYPE_1__* cfg; int * txq; int rxq; int sc_dev; int sc_flags; scalar_t__ sc_firmware_state; struct ieee80211com sc_ic; } ;
struct ieee80211vap {int dummy; } ;
struct TYPE_2__ {scalar_t__ device_family; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iwm_softc*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct iwm_softc*,int ) ;
 int VAR_11 ;
 int FUNC_5 (struct iwm_softc*,int ,int ) ;
 struct iwm_vap* FUNC_6 (struct ieee80211vap*) ;
 int FUNC_7 (struct iwm_softc*,int ,int ) ;
 struct ieee80211vap* FUNC_8 (int *) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (struct iwm_softc*) ;
 int FUNC_11 (struct iwm_softc*) ;
 int FUNC_12 (struct iwm_softc*) ;
 int FUNC_13 (struct iwm_softc*) ;
 scalar_t__ FUNC_14 (struct iwm_softc*) ;
 int FUNC_15 (struct iwm_softc*) ;
 int FUNC_16 (struct iwm_softc*) ;
 int FUNC_17 (struct iwm_softc*,int ,int ,int ,int) ;
 int FUNC_18 (struct iwm_softc*) ;
 int FUNC_19 (struct iwm_softc*,int *) ;
 int FUNC_20 (struct iwm_softc*,int *) ;
 int FUNC_21 (struct iwm_softc*,int ,int ) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static void
FUNC_23(struct iwm_softc *VAR_12)
{
 struct ieee80211com *VAR_13 = &VAR_12->sc_ic;
 struct ieee80211vap *VAR_14 = FUNC_8(&VAR_13->ic_vaps);
 int VAR_15, VAR_16;
 uint32_t VAR_17 = 0;


 FUNC_12(VAR_12);






 if (VAR_14) {
  struct iwm_vap *VAR_18 = FUNC_6(VAR_14);
  VAR_18->phy_ctxt = ((void*)0);
  VAR_18->is_uploaded = 0;
 }
 VAR_12->sc_firmware_state = 0;
 VAR_12->sc_flags &= ~VAR_9;


 VAR_12->sc_flags &= ~VAR_10;



 if (FUNC_14(VAR_12)) {
  FUNC_21(VAR_12, VAR_11, 0);


  for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
   FUNC_7(VAR_12,
       FUNC_2(VAR_15), 0);
   VAR_17 |= FUNC_3(VAR_15);
  }


  if (!FUNC_17(VAR_12, VAR_8, VAR_17, VAR_17,
      5000)) {
   FUNC_9(VAR_12->sc_dev,
       "Failing on timeout while stopping DMA channel: [0x%08x]\n",
       FUNC_4(VAR_12, VAR_8));
  }
  FUNC_15(VAR_12);
 }
 FUNC_16(VAR_12);


 FUNC_19(VAR_12, &VAR_12->rxq);


 for (VAR_16 = 0; VAR_16 < FUNC_22(VAR_12->txq); VAR_16++)
  FUNC_20(VAR_12, &VAR_12->txq[VAR_16]);

 if (VAR_12->cfg->device_family == VAR_6) {

  if (FUNC_14(VAR_12)) {
   FUNC_21(VAR_12, VAR_0,
       VAR_1);
   FUNC_15(VAR_12);
  }
  FUNC_0(5);
 }


 FUNC_1(VAR_12, VAR_2,
     VAR_3);


 FUNC_10(VAR_12);


 FUNC_5(VAR_12, VAR_4, VAR_5);
 FUNC_0(5000);




 FUNC_12(VAR_12);





 FUNC_13(VAR_12);
 FUNC_11(VAR_12);

 FUNC_18(VAR_12);
}
