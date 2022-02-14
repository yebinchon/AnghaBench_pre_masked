
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int rw_rev; scalar_t__ rw_type; } ;
struct bwi_softc {int sc_pwron_delay; int (* sc_init_tx_ring ) (struct bwi_softc*,int) ;int (* sc_init_rx_ring ) (struct bwi_softc*) ;int (* sc_init_txstats ) (struct bwi_softc*) ;int sc_dev; TYPE_1__ sc_bus_regwin; } ;
struct TYPE_4__ {int rf_ant_mode; } ;
struct bwi_mac {int mac_rev; int mac_flags; TYPE_2__ mac_rf; int mac_regwin; int mac_phy; struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (struct bwi_softc*,int ,int) ;
 int FUNC_3 (struct bwi_softc*,int,int) ;
 int FUNC_4 (struct bwi_softc*,int,int) ;
 int FUNC_5 (struct bwi_mac*,int ,int,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct bwi_softc*,struct bwi_mac*) ;
 int FUNC_8 (struct bwi_mac*) ;
 int FUNC_9 (struct bwi_mac*) ;
 int FUNC_10 (struct bwi_mac*) ;
 int FUNC_11 (struct bwi_mac*) ;
 int FUNC_12 (struct bwi_mac*) ;
 int FUNC_13 (struct bwi_mac*) ;
 int FUNC_14 (struct bwi_mac*,int) ;
 int FUNC_15 (struct bwi_mac*) ;
 int FUNC_16 (struct bwi_mac*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct bwi_mac*) ;
 int FUNC_19 (struct bwi_softc*,int *) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (struct bwi_mac*) ;
 int FUNC_22 (struct bwi_mac*,int ) ;
 int FUNC_23 (int ,char*,...) ;
 int FUNC_24 (struct bwi_softc*,int) ;
 int FUNC_25 (struct bwi_softc*) ;
 int FUNC_26 (struct bwi_softc*) ;

int
FUNC_27(struct bwi_mac *VAR_22)
{
 struct bwi_softc *VAR_23 = VAR_22->mac_sc;
 int VAR_24, VAR_25;


 FUNC_15(VAR_22);
 FUNC_20(&VAR_22->mac_rf);
 FUNC_17(&VAR_22->mac_phy);


 if (!FUNC_19(VAR_23, &VAR_22->mac_regwin))
  FUNC_14(VAR_22, 1);


 VAR_24 = FUNC_7(VAR_23, VAR_22);
 if (VAR_24)
  return VAR_24;


 if (VAR_23->sc_bus_regwin.rw_rev <= 5 &&
     VAR_23->sc_bus_regwin.rw_type != VAR_16) {
  FUNC_2(VAR_23, VAR_3,
  FUNC_6(VAR_6, VAR_7) |
  FUNC_6(VAR_4, VAR_5));
 }


 VAR_24 = FUNC_16(VAR_22);
 if (VAR_24) {
  FUNC_23(VAR_23->sc_dev, "PHY calibrate failed\n");
  return VAR_24;
 }


 FUNC_4(VAR_23, VAR_13,
      VAR_15 |
      VAR_14);




 VAR_24 = FUNC_10(VAR_22);
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_11(VAR_22);
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_9(VAR_22);
 if (VAR_24)
  return VAR_24;




 FUNC_21(VAR_22);






 FUNC_3(VAR_23, VAR_0, 0);
 FUNC_18(VAR_22);






 FUNC_22(VAR_22, VAR_22->mac_rf.rf_ant_mode);




 FUNC_13(VAR_22);


 if (VAR_22->mac_rev < 3) {
  FUNC_3(VAR_23, 0x60e, 0);
  FUNC_3(VAR_23, 0x610, 0x8000);
  FUNC_3(VAR_23, 0x604, 0);
  FUNC_3(VAR_23, 0x606, 0x200);
 } else {
  FUNC_4(VAR_23, 0x188, 0x80000000);
  FUNC_4(VAR_23, 0x18c, 0x2000000);
 }




 FUNC_4(VAR_23, VAR_11, VAR_8);
 for (VAR_25 = 0; VAR_25 < VAR_18; ++VAR_25) {
  uint32_t VAR_26;

  if (FUNC_1(VAR_25))
   VAR_26 = VAR_19;
  else
   VAR_26 = VAR_20;
  FUNC_4(VAR_23, FUNC_0(VAR_25), VAR_26);
 }


 FUNC_2(VAR_23, VAR_17, 0x100000);


 FUNC_3(VAR_23, VAR_12, VAR_23->sc_pwron_delay);


 FUNC_5(VAR_22, VAR_1, VAR_2, VAR_22->mac_rev);




 FUNC_12(VAR_22);




 FUNC_8(VAR_22);




 for (VAR_25 = 0; VAR_25 < VAR_21; ++VAR_25) {
  VAR_24 = VAR_23->sc_init_tx_ring(VAR_23, VAR_25);
  if (VAR_24) {
   FUNC_23(VAR_23->sc_dev,
      "can't initialize %dth TX ring\n", VAR_25);
   return VAR_24;
  }
 }




 VAR_24 = VAR_23->sc_init_rx_ring(VAR_23);
 if (VAR_24) {
  FUNC_23(VAR_23->sc_dev, "can't initialize RX ring\n");
  return VAR_24;
 }




 if (VAR_22->mac_flags & VAR_9) {
  VAR_24 = VAR_23->sc_init_txstats(VAR_23);
  if (VAR_24) {
   FUNC_23(VAR_23->sc_dev,
      "can't initialize TX stats ring\n");
   return VAR_24;
  }
 }


 FUNC_3(VAR_23, 0x612, 0x50);
 FUNC_5(VAR_22, VAR_1, 0x416, 0x50);
 FUNC_5(VAR_22, VAR_1, 0x414, 0x1f4);

 VAR_22->mac_flags |= VAR_10;
 return 0;
}
