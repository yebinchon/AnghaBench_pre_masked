
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct emu_sc_info {unsigned int code_size; scalar_t__ dbg_level; scalar_t__ is_emu10k1; scalar_t__ routing_code_end; void* dummy_gpr; int rm; scalar_t__ mch_rec; void** cache_gpr; scalar_t__ has_51; scalar_t__ has_71; int mch_disabled; void** mute_gpr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
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
 size_t VAR_35 ;
 size_t VAR_36 ;
 size_t VAR_37 ;
 size_t VAR_38 ;
 size_t VAR_39 ;
 size_t VAR_40 ;
 size_t VAR_41 ;
 size_t VAR_42 ;
 size_t VAR_43 ;
 size_t VAR_44 ;
 int FUNC_0 (int) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,size_t,int ,int ,int) ;
 int FUNC_4 (size_t,int ,int ) ;
 int FUNC_5 (char*,int ,int ,size_t,int) ;
 int FUNC_6 (int,int ) ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (unsigned int) ;
 unsigned int VAR_49 ;
 unsigned int VAR_50 ;
 unsigned int VAR_51 ;
 unsigned int VAR_52 ;
 unsigned int VAR_53 ;
 unsigned int VAR_54 ;
 unsigned int VAR_55 ;
 unsigned int VAR_56 ;
 unsigned int VAR_57 ;
 unsigned int VAR_58 ;
 unsigned int VAR_59 ;
 unsigned int VAR_60 ;
 unsigned int VAR_61 ;
 unsigned int VAR_62 ;
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
 unsigned int VAR_116 ;
 int FUNC_11 (unsigned int) ;
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
 int VAR_131 ;
 int FUNC_12 (struct emu_sc_info*,int ,int ,int ,int ,int ,scalar_t__*) ;
 int FUNC_13 (struct emu_sc_info*) ;
 void* FUNC_14 (int ,int) ;
 int FUNC_15 (struct emu_sc_info*,int ,int ,int ) ;
 int FUNC_16 (struct emu_sc_info*,void*,int) ;

