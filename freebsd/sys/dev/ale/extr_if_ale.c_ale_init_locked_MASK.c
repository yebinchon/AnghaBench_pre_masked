
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct mii_data {int dummy; } ;
struct ifnet {int if_drv_flags; int if_mtu; } ;
struct TYPE_4__ {TYPE_1__* ale_rx_page; int ale_tx_cmb_paddr; int ale_tx_ring_paddr; } ;
struct ale_softc {int ale_int_rx_mod; int ale_int_tx_mod; int ale_max_frame_size; int ale_flags; int ale_dma_rd_burst; int ale_dma_wr_burst; int ale_tick_ch; TYPE_2__ ale_cdata; int ale_miibus; struct ifnet* ale_ifp; } ;
typedef int bus_addr_t ;
struct TYPE_3__ {int cmb_paddr; int page_paddr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
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
 int FUNC_2 (struct ale_softc*) ;
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
 int FUNC_3 (int) ;
 int VAR_42 ;
 int FUNC_4 (struct ale_softc*,int ) ;
 int FUNC_5 (struct ale_softc*,int ,int ) ;
 int FUNC_6 (struct ale_softc*,int ,int) ;
 int FUNC_7 (struct ale_softc*,int ,int) ;
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
 scalar_t__ VAR_58 ;
 scalar_t__ VAR_59 ;
 scalar_t__ VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
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
 int FUNC_8 (struct ifnet*) ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
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
 int VAR_99 ;
 int VAR_100 ;
 int VAR_101 ;
 int VAR_102 ;
 int VAR_103 ;
 int VAR_104 ;
 int VAR_105 ;
 int VAR_106 ;
 int VAR_107 ;
 int VAR_108 ;
 int VAR_109 ;
 int VAR_110 ;
 int VAR_111 ;
 int VAR_112 ;
 int VAR_113 ;
 int VAR_114 ;
 int VAR_115 ;
 int VAR_116 ;
 int VAR_117 ;
 int VAR_118 ;
 int VAR_119 ;
 int VAR_120 ;
 int VAR_121 ;
 int VAR_122 ;
 int VAR_123 ;
 int VAR_124 ;
 int VAR_125 ;
 int VAR_126 ;
 int VAR_127 ;
 int VAR_128 ;
 int VAR_129 ;
 int VAR_130 ;
 int FUNC_9 (struct ale_softc*) ;
 int FUNC_10 (struct ale_softc*) ;
 int FUNC_11 (struct ale_softc*) ;
 int FUNC_12 (struct ale_softc*) ;
 int FUNC_13 (struct ale_softc*) ;
 int FUNC_14 (struct ale_softc*) ;
 int FUNC_15 (struct ale_softc*) ;
 int VAR_131 ;
 int FUNC_16 (int ,int*,int) ;
 int FUNC_17 (int *,int ,int ,struct ale_softc*) ;
 struct mii_data* FUNC_18 (int ) ;
 int VAR_132 ;
 int FUNC_19 (struct mii_data*) ;
 int FUNC_20 (int,int ) ;

__attribute__((used)) static void
FUNC_21(struct ale_softc *VAR_133)
{
 struct ifnet *VAR_134;
 struct mii_data *VAR_135;
 uint8_t VAR_136[VAR_57];
 bus_addr_t VAR_137;
 uint32_t VAR_138, VAR_139, VAR_140;

 FUNC_2(VAR_133);

 VAR_134 = VAR_133->ale_ifp;
 VAR_135 = FUNC_18(VAR_133->ale_miibus);

 if ((VAR_134->if_drv_flags & VAR_75) != 0)
  return;



 FUNC_15(VAR_133);



 FUNC_11(VAR_133);

 FUNC_9(VAR_133);
 FUNC_10(VAR_133);


 FUNC_16(FUNC_8(VAR_134), VAR_136, VAR_57);
 FUNC_7(VAR_133, VAR_18,
     VAR_136[2] << 24 | VAR_136[3] << 16 | VAR_136[4] << 8 | VAR_136[5]);
 FUNC_7(VAR_133, VAR_19, VAR_136[0] << 8 | VAR_136[1]);




 FUNC_4(VAR_133, VAR_42);
 FUNC_7(VAR_133, VAR_42, 0);




 VAR_137 = VAR_133->ale_cdata.ale_tx_ring_paddr;
 FUNC_7(VAR_133, VAR_35, FUNC_0(VAR_137));
 FUNC_7(VAR_133, VAR_36, FUNC_1(VAR_137));
 FUNC_7(VAR_133, VAR_37,
     (VAR_41 << VAR_122) & VAR_121);

 VAR_137 = VAR_133->ale_cdata.ale_rx_page[0].page_paddr;
 FUNC_7(VAR_133, VAR_25, FUNC_1(VAR_137));
 VAR_137 = VAR_133->ale_cdata.ale_rx_page[1].page_paddr;
 FUNC_7(VAR_133, VAR_27, FUNC_1(VAR_137));

 VAR_137 = VAR_133->ale_cdata.ale_tx_cmb_paddr;
 FUNC_7(VAR_133, VAR_39, FUNC_1(VAR_137));
 VAR_137 = VAR_133->ale_cdata.ale_rx_page[0].cmb_paddr;
 FUNC_7(VAR_133, VAR_22, FUNC_1(VAR_137));
 VAR_137 = VAR_133->ale_cdata.ale_rx_page[1].cmb_paddr;
 FUNC_7(VAR_133, VAR_23, FUNC_1(VAR_137));

 FUNC_5(VAR_133, VAR_24, VAR_106);
 FUNC_5(VAR_133, VAR_26, VAR_106);






 FUNC_7(VAR_133, VAR_28, VAR_32);

 FUNC_7(VAR_133, VAR_0, VAR_43);


 FUNC_7(VAR_133, VAR_13, (1 << VAR_78) |
     (4 << VAR_80));





 FUNC_7(VAR_133, VAR_14,
     ((FUNC_3(10) << VAR_79) |
     (FUNC_3(1000) << VAR_81)));


 VAR_138 = FUNC_3(VAR_133->ale_int_rx_mod) << VAR_76;
 VAR_138 |= FUNC_3(VAR_133->ale_int_tx_mod) << VAR_77;
 FUNC_7(VAR_133, VAR_8, VAR_138);
 VAR_138 = FUNC_4(VAR_133, VAR_17);
 VAR_138 &= ~(VAR_103 | VAR_102);
 VAR_138 &= ~(VAR_104 | VAR_105);
 if (FUNC_3(VAR_133->ale_int_rx_mod) != 0)
  VAR_138 |= VAR_104;
 if (FUNC_3(VAR_133->ale_int_tx_mod) != 0)
  VAR_138 |= VAR_105;
 FUNC_7(VAR_133, VAR_17, VAR_138);
 FUNC_6(VAR_133, VAR_10, FUNC_3(1000));


 if (VAR_134->if_mtu < VAR_56)
  VAR_133->ale_max_frame_size = VAR_56;
 else
  VAR_133->ale_max_frame_size = VAR_134->if_mtu;
 VAR_133->ale_max_frame_size += VAR_59 + VAR_60 +
     VAR_58;
 FUNC_7(VAR_133, VAR_6, VAR_133->ale_max_frame_size);

 FUNC_7(VAR_133, VAR_15,
     ((VAR_88 << VAR_90) & VAR_89) |
     ((VAR_91 << VAR_93) & VAR_92) |
     ((VAR_82 << VAR_84) & VAR_83) |
     ((VAR_85 << VAR_87) & VAR_86));

 FUNC_7(VAR_133, VAR_7,
     ((VAR_68 << VAR_70) &
     VAR_69) |
     ((VAR_71 << VAR_73) &
     VAR_72) | VAR_64 |
     ((VAR_61 << VAR_63) &
     VAR_62) |
     ((VAR_65 << VAR_67) &
     VAR_66));


 if ((VAR_133->ale_flags & VAR_3) != 0) {
  if (VAR_134->if_mtu < VAR_56)
   VAR_138 = VAR_133->ale_max_frame_size;
  else if (VAR_134->if_mtu < 6 * 1024)
   VAR_138 = (VAR_133->ale_max_frame_size * 2) / 3;
  else
   VAR_138 = VAR_133->ale_max_frame_size / 2;
  FUNC_7(VAR_133, VAR_40,
      FUNC_20(VAR_138, VAR_129) >>
      VAR_130);
 }

 VAR_138 = (128 << (VAR_133->ale_dma_rd_burst >> VAR_46))
     << VAR_128;
 VAR_138 |= (VAR_125 << VAR_127) &
     VAR_126;
 FUNC_7(VAR_133, VAR_38, VAR_138 | VAR_124 | VAR_123);


 if ((VAR_133->ale_flags & VAR_3) != 0) {
  VAR_138 = FUNC_20(VAR_133->ale_max_frame_size, VAR_119);
  FUNC_7(VAR_133, VAR_31,
      (((VAR_138 >> VAR_120) <<
      VAR_118) & VAR_117) |
      ((VAR_114 << VAR_116) &
      VAR_115));
  VAR_138 = FUNC_4(VAR_133, VAR_34);
  VAR_139 = (VAR_138 * 7) / 10;
  VAR_140 = (VAR_138 * 3)/ 10;
  FUNC_7(VAR_133, VAR_30,
      ((VAR_140 << VAR_113) &
      VAR_112) |
      ((VAR_139 << VAR_111) &
      VAR_110));
 }


 FUNC_7(VAR_133, VAR_21, 0);
 FUNC_7(VAR_133, VAR_20, 0);


 FUNC_7(VAR_133, VAR_29,
     VAR_107 | VAR_108 | VAR_109);


 VAR_138 = 0;
 if ((VAR_133->ale_flags & VAR_5) == 0)
  VAR_138 |= VAR_52;
 FUNC_7(VAR_133, VAR_1,
     VAR_44 | VAR_50 | VAR_45 |
     VAR_133->ale_dma_rd_burst | VAR_138 |
     VAR_133->ale_dma_wr_burst | VAR_51 |
     ((VAR_47 << VAR_49) &
     VAR_48) |
     ((VAR_53 << VAR_55) &
     VAR_54));







 FUNC_7(VAR_133, VAR_33, FUNC_3(0));

 FUNC_14(VAR_133);
 VAR_138 = VAR_101 | VAR_100 | VAR_94 |
     ((VAR_95 << VAR_97) &
     VAR_96);
 if ((VAR_133->ale_flags & VAR_2) != 0)
  VAR_138 |= VAR_99;
 else
  VAR_138 |= VAR_98;
 FUNC_7(VAR_133, VAR_16, VAR_138);


 FUNC_12(VAR_133);
 FUNC_13(VAR_133);


 FUNC_7(VAR_133, VAR_11, VAR_9);
 FUNC_7(VAR_133, VAR_12, 0xFFFFFFFF);
 FUNC_7(VAR_133, VAR_12, 0);

 VAR_134->if_drv_flags |= VAR_75;
 VAR_134->if_drv_flags &= ~VAR_74;

 VAR_133->ale_flags &= ~VAR_4;

 FUNC_19(VAR_135);

 FUNC_17(&VAR_133->ale_tick_ch, VAR_132, VAR_131, VAR_133);
}
