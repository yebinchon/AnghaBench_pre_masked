
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct mii_data {int dummy; } ;
struct ifnet {int if_drv_flags; int if_mtu; } ;
typedef int bus_addr_t ;
struct TYPE_16__ {int txd_cur; int rxd_cur; int dev; int tick_ch; int flags; scalar_t__ tx_inproc; scalar_t__ txd_ack; scalar_t__ txs_ack; int dma_txs_busaddr; int dma_txd_busaddr; int dma_rxd_busaddr; int txs_base; int txd_base; int rxd_base_dma; int miibus; struct ifnet* ifp; } ;
typedef TYPE_1__ ae_softc_t ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
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
 int FUNC_0 (TYPE_1__*) ;
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
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int VAR_88 ;
 int FUNC_15 (int ,int*,int) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int *,int ,int ,TYPE_1__*) ;
 struct mii_data* FUNC_18 (int ) ;
 int FUNC_19 (int ,char*) ;
 int VAR_89 ;
 int FUNC_20 (struct mii_data*) ;

__attribute__((used)) static int
FUNC_21(ae_softc_t *VAR_90)
{
 struct ifnet *VAR_91;
 struct mii_data *VAR_92;
 uint8_t VAR_93[VAR_82];
 uint32_t VAR_94;
 bus_addr_t VAR_95;

 FUNC_0(VAR_90);

 VAR_91 = VAR_90->ifp;
 if ((VAR_91->if_drv_flags & VAR_87) != 0)
  return (0);
 VAR_92 = FUNC_18(VAR_90->miibus);

 FUNC_14(VAR_90);
 FUNC_11(VAR_90);
 FUNC_8(VAR_90);
 FUNC_9(VAR_90);
 FUNC_10(VAR_90);




 FUNC_4(VAR_90, VAR_50, 0xffffffff);




 FUNC_15(FUNC_7(VAR_91), VAR_93, VAR_82);
 VAR_94 = VAR_93[2] << 24 | VAR_93[3] << 16 | VAR_93[4] << 8 | VAR_93[5];
 FUNC_4(VAR_90, VAR_7, VAR_94);
 VAR_94 = VAR_93[0] << 8 | VAR_93[1];
 FUNC_4(VAR_90, VAR_8, VAR_94);

 FUNC_16(VAR_90->rxd_base_dma, VAR_70 * 1536 + VAR_73);
 FUNC_16(VAR_90->txd_base, VAR_75);
 FUNC_16(VAR_90->txs_base, VAR_78 * 4);



 VAR_95 = VAR_90->dma_rxd_busaddr;
 FUNC_4(VAR_90, VAR_2, FUNC_5(VAR_95));
 FUNC_4(VAR_90, VAR_69, FUNC_6(VAR_95));
 VAR_95 = VAR_90->dma_txd_busaddr;
 FUNC_4(VAR_90, VAR_74, FUNC_6(VAR_95));
 VAR_95 = VAR_90->dma_txs_busaddr;
 FUNC_4(VAR_90, VAR_77, FUNC_6(VAR_95));




 FUNC_3(VAR_90, VAR_72, VAR_70);
 FUNC_3(VAR_90, VAR_76, VAR_75 / 4);
 FUNC_3(VAR_90, VAR_79, VAR_78);




 VAR_94 = ((VAR_42 << VAR_44) &
     VAR_43) |
     ((VAR_39 << VAR_41) &
     VAR_40) |
     ((VAR_32 << VAR_34) &
     VAR_33) |
     ((VAR_35 << VAR_37) &
     VAR_36);
 FUNC_4(VAR_90, VAR_38, VAR_94);




 VAR_94 = ((VAR_23 << VAR_25) &
     VAR_24) |
     ((VAR_27 << VAR_29) &
     VAR_28) |
     ((VAR_16 << VAR_18) &
     VAR_17) |
     ((VAR_20 << VAR_22) &
     VAR_21) | VAR_19;
 FUNC_4(VAR_90, VAR_26, VAR_94);




 FUNC_3(VAR_90, VAR_48, VAR_47);
 VAR_94 = FUNC_1(VAR_90, VAR_65);
 VAR_94 |= VAR_63;
 FUNC_4(VAR_90, VAR_65, VAR_94);




 FUNC_3(VAR_90, VAR_31, VAR_30);




 VAR_94 = VAR_91->if_mtu + VAR_84 + VAR_85 +
     VAR_83;
 FUNC_3(VAR_90, VAR_68, VAR_94);




 FUNC_4(VAR_90, VAR_1, VAR_0);




 FUNC_3(VAR_90, VAR_11, (VAR_70 / 8) * 7);
 FUNC_3(VAR_90, VAR_12, (VAR_71 / 8) >
     (VAR_70 / 12) ? (VAR_71 / 8) :
     (VAR_70 / 12));




 VAR_90->txd_cur = VAR_90->rxd_cur = 0;
 VAR_90->txs_ack = VAR_90->txd_ack = 0;
 VAR_90->rxd_cur = 0;
 FUNC_3(VAR_90, VAR_67, VAR_90->txd_cur);
 FUNC_3(VAR_90, VAR_66, VAR_90->rxd_cur);

 VAR_90->tx_inproc = 0;
 VAR_90->flags |= VAR_10;




 FUNC_2(VAR_90, VAR_4, VAR_3);
 FUNC_2(VAR_90, VAR_6, VAR_5);




 VAR_94 = FUNC_1(VAR_90, VAR_50);
 if ((VAR_94 & VAR_49) != 0) {
  FUNC_19(VAR_90->dev, "Initialization failed.\n");
  return (VAR_81);
 }




 FUNC_4(VAR_90, VAR_50, 0x3fffffff);
 FUNC_4(VAR_90, VAR_50, 0x0);




 VAR_94 = FUNC_1(VAR_90, VAR_65);
 FUNC_4(VAR_90, VAR_65, VAR_94 | VAR_64);
 FUNC_4(VAR_90, VAR_46, VAR_45);




 FUNC_4(VAR_90, VAR_80, 0);




 VAR_94 = VAR_60 | VAR_59 |
     VAR_52 | VAR_51 |
     VAR_62 | VAR_58 |
     ((VAR_13 << VAR_15) & VAR_14) |
     ((VAR_53 << VAR_55) &
     VAR_54);
 FUNC_4(VAR_90, VAR_56, VAR_94);




 FUNC_12(VAR_90);
 FUNC_13(VAR_90);




 VAR_94 = FUNC_1(VAR_90, VAR_56);
 FUNC_4(VAR_90, VAR_56, VAR_94 | VAR_61 | VAR_57);

 VAR_90->flags &= ~VAR_9;
 FUNC_20(VAR_92);

 FUNC_17(&VAR_90->tick_ch, VAR_89, VAR_88, VAR_90);

 VAR_91->if_drv_flags |= VAR_87;
 VAR_91->if_drv_flags &= ~VAR_86;





 return (0);
}
