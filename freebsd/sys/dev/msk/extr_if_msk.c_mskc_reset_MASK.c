
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct msk_stat_desc {int dummy; } ;
struct msk_softc {scalar_t__ msk_hw_id; int msk_bustype; int msk_num_port; scalar_t__ msk_hw_rev; scalar_t__ msk_pcixcap; scalar_t__ msk_expcap; int msk_stat_count; int msk_stat_ring_paddr; int msk_stat_map; int msk_stat_tag; scalar_t__ msk_stat_cons; int msk_stat_ring; int msk_dev; int msk_intrhwemask; int msk_intrmask; } ;
typedef int bus_addr_t ;


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
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_0 (struct msk_softc*,int ) ;
 int FUNC_1 (struct msk_softc*,int ,int) ;
 int FUNC_2 (struct msk_softc*,int ) ;
 int FUNC_3 (struct msk_softc*,int ) ;
 int FUNC_4 (struct msk_softc*,int ,int) ;
 int FUNC_5 (struct msk_softc*,int ,int) ;
 int FUNC_6 (struct msk_softc*,int ,int) ;
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
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;



 int VAR_52 ;
 int VAR_53 ;
 int FUNC_10 (struct msk_softc*,int) ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 scalar_t__ VAR_59 ;
 scalar_t__ VAR_60 ;
 int VAR_61 ;
 scalar_t__ VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 scalar_t__ VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int FUNC_11 (int,int ) ;
 int VAR_74 ;
 int VAR_75 ;
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
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (struct msk_softc*,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,scalar_t__,int) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int ,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_19(struct msk_softc *VAR_102)
{
 bus_addr_t VAR_103;
 uint16_t VAR_104;
 uint32_t VAR_105;
 int VAR_106, VAR_107;


 if (VAR_102->msk_hw_id >= VAR_30 &&
     VAR_102->msk_hw_id <= VAR_29) {
  if (VAR_102->msk_hw_id == VAR_26 ||
      VAR_102->msk_hw_id == VAR_29) {
   FUNC_6(VAR_102, VAR_6, 0);
   VAR_104 = FUNC_2(VAR_102, VAR_4);

   VAR_104 &= ~(VAR_93 |
       VAR_95);

   VAR_104 &= ~VAR_96;
   VAR_104 &= ~VAR_94;
   FUNC_5(VAR_102, VAR_4, VAR_104);
   FUNC_6(VAR_102, VAR_6, 0);
  } else
   FUNC_4(VAR_102, VAR_5, VAR_97);
  FUNC_5(VAR_102, VAR_0, VAR_92);




  FUNC_5(VAR_102, VAR_0, VAR_36);
  FUNC_5(VAR_102, VAR_0, VAR_35);
 }


 VAR_104 = FUNC_16(VAR_102->msk_dev, VAR_60, 2);
 FUNC_4(VAR_102, VAR_9, VAR_91);

 FUNC_18(VAR_102->msk_dev, VAR_60, VAR_104 |
     VAR_55 | VAR_58 | VAR_56 |
     VAR_57 | VAR_54, 2);
 FUNC_5(VAR_102, VAR_0, VAR_34);

 switch (VAR_102->msk_bustype) {
 case 128:

  FUNC_1(VAR_102, VAR_68, 0xffffffff);
  VAR_105 = FUNC_0(VAR_102, VAR_68);
  if ((VAR_105 & VAR_67) != 0) {
   VAR_102->msk_intrmask &= ~VAR_98;
   VAR_102->msk_intrhwemask &= ~VAR_99;
  }
  break;
 case 129:
 case 130:

  VAR_105 = FUNC_16(VAR_102->msk_dev, VAR_59, 1);
  if (VAR_105 == 0)
   FUNC_18(VAR_102->msk_dev, VAR_59, 2, 1);
  if (VAR_102->msk_bustype == 130) {

   VAR_105 = FUNC_16(VAR_102->msk_dev, VAR_65, 4);
   VAR_105 |= VAR_64;
   FUNC_18(VAR_102->msk_dev, VAR_65, VAR_105, 4);
  }
  break;
 }

 FUNC_14(VAR_102, VAR_52);


 for (VAR_106 = 0; VAR_106 < VAR_102->msk_num_port; VAR_106++) {

  FUNC_4(VAR_102, FUNC_7(VAR_106, VAR_50), VAR_49);
  FUNC_4(VAR_102, FUNC_7(VAR_106, VAR_50), VAR_48);

  FUNC_6(VAR_102, FUNC_7(VAR_106, VAR_38), VAR_45);
  FUNC_6(VAR_102, FUNC_7(VAR_106, VAR_38), VAR_44);
  FUNC_6(VAR_102, FUNC_7(VAR_106, VAR_38), VAR_43);
  if (VAR_102->msk_hw_id == VAR_26 ||
      VAR_102->msk_hw_id == VAR_29)
   FUNC_6(VAR_102, FUNC_7(VAR_106, VAR_38),
       VAR_40 | VAR_41 |
       VAR_42);
 }

 if (VAR_102->msk_hw_id == VAR_29 &&
     VAR_102->msk_hw_rev > VAR_32)
  FUNC_1(VAR_102, VAR_66, VAR_63);
 if (VAR_102->msk_hw_id == VAR_28 && VAR_102->msk_hw_rev == 0) {

  FUNC_6(VAR_102, VAR_101, (0x0080 << 16) | 0x0080);
 }
 FUNC_4(VAR_102, VAR_9, VAR_90);


 FUNC_5(VAR_102, VAR_0, VAR_100);


 FUNC_6(VAR_102, VAR_7, VAR_51);


 FUNC_4(VAR_102, VAR_8, VAR_89);
 FUNC_4(VAR_102, VAR_8, VAR_87);


 FUNC_4(VAR_102, VAR_3, VAR_37);


 FUNC_4(VAR_102, VAR_39, VAR_47);
 FUNC_4(VAR_102, VAR_39, VAR_46);

 VAR_107 = 0;
 if (VAR_102->msk_hw_id == VAR_30 ||
     VAR_102->msk_hw_id == VAR_25 ||
     VAR_102->msk_hw_id == VAR_27)
  VAR_107++;


 for (VAR_106 = 0; VAR_107 > 0 && VAR_106 < VAR_102->msk_num_port; VAR_106++) {
  FUNC_5(VAR_102, FUNC_11(VAR_106, VAR_10), VAR_70);
  FUNC_5(VAR_102, FUNC_11(VAR_106, VAR_10), VAR_69);
  FUNC_4(VAR_102, FUNC_11(VAR_106, VAR_17),
      VAR_53);
  FUNC_4(VAR_102, FUNC_11(VAR_106, VAR_19),
      VAR_53);
  FUNC_4(VAR_102, FUNC_11(VAR_106, VAR_21),
      VAR_53);
  FUNC_4(VAR_102, FUNC_11(VAR_106, VAR_11),
      VAR_53);
  FUNC_4(VAR_102, FUNC_11(VAR_106, VAR_13),
      VAR_53);
  FUNC_4(VAR_102, FUNC_11(VAR_106, VAR_15),
      VAR_53);
  FUNC_4(VAR_102, FUNC_11(VAR_106, VAR_18),
      VAR_53);
  FUNC_4(VAR_102, FUNC_11(VAR_106, VAR_20),
      VAR_53);
  FUNC_4(VAR_102, FUNC_11(VAR_106, VAR_22),
      VAR_53);
  FUNC_4(VAR_102, FUNC_11(VAR_106, VAR_12),
      VAR_53);
  FUNC_4(VAR_102, FUNC_11(VAR_106, VAR_14),
      VAR_53);
  FUNC_4(VAR_102, FUNC_11(VAR_106, VAR_16),
      VAR_53);
 }


 FUNC_6(VAR_102, VAR_1, 0);
 FUNC_3(VAR_102, VAR_1);
 FUNC_6(VAR_102, VAR_2, 0);
 FUNC_3(VAR_102, VAR_2);





 if (VAR_102->msk_pcixcap != 0 && VAR_102->msk_num_port > 1) {
  uint16_t VAR_108;

  VAR_108 = FUNC_16(VAR_102->msk_dev,
      VAR_102->msk_pcixcap + VAR_62, 2);

  VAR_108 &= ~VAR_61;
  FUNC_4(VAR_102, VAR_9, VAR_91);
  FUNC_18(VAR_102->msk_dev,
      VAR_102->msk_pcixcap + VAR_62, VAR_108, 2);
  FUNC_4(VAR_102, VAR_9, VAR_90);
        }
 if (VAR_102->msk_expcap != 0) {

  if (FUNC_15(VAR_102->msk_dev) == 512)
   FUNC_17(VAR_102->msk_dev, 2048);
 }


 FUNC_13(VAR_102->msk_stat_ring,
     sizeof(struct msk_stat_desc) * VAR_102->msk_stat_count);
 VAR_102->msk_stat_cons = 0;
 FUNC_12(VAR_102->msk_stat_tag, VAR_102->msk_stat_map,
     VAR_23 | VAR_24);
 FUNC_6(VAR_102, VAR_74, VAR_73);
 FUNC_6(VAR_102, VAR_74, VAR_72);

 VAR_103 = VAR_102->msk_stat_ring_paddr;
 FUNC_6(VAR_102, VAR_82, FUNC_9(VAR_103));
 FUNC_6(VAR_102, VAR_81, FUNC_8(VAR_103));

 FUNC_5(VAR_102, VAR_79, VAR_102->msk_stat_count - 1);
 if (VAR_102->msk_hw_id == VAR_25 &&
     VAR_102->msk_hw_rev == VAR_31) {

  FUNC_5(VAR_102, VAR_83, VAR_86);

  FUNC_4(VAR_102, VAR_76, 0x21);
  FUNC_4(VAR_102, VAR_75, 0x07);
 } else {
  FUNC_5(VAR_102, VAR_83, 0x0a);
  FUNC_4(VAR_102, VAR_76, 0x10);
  if (VAR_102->msk_hw_id == VAR_30 &&
      VAR_102->msk_hw_rev == VAR_33)
   FUNC_4(VAR_102, VAR_75, 0x04);
  else
   FUNC_4(VAR_102, VAR_75, 0x10);
  FUNC_6(VAR_102, VAR_78, 0x0190);
 }



 FUNC_6(VAR_102, VAR_85, FUNC_10(VAR_102, 1000));


 FUNC_6(VAR_102, VAR_74, VAR_71);

 FUNC_4(VAR_102, VAR_84, VAR_88);
 FUNC_4(VAR_102, VAR_80, VAR_88);
 FUNC_4(VAR_102, VAR_77, VAR_88);
}
