
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct msk_softc {int msk_hw_id; scalar_t__ msk_hw_rev; int msk_intrmask; int msk_intrhwemask; scalar_t__ msk_int_holdoff; } ;
struct TYPE_2__ {int msk_rx_ring_paddr; int msk_jumbo_rx_ring_paddr; int msk_tx_ring_paddr; } ;
struct msk_if_softc {scalar_t__ msk_framesize; int msk_flags; scalar_t__ msk_port; int msk_tick_ch; int msk_if_dev; TYPE_1__ msk_rdata; int msk_rxq; int msk_txq; int msk_txsq; int msk_miibus; struct msk_softc* msk_softc; struct ifnet* msk_ifp; } ;
struct mii_data {int dummy; } ;
struct ifnet {int if_drv_flags; scalar_t__ if_mtu; int if_hwassist; int if_capenable; } ;


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
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (struct msk_softc*,int ) ;
 int FUNC_1 (struct msk_softc*,int ) ;
 int FUNC_2 (struct msk_softc*,int ,int) ;
 int FUNC_3 (struct msk_softc*,int ,int) ;
 int FUNC_4 (struct msk_softc*,int ,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_6 (struct msk_softc*,scalar_t__,int ,int) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int* FUNC_7 (struct ifnet*) ;
 int VAR_64 ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_65 ;
 int FUNC_9 (scalar_t__,int ) ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int FUNC_10 (struct msk_if_softc*) ;
 scalar_t__ VAR_76 ;
 scalar_t__ VAR_77 ;
 scalar_t__ VAR_78 ;
 scalar_t__ VAR_79 ;
 scalar_t__ VAR_80 ;
 int FUNC_11 (struct msk_softc*,scalar_t__) ;
 int FUNC_12 (int ,int ) ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int FUNC_13 (int ,int ) ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 int VAR_98 ;
 int FUNC_14 (int ) ;
 int VAR_99 ;
 int VAR_100 ;
 int FUNC_15 (int ) ;
 int VAR_101 ;
 int VAR_102 ;
 int FUNC_16 (int ) ;
 int VAR_103 ;
 int VAR_104 ;
 int FUNC_17 (int ) ;
 int VAR_105 ;
 int FUNC_18 (int ) ;
 int VAR_106 ;
 int VAR_107 ;
 int VAR_108 ;
 int VAR_109 ;
 int FUNC_19 (int *,int ,int ,struct msk_if_softc*) ;
 struct mii_data* FUNC_20 (int ) ;
 int FUNC_21 (int ,char*) ;
 int VAR_110 ;
 int FUNC_22 (struct mii_data*) ;
 int FUNC_23 (struct msk_if_softc*) ;
 int FUNC_24 (struct msk_if_softc*) ;
 int FUNC_25 (struct msk_if_softc*) ;
 int FUNC_26 (struct msk_if_softc*) ;
 int FUNC_27 (struct msk_softc*,int ,int ,scalar_t__) ;
 int FUNC_28 (struct msk_if_softc*) ;
 int FUNC_29 (struct msk_if_softc*) ;
 int FUNC_30 (struct msk_if_softc*,struct ifnet*) ;
 int FUNC_31 (struct msk_if_softc*) ;
 int FUNC_32 (struct msk_if_softc*) ;
 int VAR_111 ;

__attribute__((used)) static void
FUNC_33(struct msk_if_softc *VAR_112)
{
 struct msk_softc *VAR_113;
 struct ifnet *VAR_114;
 struct mii_data *VAR_115;
 uint8_t *VAR_116;
 uint16_t VAR_117;
 uint32_t VAR_118;
 int VAR_119;

 FUNC_10(VAR_112);

 VAR_114 = VAR_112->msk_ifp;
 VAR_113 = VAR_112->msk_softc;
 VAR_115 = FUNC_20(VAR_112->msk_miibus);

 if ((VAR_114->if_drv_flags & VAR_63) != 0)
  return;

 VAR_119 = 0;

 FUNC_32(VAR_112);

 if (VAR_114->if_mtu < VAR_21)
  VAR_112->msk_framesize = VAR_21;
 else
  VAR_112->msk_framesize = VAR_114->if_mtu;
 VAR_112->msk_framesize += VAR_22 + VAR_23;
 if (VAR_114->if_mtu > VAR_21 &&
     (VAR_112->msk_flags & VAR_73) != 0) {
  VAR_114->if_hwassist &= ~(VAR_68 | VAR_19);
  VAR_114->if_capenable &= ~(VAR_60 | VAR_61);
 }


 FUNC_4(VAR_113, FUNC_9(VAR_112->msk_port, VAR_26), VAR_33);
 FUNC_4(VAR_113, FUNC_9(VAR_112->msk_port, VAR_26), VAR_32);
 FUNC_4(VAR_113, FUNC_9(VAR_112->msk_port, VAR_26), VAR_31);
 if (VAR_113->msk_hw_id == 128 ||
     VAR_113->msk_hw_id == VAR_13)
  FUNC_4(VAR_113, FUNC_9(VAR_112->msk_port, VAR_26),
      VAR_28 | VAR_29 |
      VAR_30);





 FUNC_6(VAR_113, VAR_112->msk_port, VAR_41, 0);


 FUNC_0(VAR_113, FUNC_9(VAR_112->msk_port, VAR_27));


 FUNC_31(VAR_112);


 FUNC_6(VAR_113, VAR_112->msk_port, VAR_43, VAR_42);


 FUNC_6(VAR_113, VAR_112->msk_port, VAR_55, FUNC_15(VAR_100));


 FUNC_6(VAR_113, VAR_112->msk_port, VAR_56, 0xffff);


 FUNC_6(VAR_113, VAR_112->msk_port, VAR_58,
     FUNC_18(VAR_105) | FUNC_17(VAR_104) |
     FUNC_16(VAR_103) | FUNC_14(VAR_99));

 VAR_117 = FUNC_5(VAR_20) |
     VAR_47 | FUNC_8(VAR_64);

 if (VAR_114->if_mtu > VAR_21)
  VAR_117 |= VAR_46;
 FUNC_6(VAR_113, VAR_112->msk_port, VAR_45, VAR_117);


 VAR_116 = FUNC_7(VAR_114);
 FUNC_6(VAR_113, VAR_112->msk_port, VAR_49,
     VAR_116[0] | (VAR_116[1] << 8));
 FUNC_6(VAR_113, VAR_112->msk_port, VAR_50,
     VAR_116[2] | (VAR_116[3] << 8));
 FUNC_6(VAR_113, VAR_112->msk_port, VAR_48,
     VAR_116[4] | (VAR_116[5] << 8));
 FUNC_6(VAR_113, VAR_112->msk_port, VAR_52,
     VAR_116[0] | (VAR_116[1] << 8));
 FUNC_6(VAR_113, VAR_112->msk_port, VAR_53,
     VAR_116[2] | (VAR_116[3] << 8));
 FUNC_6(VAR_113, VAR_112->msk_port, VAR_51,
     VAR_116[4] | (VAR_116[5] << 8));


 FUNC_6(VAR_113, VAR_112->msk_port, VAR_57, 0);
 FUNC_6(VAR_113, VAR_112->msk_port, VAR_44, 0);
 FUNC_6(VAR_113, VAR_112->msk_port, VAR_54, 0);


 FUNC_4(VAR_113, FUNC_9(VAR_112->msk_port, VAR_87), VAR_36);
 FUNC_4(VAR_113, FUNC_9(VAR_112->msk_port, VAR_87), VAR_35);
 VAR_118 = VAR_34 | VAR_37;
 if (VAR_113->msk_hw_id == VAR_12 ||
     VAR_113->msk_hw_id == 128)
  VAR_118 |= VAR_39;
 FUNC_4(VAR_113, FUNC_9(VAR_112->msk_port, VAR_87), VAR_118);


 FUNC_26(VAR_112);

 if (VAR_113->msk_hw_id == VAR_14) {

  FUNC_4(VAR_113, FUNC_9(VAR_112->msk_port, VAR_88), 0);
 } else {

  FUNC_4(VAR_113, FUNC_9(VAR_112->msk_port, VAR_88),
      VAR_40);
 }





 VAR_118 = VAR_90 + 1;

 if (VAR_113->msk_hw_id == VAR_12 &&
     VAR_113->msk_hw_rev == VAR_18)
  VAR_118 = 0x178;
 FUNC_3(VAR_113, FUNC_9(VAR_112->msk_port, VAR_89), VAR_118);


 FUNC_4(VAR_113, FUNC_9(VAR_112->msk_port, VAR_101), VAR_36);
 FUNC_4(VAR_113, FUNC_9(VAR_112->msk_port, VAR_101), VAR_35);
 FUNC_4(VAR_113, FUNC_9(VAR_112->msk_port, VAR_101), VAR_34);


 FUNC_30(VAR_112, VAR_114);

 if ((VAR_112->msk_flags & VAR_75) == 0) {

  FUNC_3(VAR_113, FUNC_9(VAR_112->msk_port, VAR_91),
      VAR_69);
  FUNC_3(VAR_113, FUNC_9(VAR_112->msk_port, VAR_92),
      VAR_71);

  FUNC_29(VAR_112);
 }

 if (VAR_113->msk_hw_id == VAR_12 &&
     VAR_113->msk_hw_rev == VAR_18) {

  VAR_118 = FUNC_1(VAR_113, FUNC_9(VAR_112->msk_port, VAR_102));
  VAR_118 &= ~0x03;
  FUNC_4(VAR_113, FUNC_9(VAR_112->msk_port, VAR_102), VAR_118);
 }





 FUNC_2(VAR_113, FUNC_9(VAR_112->msk_port, VAR_94),
     VAR_96 | VAR_95 | VAR_98);

 FUNC_2(VAR_113, FUNC_9(VAR_112->msk_port, VAR_94), VAR_97);


 FUNC_28(VAR_112);


 FUNC_2(VAR_113, FUNC_13(VAR_112->msk_txsq, VAR_85), VAR_86);


 FUNC_4(VAR_113, FUNC_12(VAR_112->msk_txq, VAR_82), VAR_6);
 FUNC_4(VAR_113, FUNC_12(VAR_112->msk_txq, VAR_82), VAR_11);
 FUNC_4(VAR_113, FUNC_12(VAR_112->msk_txq, VAR_82), VAR_10);
 FUNC_3(VAR_113, FUNC_12(VAR_112->msk_txq, VAR_84), VAR_67);
 switch (VAR_113->msk_hw_id) {
 case 129:
  if (VAR_113->msk_hw_rev == VAR_15) {

   FUNC_3(VAR_113, FUNC_12(VAR_112->msk_txq, VAR_81),
       VAR_70);
  }
  break;
 case 128:




  if (VAR_113->msk_hw_rev == VAR_17)
   FUNC_4(VAR_113, FUNC_12(VAR_112->msk_txq, VAR_83),
       VAR_25);
  break;
 }


 FUNC_4(VAR_113, FUNC_12(VAR_112->msk_rxq, VAR_82), VAR_6);
 FUNC_4(VAR_113, FUNC_12(VAR_112->msk_rxq, VAR_82), VAR_11);
 FUNC_4(VAR_113, FUNC_12(VAR_112->msk_rxq, VAR_82), VAR_10);
 FUNC_3(VAR_113, FUNC_12(VAR_112->msk_rxq, VAR_84), VAR_66);
        if (VAR_113->msk_hw_id == 129 &&
     VAR_113->msk_hw_rev >= VAR_16) {

                FUNC_4(VAR_113, FUNC_12(VAR_112->msk_rxq, VAR_83), VAR_24);
 }

 FUNC_27(VAR_113, VAR_112->msk_txq,
     VAR_112->msk_rdata.msk_tx_ring_paddr, VAR_80 - 1);
 FUNC_25(VAR_112);


 VAR_118 = VAR_8;
 if ((VAR_112->msk_flags & VAR_72) == 0 &&
     (VAR_114->if_capenable & VAR_59) != 0)
  VAR_118 |= VAR_9;
 else
  VAR_118 |= VAR_7;
 FUNC_4(VAR_113, FUNC_12(VAR_112->msk_rxq, VAR_82), VAR_118);
 if (VAR_112->msk_framesize > (VAR_65 - VAR_78)) {
  FUNC_27(VAR_113, VAR_112->msk_rxq,
      VAR_112->msk_rdata.msk_jumbo_rx_ring_paddr,
      VAR_76 - 1);
  VAR_119 = FUNC_23(VAR_112);
  } else {
  FUNC_27(VAR_113, VAR_112->msk_rxq,
      VAR_112->msk_rdata.msk_rx_ring_paddr,
      VAR_79 - 1);
  VAR_119 = FUNC_24(VAR_112);
 }
 if (VAR_119 != 0) {
  FUNC_21(VAR_112->msk_if_dev,
      "initialization failed: no memory for Rx buffers\n");
  FUNC_32(VAR_112);
  return;
 }
 if (VAR_113->msk_hw_id == 128 ||
     VAR_113->msk_hw_id == VAR_13) {

  FUNC_4(VAR_113, FUNC_9(VAR_112->msk_port, VAR_87),
      VAR_38);
 }


 if (VAR_112->msk_port == VAR_77) {
  VAR_113->msk_intrmask |= VAR_108;
  VAR_113->msk_intrhwemask |= VAR_106;
 } else {
  VAR_113->msk_intrmask |= VAR_109;
  VAR_113->msk_intrhwemask |= VAR_107;
 }

 FUNC_4(VAR_113, VAR_4, VAR_113->msk_intrmask);
 if (VAR_113->msk_int_holdoff > 0) {

  FUNC_4(VAR_113, VAR_3,
      FUNC_11(VAR_113, VAR_113->msk_int_holdoff));
  FUNC_4(VAR_113, VAR_5,
      FUNC_11(VAR_113, VAR_113->msk_int_holdoff));

  FUNC_2(VAR_113, VAR_2, VAR_93);
 }
 FUNC_4(VAR_113, VAR_0, VAR_113->msk_intrhwemask);
 FUNC_1(VAR_113, VAR_0);
 FUNC_4(VAR_113, VAR_1, VAR_113->msk_intrmask);
 FUNC_1(VAR_113, VAR_1);

 VAR_114->if_drv_flags |= VAR_63;
 VAR_114->if_drv_flags &= ~VAR_62;

 VAR_112->msk_flags &= ~VAR_74;
 FUNC_22(VAR_115);

 FUNC_19(&VAR_112->msk_tick_ch, VAR_110, VAR_111, VAR_112);
}
