
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct ieee80211com {scalar_t__ ic_opmode; scalar_t__ ic_promisc; int ic_macaddr; int ic_curchan; int ic_vaps; } ;
struct ural_softc {int sc_running; int * sc_xfer; int rx_ant; int tx_ant; int sta; int sc_dev; struct ieee80211com sc_ic; } ;
struct ieee80211vap {int iv_myaddr; } ;
struct TYPE_3__ {int reg; int val; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ural_softc*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct ieee80211vap* FUNC_1 (int *) ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int FUNC_2 (int ,char*) ;
 int VAR_19 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct ural_softc*) ;
 TYPE_1__* VAR_20 ;
 scalar_t__ FUNC_5 (struct ural_softc*,int) ;
 int FUNC_6 (struct ural_softc*,int ) ;
 int FUNC_7 (struct ural_softc*,int ,int ,int) ;
 int FUNC_8 (struct ural_softc*,int ) ;
 int FUNC_9 (struct ural_softc*,int ) ;
 int FUNC_10 (struct ural_softc*,int ) ;
 int FUNC_11 (struct ural_softc*) ;
 int FUNC_12 (struct ural_softc*,int ) ;
 int FUNC_13 (struct ural_softc*) ;
 int FUNC_14 (struct ural_softc*) ;
 int FUNC_15 (struct ural_softc*,int,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void
FUNC_18(struct ural_softc *VAR_21)
{
 struct ieee80211com *VAR_22 = &VAR_21->sc_ic;
 struct ieee80211vap *VAR_23 = FUNC_1(&VAR_22->ic_vaps);
 uint16_t VAR_24;
 int VAR_25, VAR_26;

 FUNC_0(VAR_21, VAR_2);

 FUNC_11(VAR_21);
 FUNC_15(VAR_21, 0x308, 0x00f0);

 FUNC_14(VAR_21);


 for (VAR_25 = 0; VAR_25 < FUNC_3(VAR_20); VAR_25++)
  FUNC_15(VAR_21, VAR_20[VAR_25].reg, VAR_20[VAR_25].val);


 for (VAR_26 = 0; VAR_26 < 100; VAR_26++) {
  VAR_24 = FUNC_6(VAR_21, VAR_12);
  if ((VAR_24 & (VAR_3 | VAR_13)) ==
      (VAR_3 | VAR_13))
   break;
  if (FUNC_5(VAR_21, VAR_19 / 100))
   break;
 }
 if (VAR_26 == 100) {
  FUNC_2(VAR_21->sc_dev,
      "timeout waiting for BBP/RF to wakeup\n");
  goto fail;
 }


 FUNC_15(VAR_21, VAR_11, VAR_10);


 FUNC_15(VAR_21, VAR_15, 0x15f);

 if (FUNC_4(VAR_21) != 0)
  goto fail;

 FUNC_8(VAR_21, VAR_22->ic_curchan);


 FUNC_7(VAR_21, VAR_14, VAR_21->sta, sizeof VAR_21->sta);

 FUNC_12(VAR_21, VAR_21->tx_ant);
 FUNC_10(VAR_21, VAR_21->rx_ant);

 FUNC_9(VAR_21, VAR_23 ? VAR_23->iv_myaddr : VAR_22->ic_macaddr);




 FUNC_13(VAR_21);


 VAR_24 = VAR_8 | VAR_5;
 if (VAR_22->ic_opmode != VAR_1) {
  VAR_24 |= VAR_6 | VAR_4;
  if (VAR_22->ic_opmode != VAR_0)
   VAR_24 |= VAR_9;
  if (VAR_22->ic_promisc == 0)
   VAR_24 |= VAR_7;
 }
 FUNC_15(VAR_21, VAR_16, VAR_24);

 VAR_21->sc_running = 1;
 FUNC_17(VAR_21->sc_xfer[VAR_18]);
 FUNC_16(VAR_21->sc_xfer[VAR_17]);
 return;

fail: FUNC_14(VAR_21);
}
