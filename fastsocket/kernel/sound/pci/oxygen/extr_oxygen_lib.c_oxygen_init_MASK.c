
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int function_flags; int misc_flags; int dac_i2s_format; int device_config; int adc_i2s_format; int adc_mclks; int dac_mclks; int dac_volume_min; } ;
struct oxygen {int dac_routing; int dac_mute; int spdif_playback_enable; int spdif_bits; int spdif_pcm_bits; int has_ac97_0; int has_ac97_1; TYPE_1__ model; int * dac_volume; } ;


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
 unsigned int VAR_50 ;
 unsigned int VAR_51 ;
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
 int FUNC_0 (int ) ;
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
 int VAR_131 ;
 int VAR_132 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct oxygen*,int ,int ,int ) ;
 int FUNC_3 (struct oxygen*,int,int,int) ;
 int FUNC_4 (struct oxygen*,int ,int) ;
 int FUNC_5 (struct oxygen*,int ,int ) ;
 unsigned int FUNC_6 (struct oxygen*,int ) ;
 int FUNC_7 (struct oxygen*,int ) ;
 int FUNC_8 (struct oxygen*,int ,int ) ;
 int FUNC_9 (struct oxygen*,int ,int) ;
 int FUNC_10 (struct oxygen*,int ,int ) ;
 int FUNC_11 (struct oxygen*,int ,int) ;
 int FUNC_12 (struct oxygen*,int ,int) ;
 int FUNC_13 (struct oxygen*,int ,int,int) ;
 int FUNC_14 (struct oxygen*,int ,int) ;
 int FUNC_15 (struct oxygen*,int ,int,int) ;
 int FUNC_16 (struct oxygen*,int,int ,int) ;

