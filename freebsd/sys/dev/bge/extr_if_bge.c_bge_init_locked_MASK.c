
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct bge_softc {scalar_t__ bge_forced_udpcsum; int bge_csum_features; scalar_t__ bge_chipid; scalar_t__ bge_asicrev; int bge_stat_ch; scalar_t__ bge_tx_collisions; scalar_t__ bge_tx_discards; scalar_t__ bge_rx_discards; scalar_t__ bge_rx_saved_considx; int bge_dev; int bge_ifp; } ;
typedef int if_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bge_softc*,int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct bge_softc*) ;
 scalar_t__ FUNC_2 (struct bge_softc*) ;
 scalar_t__ FUNC_3 (struct bge_softc*) ;
 scalar_t__ FUNC_4 (struct bge_softc*) ;
 int FUNC_5 (struct bge_softc*) ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (struct bge_softc*,int ,int ) ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_7 (struct bge_softc*,int ) ;
 int FUNC_8 (struct bge_softc*,int ,int) ;
 int VAR_26 ;
 int FUNC_9 (int) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_36 ;
 scalar_t__ FUNC_11 (struct bge_softc*) ;
 int FUNC_12 (struct bge_softc*) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (struct bge_softc*) ;
 scalar_t__ FUNC_15 (struct bge_softc*) ;
 int FUNC_16 (struct bge_softc*) ;
 int FUNC_17 (struct bge_softc*,scalar_t__) ;
 int FUNC_18 (struct bge_softc*) ;
 int FUNC_19 (struct bge_softc*) ;
 int FUNC_20 (struct bge_softc*) ;
 int FUNC_21 (struct bge_softc*) ;
 int FUNC_22 (struct bge_softc*,int ) ;
 int FUNC_23 (struct bge_softc*,int ) ;
 int FUNC_24 (struct bge_softc*,int ) ;
 int FUNC_25 (struct bge_softc*) ;
 int FUNC_26 (struct bge_softc*) ;
 int FUNC_27 (struct bge_softc*) ;
 int VAR_37 ;
 int FUNC_28 (struct bge_softc*,int ,int) ;
 int FUNC_29 (int *,int ,int ,struct bge_softc*) ;
 int FUNC_30 (int ,char*) ;
 int FUNC_31 (int ) ;
 int VAR_38 ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (int ) ;
 int FUNC_35 (int ) ;
 int FUNC_36 (int ,int,int ) ;
 int FUNC_37 (int ,int,int) ;

__attribute__((used)) static void
FUNC_38(struct bge_softc *VAR_39)
{
 if_t VAR_40;
 uint16_t *VAR_41;
 uint32_t VAR_42;

 FUNC_5(VAR_39);

 VAR_40 = VAR_39->bge_ifp;

 if (FUNC_34(VAR_40) & VAR_35)
  return;


 FUNC_26(VAR_39);

 FUNC_27(VAR_39);
 FUNC_24(VAR_39, VAR_14);
 FUNC_18(VAR_39);
 FUNC_22(VAR_39, VAR_14);
 FUNC_23(VAR_39, VAR_14);

 FUNC_12(VAR_39);





 if (FUNC_11(VAR_39)) {
  FUNC_30(VAR_39->bge_dev, "initialization failure\n");
  return;
 }

 VAR_40 = VAR_39->bge_ifp;


 FUNC_8(VAR_39, VAR_19, FUNC_35(VAR_40) +
     VAR_29 + VAR_28 +
     (FUNC_33(VAR_40) & VAR_33 ? VAR_30 : 0));


 VAR_41 = (uint16_t *)FUNC_10(VAR_39->bge_ifp);
 FUNC_8(VAR_39, VAR_6, FUNC_31(VAR_41[0]));
 FUNC_8(VAR_39, VAR_5, (FUNC_31(VAR_41[1]) << 16) | FUNC_31(VAR_41[2]));


 FUNC_20(VAR_39);


 FUNC_19(VAR_39);


 FUNC_21(VAR_39);


 if (VAR_39->bge_forced_udpcsum == 0)
  VAR_39->bge_csum_features &= ~VAR_26;
 else
  VAR_39->bge_csum_features |= VAR_26;
 if (FUNC_32(VAR_40) & VAR_32 &&
     FUNC_33(VAR_40) & VAR_32) {
  FUNC_37(VAR_40, 0, (VAR_4 | VAR_26));
  FUNC_37(VAR_40, VAR_39->bge_csum_features, 0);
 }


 if (FUNC_15(VAR_39) != 0) {
  FUNC_30(VAR_39->bge_dev, "no memory for std Rx buffers.\n");
  FUNC_26(VAR_39);
  return;
 }






 if (VAR_39->bge_chipid == VAR_3) {
  uint32_t VAR_43, VAR_44;
  for (VAR_44 = 0; VAR_44 < 10; VAR_44++) {
   FUNC_9(20);
   VAR_43 = FUNC_17(VAR_39, VAR_20 + 8);
   if (VAR_43 == (VAR_36 - VAR_27))
    break;
  }
  if (VAR_44 == 10)
   FUNC_30 (VAR_39->bge_dev,
       "5705 A0 chip failed to load RX ring\n");
 }


 if (FUNC_4(VAR_39) &&
     FUNC_35(VAR_40) + VAR_29 + VAR_28 +
          VAR_30 > (VAR_36 - VAR_27)) {
  if (FUNC_14(VAR_39) != 0) {
   FUNC_30(VAR_39->bge_dev,
       "no memory for jumbo Rx buffers.\n");
   FUNC_26(VAR_39);
   return;
  }
 }


 VAR_39->bge_rx_saved_considx = 0;


 VAR_39->bge_rx_discards = VAR_39->bge_tx_discards = VAR_39->bge_tx_collisions = 0;


 FUNC_16(VAR_39);


 VAR_42 = FUNC_7(VAR_39, VAR_25);
 if (FUNC_2(VAR_39) || VAR_39->bge_asicrev == VAR_2)
  VAR_42 |= VAR_24;
 if (VAR_39->bge_asicrev == VAR_0 ||
     VAR_39->bge_asicrev == VAR_1) {
  VAR_42 &= ~(VAR_23 | VAR_21);
  VAR_42 |= FUNC_7(VAR_39, VAR_25) &
      (VAR_23 | VAR_21);
 }

 FUNC_8(VAR_39, VAR_25, VAR_42 | VAR_22);
 FUNC_9(100);


 VAR_42 = FUNC_7(VAR_39, VAR_18);
 if (FUNC_2(VAR_39))
  VAR_42 |= VAR_17;
 if (VAR_39->bge_asicrev == VAR_1)
  VAR_42 |= VAR_16;
 FUNC_8(VAR_39,VAR_18, VAR_42 | VAR_15);
 FUNC_9(10);







 if (FUNC_3(VAR_39))
  FUNC_8(VAR_39, VAR_7, 1);
 else
  FUNC_8(VAR_39, VAR_7, 2);


 if (FUNC_1(VAR_39))
  FUNC_25(VAR_39);


 FUNC_6(VAR_39, VAR_10, VAR_9);
 {
 FUNC_6(VAR_39, VAR_13, VAR_11);
 FUNC_0(VAR_39, VAR_13, VAR_12);
 FUNC_28(VAR_39, VAR_8, 0);
 }

 FUNC_36(VAR_40, VAR_35, 0);
 FUNC_36(VAR_40, 0, VAR_34);

 FUNC_13(VAR_40);

 FUNC_29(&VAR_39->bge_stat_ch, VAR_38, VAR_37, VAR_39);
}