__attribute__((used)) static void
FUNC_17(struct emu_sc_info *VAR_132)
{
 unsigned int VAR_133;
 uint32_t VAR_134;


 if (VAR_132->is_emu10k1) {
  FUNC_15(VAR_132, 0, VAR_47, VAR_48);
 } else {
  FUNC_15(VAR_132, 0, VAR_45, VAR_46);
 }


 VAR_134 = 0;
 for (VAR_133 = 0; VAR_133 < VAR_132->code_size; VAR_133++) {
  if (VAR_132->is_emu10k1) {
   FUNC_12(VAR_132, VAR_0, FUNC_0(0x0), FUNC_0(0x0), FUNC_0(0x0), FUNC_0(0x0), &VAR_134);
  } else {
   FUNC_12(VAR_132, VAR_131, FUNC_0(0x0), FUNC_0(0x0), FUNC_0(0xf), FUNC_0(0x0), &VAR_134);
  }
 }


 for (VAR_133 = 0; VAR_133 < VAR_116; VAR_133++) {
  VAR_132->mute_gpr[VAR_133] = FUNC_14(VAR_132->rm, 1);
  FUNC_16(VAR_132, VAR_132->mute_gpr[VAR_133], 1);
 }
 FUNC_13(VAR_132);

 VAR_134 = 0;
 for (VAR_133 = 0; VAR_133 < 16 ; VAR_133++) {
  FUNC_12(VAR_132, VAR_0, FUNC_11(VAR_133), FUNC_0(0), FUNC_0(0), FUNC_0(0), &VAR_134);
 }


 if (VAR_132->is_emu10k1) {
  FUNC_1(VAR_36);
  FUNC_1(VAR_37);
  FUNC_1(VAR_40);
  FUNC_1(VAR_41);


  FUNC_5("pcm_front_l", FUNC_7(0), VAR_64, VAR_36, 100);
  FUNC_5("pcm_front_r", FUNC_7(1), VAR_66, VAR_37, 100);
  FUNC_5(((void*)0), FUNC_7(0), VAR_65, VAR_40, 0);
  FUNC_5(((void*)0), FUNC_7(1), VAR_67, VAR_41, 0);


  FUNC_5("ac97_front_l", FUNC_10(VAR_49), VAR_74, VAR_36, 0);
  FUNC_5("ac97_front_r", FUNC_10(VAR_50), VAR_75, VAR_37, 0);
  FUNC_5("ac97_rec_l", FUNC_10(VAR_49), VAR_76, VAR_40, 0);
  FUNC_5("ac97_rec_r", FUNC_10(VAR_50), VAR_77, VAR_41, 0);



  FUNC_6(4, VAR_34);
  FUNC_5(((void*)0), FUNC_10(VAR_57), VAR_78, VAR_36, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_58), VAR_79, VAR_37, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_57), VAR_80, VAR_40, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_58), VAR_81, VAR_41, 0);

  if (VAR_132->dbg_level > 0) {

   FUNC_5("zoom_front_l", FUNC_10(VAR_61), VAR_82, VAR_36, 0);
   FUNC_5("zoom_front_r", FUNC_10(VAR_62), VAR_83, VAR_37, 0);
   FUNC_5("zoom_rec_l", FUNC_10(VAR_61), VAR_84, VAR_40, 0);
   FUNC_5("zoom_rec_r", FUNC_10(VAR_62), VAR_85, VAR_41, 0);
  }


  FUNC_5(((void*)0), FUNC_10(VAR_59), VAR_86, VAR_36, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_60), VAR_87, VAR_37, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_59), VAR_88, VAR_40, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_60), VAR_89, VAR_41, 0);

  FUNC_5(((void*)0), FUNC_10(VAR_53), VAR_90, VAR_36, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_54), VAR_91, VAR_37, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_53), VAR_92, VAR_40, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_54), VAR_93, VAR_41, 0);


  FUNC_5(((void*)0), FUNC_10(VAR_51), VAR_94, VAR_36, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_52), VAR_95, VAR_37, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_51), VAR_96, VAR_40, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_52), VAR_97, VAR_41, 0);


  FUNC_5(((void*)0), FUNC_10(VAR_55), VAR_98, VAR_36, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_56), VAR_99, VAR_37, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_55), VAR_100, VAR_40, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_56), VAR_101, VAR_41, 0);

  if (VAR_132->dbg_level > 0) {

   FUNC_5("in7_front_l", FUNC_10(0xE), VAR_102, VAR_36, 0);
   FUNC_5("in7_front_r", FUNC_10(0xF), VAR_103, VAR_37, 0);
   FUNC_5("in7_rec_l", FUNC_10(0xE), VAR_104, VAR_40, 0);
   FUNC_5("in7_rec_r", FUNC_10(0xF), VAR_105, VAR_41, 0);
  }


  FUNC_3("master_front_l", VAR_36, VAR_107, VAR_117, 100);
  FUNC_3("master_front_r", VAR_37, VAR_108, VAR_118, 100);

  FUNC_4(VAR_36, VAR_107, VAR_129);
  FUNC_4(VAR_37, VAR_108, VAR_130);

  FUNC_4(VAR_36, VAR_107, VAR_125);
  FUNC_4(VAR_37, VAR_108, VAR_126);


  FUNC_3("master_rec_l", VAR_40, VAR_111, VAR_119, 100);
  FUNC_3("master_rec_r", VAR_41, VAR_112, VAR_120, 100);

  if (!(VAR_132->mch_disabled)) {






   FUNC_1(VAR_38);
   FUNC_1(VAR_39);
   FUNC_5(((void*)0), FUNC_7(2), VAR_68, VAR_38, 100);
   FUNC_5(((void*)0), FUNC_7(3), VAR_69, VAR_39, 100);

   FUNC_3(((void*)0), VAR_38, VAR_109, VAR_127, 100);
   FUNC_3(((void*)0), VAR_39, VAR_110, VAR_128, 100);
   if (VAR_132->has_51) {

    FUNC_1(VAR_35);
    FUNC_5(((void*)0), FUNC_7(4), VAR_70, VAR_35, 100);
    FUNC_3(((void*)0), VAR_35, VAR_106, VAR_123, 100);



    FUNC_6(1, VAR_1);
    FUNC_4(VAR_35, VAR_106, VAR_121);


    FUNC_1(VAR_44);
    FUNC_5(((void*)0), FUNC_7(5), VAR_71, VAR_44, 100);
    FUNC_3(((void*)0), VAR_44, VAR_115, VAR_124, 100);



    FUNC_6(1, VAR_1);
    FUNC_4(VAR_44, VAR_115, VAR_122);

   }
  } else {

   FUNC_3(((void*)0), VAR_36, VAR_109, VAR_127, 57);
   FUNC_3(((void*)0), VAR_37, VAR_110, VAR_128, 57);
  }
  if (VAR_132->mch_rec) {
   for(VAR_133 = (VAR_132->has_51 ? 2 : 0); VAR_133 < 2; VAR_133++)
    FUNC_2(FUNC_8(VAR_133), FUNC_0(0));


   for(VAR_133 = 0; VAR_133 < 4; VAR_133++)
    FUNC_2(FUNC_8(VAR_133+2), FUNC_7(VAR_133));


   for(VAR_133 = 0; VAR_133 < 9; VAR_133++)
    FUNC_2(FUNC_8(VAR_133+8), FUNC_10(VAR_133));


   VAR_132->dummy_gpr = FUNC_14(VAR_132->rm, 1);
   FUNC_16(VAR_132, VAR_132->dummy_gpr, 0xc0de0000);

   FUNC_2(FUNC_8(15), FUNC_9(VAR_132->dummy_gpr));
  }
 } else {
  FUNC_1(VAR_36);
  FUNC_1(VAR_37);
  FUNC_1(VAR_40);
  FUNC_1(VAR_41);






  FUNC_5(((void*)0), FUNC_7(0), VAR_64, VAR_36, 100);
  FUNC_5(((void*)0), FUNC_7(1), VAR_66, VAR_37, 100);
  FUNC_5(((void*)0), FUNC_7(0), VAR_65, VAR_40, 0);
  FUNC_5(((void*)0), FUNC_7(1), VAR_67, VAR_41, 0);


  FUNC_5(((void*)0), FUNC_10(VAR_2), VAR_74, VAR_36, 100);
  FUNC_5(((void*)0), FUNC_10(VAR_3), VAR_75, VAR_37, 100);
  FUNC_5(((void*)0), FUNC_10(VAR_2), VAR_76, VAR_40, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_3), VAR_77, VAR_41, 0);


  FUNC_5(((void*)0), FUNC_10(VAR_12), VAR_78, VAR_36, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_13), VAR_79, VAR_37, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_12), VAR_80, VAR_40, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_13), VAR_81, VAR_41, 0);



  FUNC_5(((void*)0), FUNC_10(VAR_8), VAR_82, VAR_36, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_9), VAR_83, VAR_37, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_8), VAR_84, VAR_40, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_9), VAR_85, VAR_41, 0);

  if (VAR_132->dbg_level > 0) {

   FUNC_5("in3_front_l", FUNC_10(0x6), VAR_86, VAR_36, 0);
   FUNC_5("in3_front_r", FUNC_10(0x7), VAR_87, VAR_37, 0);
   FUNC_5("in3_rec_l", FUNC_10(0x6), VAR_88, VAR_40, 0);
   FUNC_5("in3_rec_r", FUNC_10(0x7), VAR_89, VAR_41, 0);
  }


  FUNC_5(((void*)0), FUNC_10(VAR_6), VAR_90, VAR_36, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_7), VAR_91, VAR_37, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_6), VAR_92, VAR_40, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_7), VAR_93, VAR_41, 0);


  FUNC_5(((void*)0), FUNC_10(VAR_10), VAR_94, VAR_36, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_11), VAR_95, VAR_37, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_10), VAR_96, VAR_40, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_11), VAR_97, VAR_41, 0);


  FUNC_5(((void*)0), FUNC_10(VAR_4), VAR_98, VAR_36, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_5), VAR_99, VAR_37, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_4), VAR_100, VAR_40, 0);
  FUNC_5(((void*)0), FUNC_10(VAR_5), VAR_101, VAR_41, 0);

  if (VAR_132->dbg_level > 0) {

   FUNC_5("in7_front_l", FUNC_10(0xE), VAR_102, VAR_36, 0);
   FUNC_5("in7_front_r", FUNC_10(0xF), VAR_103, VAR_37, 0);
   FUNC_5("in7_rec_l", FUNC_10(0xE), VAR_104, VAR_40, 0);
   FUNC_5("in7_rec_r", FUNC_10(0xF), VAR_105, VAR_41, 0);
  }



  FUNC_3(((void*)0), VAR_36, VAR_107, VAR_17, 100);
  FUNC_3(((void*)0), VAR_37, VAR_108, VAR_18, 100);
  FUNC_4(VAR_36, VAR_107, VAR_25);
  FUNC_4(VAR_37, VAR_108, VAR_26);
  FUNC_4(VAR_36, VAR_107, VAR_32);
  FUNC_4(VAR_37, VAR_108, VAR_33);



  FUNC_3(((void*)0), VAR_40, VAR_111, VAR_14, 100);
  FUNC_3(((void*)0), VAR_41, VAR_112, VAR_15, 100);

  if (!(VAR_132->mch_disabled)) {






   FUNC_1(VAR_38);
   FUNC_1(VAR_39);
   FUNC_5(((void*)0), FUNC_7(2), VAR_68, VAR_38, 100);
   FUNC_5(((void*)0), FUNC_7(3), VAR_69, VAR_39, 100);

   FUNC_3(((void*)0), VAR_38, VAR_109, VAR_19, 100);
   FUNC_3(((void*)0), VAR_39, VAR_110, VAR_20, 100);
   FUNC_4(VAR_38, VAR_109, VAR_27);
   FUNC_4(VAR_39, VAR_110, VAR_28);


   FUNC_1(VAR_35);
   FUNC_5(((void*)0), FUNC_7(4), VAR_70, VAR_35, 100);
   FUNC_3(((void*)0), VAR_35, VAR_106, VAR_24, 100);
   FUNC_1(VAR_44);
   FUNC_5(((void*)0), FUNC_7(5), VAR_71, VAR_44, 100);
   FUNC_3(((void*)0), VAR_44, VAR_115, VAR_31, 100);







   if (VAR_132->has_71) {


    FUNC_1(VAR_42);
    FUNC_1(VAR_43);
    FUNC_5(((void*)0), FUNC_7(6), VAR_72, VAR_42, 100);
    FUNC_5(((void*)0), FUNC_7(7), VAR_73, VAR_43, 100);
    FUNC_3(((void*)0), VAR_42, VAR_113, VAR_21, 100);
    FUNC_3(((void*)0), VAR_43, VAR_114, VAR_22, 100);
    FUNC_4(VAR_42, VAR_113, VAR_29);
    FUNC_4(VAR_43, VAR_114, VAR_30);
   }
  } else {
   FUNC_4(VAR_36, VAR_107, VAR_19);
   FUNC_4(VAR_37, VAR_108, VAR_20);

   FUNC_4(VAR_36, VAR_107, VAR_27);
   FUNC_4(VAR_37, VAR_108, VAR_28);

   if (VAR_132->has_51) {

    FUNC_1(VAR_35);
    FUNC_12(VAR_132, VAR_63,
     FUNC_9(VAR_132->cache_gpr[VAR_35]),
     FUNC_9(VAR_132->cache_gpr[VAR_35]),
     FUNC_0(0xd),
     FUNC_9(VAR_132->cache_gpr[VAR_36]),
     &VAR_134);
    FUNC_12(VAR_132, VAR_63,
     FUNC_9(VAR_132->cache_gpr[VAR_35]),
     FUNC_9(VAR_132->cache_gpr[VAR_35]),
     FUNC_0(0xd),
     FUNC_9(VAR_132->cache_gpr[VAR_37]),
     &VAR_134);
    FUNC_3(((void*)0), VAR_35, VAR_106, VAR_24, 100);



    FUNC_6(1, VAR_1);
    FUNC_4(VAR_35, VAR_106, VAR_16);


    FUNC_1(VAR_44);
    FUNC_12(VAR_132, VAR_63,
     FUNC_9(VAR_132->cache_gpr[VAR_44]),
     FUNC_9(VAR_132->cache_gpr[VAR_44]),
     FUNC_0(0xd),
     FUNC_9(VAR_132->cache_gpr[VAR_36]),
     &VAR_134);
    FUNC_12(VAR_132, VAR_63,
     FUNC_9(VAR_132->cache_gpr[VAR_44]),
     FUNC_9(VAR_132->cache_gpr[VAR_44]),
     FUNC_0(0xd),
     FUNC_9(VAR_132->cache_gpr[VAR_37]),
     &VAR_134);


    FUNC_3(((void*)0), VAR_44, VAR_115, VAR_31, 100);



    FUNC_6(1, VAR_1);
    FUNC_4(VAR_44, VAR_115, VAR_23);
   }
  }
  if (VAR_132->mch_rec) {
   for(VAR_133 = 0; VAR_133 < 16; VAR_133++)
    FUNC_2(FUNC_8(VAR_133), FUNC_7(VAR_133));


   for(VAR_133 = 0; VAR_133 < 16; VAR_133++)
    FUNC_2(FUNC_8(VAR_133+16), FUNC_10(VAR_133));







  }
 }

 VAR_132->routing_code_end = VAR_134;


 if (VAR_132->is_emu10k1) {
  FUNC_15(VAR_132, 0, VAR_47, 0);
 } else {
  FUNC_15(VAR_132, 0, VAR_45, 0);
 }
}