__attribute__((used)) static void FUNC_17(struct oxygen *VAR_133)
{
 unsigned int VAR_134;

 VAR_133->dac_routing = 1;
 for (VAR_134 = 0; VAR_134 < 8; ++VAR_134)
  VAR_133->dac_volume[VAR_134] = VAR_133->model.dac_volume_min;
 VAR_133->dac_mute = 1;
 VAR_133->spdif_playback_enable = 1;
 VAR_133->spdif_bits = VAR_118 | VAR_127 |
  (VAR_42 << VAR_119);
 VAR_133->spdif_pcm_bits = VAR_133->spdif_bits;

 if (!(FUNC_7(VAR_133, VAR_116) & VAR_117))
  FUNC_10(VAR_133, VAR_85,
     VAR_87);

 VAR_134 = FUNC_6(VAR_133, VAR_52);
 VAR_133->has_ac97_0 = (VAR_134 & VAR_50) != 0;
 VAR_133->has_ac97_1 = (VAR_134 & VAR_51) != 0;

 FUNC_15(VAR_133, VAR_70,
        VAR_73 |
        VAR_133->model.function_flags,
        VAR_73 |
        VAR_71 |
        VAR_72);
 FUNC_14(VAR_133, VAR_68, 0);
 FUNC_14(VAR_133, VAR_67, 0);
 FUNC_14(VAR_133, VAR_95,
        VAR_96 |
        VAR_65 |
        VAR_66);
 FUNC_11(VAR_133, VAR_84, 0);
 FUNC_15(VAR_133, VAR_85,
        VAR_133->model.misc_flags,
        VAR_91 |
        VAR_90 |
        VAR_89 |
        VAR_88 |
        VAR_86);
 FUNC_14(VAR_133, VAR_111,
        (VAR_69 << VAR_112) |
        (VAR_69 << VAR_113) |
        (VAR_69 << VAR_114));
 FUNC_14(VAR_133, VAR_101,
        (VAR_69 << VAR_121) |
        (VAR_69 << VAR_94));
 FUNC_14(VAR_133, VAR_108, VAR_109);
 FUNC_11(VAR_133, VAR_82,
         VAR_105 |
         VAR_133->model.dac_i2s_format |
         FUNC_0(VAR_133->model.dac_mclks) |
         VAR_78 |
         VAR_81 |
         VAR_77);
 if (VAR_133->model.device_config & VAR_21)
  FUNC_11(VAR_133, VAR_76,
          VAR_105 |
          VAR_133->model.adc_i2s_format |
          FUNC_0(VAR_133->model.adc_mclks) |
          VAR_78 |
          VAR_81 |
          VAR_77);
 else
  FUNC_11(VAR_133, VAR_76,
          VAR_81 |
          VAR_83);
 if (VAR_133->model.device_config & (VAR_22 |
      VAR_24))
  FUNC_11(VAR_133, VAR_79,
          VAR_105 |
          VAR_133->model.adc_i2s_format |
          FUNC_0(VAR_133->model.adc_mclks) |
          VAR_78 |
          VAR_81 |
          VAR_77);
 else
  FUNC_11(VAR_133, VAR_79,
          VAR_81 |
          VAR_83);
 FUNC_11(VAR_133, VAR_80,
         VAR_81 |
         VAR_83);
 FUNC_4(VAR_133, VAR_120,
       VAR_129 |
       VAR_126);
 if (VAR_133->model.device_config & VAR_23)
  FUNC_13(VAR_133, VAR_120,
          VAR_131 |
          VAR_124 |
          VAR_130 |
          VAR_125 |
          VAR_122,
          VAR_131 |
          VAR_124 |
          VAR_130 |
          VAR_132 |
          VAR_125 |
          VAR_123);
 else
  FUNC_4(VAR_133, VAR_120,
        VAR_131 |
        VAR_124 |
        VAR_130);
 FUNC_12(VAR_133, VAR_128, VAR_133->spdif_bits);
 FUNC_11(VAR_133, VAR_43,
         VAR_45 |
         VAR_44 |
         VAR_46);
 FUNC_5(VAR_133, VAR_92, VAR_93);
 FUNC_14(VAR_133, VAR_75, 0);
 FUNC_11(VAR_133, VAR_74, 0);
 FUNC_11(VAR_133, VAR_103,
         VAR_102 |
         VAR_104 |
         (0 << VAR_97) |
         (1 << VAR_98) |
         (2 << VAR_99) |
         (3 << VAR_100));
 FUNC_14(VAR_133, VAR_115,
        VAR_106 |
        VAR_107 |
        VAR_110);
 FUNC_14(VAR_133, VAR_59, 0);
 FUNC_14(VAR_133, VAR_64,
        (0 << VAR_60) |
        (1 << VAR_61) |
        (2 << VAR_62) |
        (3 << VAR_63));

 if (VAR_133->has_ac97_0 | VAR_133->has_ac97_1)
  FUNC_14(VAR_133, VAR_53,
         VAR_54 |
         VAR_55);
 else
  FUNC_14(VAR_133, VAR_53, 0);
 FUNC_12(VAR_133, VAR_58, 0);
 FUNC_12(VAR_133, VAR_56, 0);
 if (!(VAR_133->has_ac97_0 | VAR_133->has_ac97_1))
  FUNC_8(VAR_133, VAR_52,
      VAR_47);
 if (!VAR_133->has_ac97_0) {
  FUNC_8(VAR_133, VAR_52,
      VAR_57);
 } else {
  FUNC_16(VAR_133, 0, VAR_18, 0);
  FUNC_1(1);
  FUNC_3(VAR_133, 0, VAR_30,
         VAR_28 | VAR_29);
  FUNC_3(VAR_133, 0, VAR_37,
         VAR_25 | VAR_41 |
         VAR_36 | VAR_38);
  FUNC_3(VAR_133, 0, VAR_33,
         VAR_39 | VAR_26 |
         VAR_40 | VAR_27 |
         VAR_35 | VAR_34);
  FUNC_16(VAR_133, 0, VAR_9, 0x0000);
  FUNC_16(VAR_133, 0, VAR_12, 0x8000);
  FUNC_16(VAR_133, 0, VAR_10, 0x8808);
  FUNC_16(VAR_133, 0, VAR_8, 0x0808);
  FUNC_16(VAR_133, 0, VAR_1, 0x8808);
  FUNC_16(VAR_133, 0, VAR_20, 0x8808);
  FUNC_16(VAR_133, 0, VAR_0, 0x8808);
  FUNC_16(VAR_133, 0, VAR_16, 0x8000);
  FUNC_16(VAR_133, 0, VAR_2, 0x8080);
  FUNC_16(VAR_133, 0, VAR_19, 0x8080);
  FUNC_2(VAR_133, 0, VAR_31,
           VAR_32);

  FUNC_3(VAR_133, 0, VAR_15,
         VAR_13 | VAR_14);
  FUNC_3(VAR_133, 0, VAR_6,
         VAR_3 | VAR_4 | VAR_5);
 }
 if (VAR_133->has_ac97_1) {
  FUNC_9(VAR_133, VAR_58,
      VAR_48 |
      VAR_49);
  FUNC_16(VAR_133, 1, VAR_18, 0);
  FUNC_1(1);
  FUNC_16(VAR_133, 1, VAR_9, 0x0000);
  FUNC_16(VAR_133, 1, VAR_7, 0x8000);
  FUNC_16(VAR_133, 1, VAR_12, 0x8000);
  FUNC_16(VAR_133, 1, VAR_10, 0x8808);
  FUNC_16(VAR_133, 1, VAR_8, 0x8808);
  FUNC_16(VAR_133, 1, VAR_1, 0x8808);
  FUNC_16(VAR_133, 1, VAR_20, 0x8808);
  FUNC_16(VAR_133, 1, VAR_0, 0x8808);
  FUNC_16(VAR_133, 1, VAR_11, 0x0808);
  FUNC_16(VAR_133, 1, VAR_17, 0x0000);
  FUNC_16(VAR_133, 1, VAR_16, 0x0000);
  FUNC_3(VAR_133, 1, 0x6a, 0x0040);
 }
}
