
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct snd_ac97 {int id; int scaps; unsigned short subsystem_vendor; unsigned short subsystem_device; unsigned short flags; unsigned short ext_id; unsigned short caps; int* regs; int num; int addr; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 size_t VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 unsigned short VAR_13 ;
 unsigned short VAR_14 ;
 unsigned short VAR_15 ;
 unsigned short VAR_16 ;
 unsigned short VAR_17 ;
 unsigned short VAR_18 ;
 unsigned short VAR_19 ;
 unsigned short VAR_20 ;
 unsigned short VAR_21 ;
 unsigned short VAR_22 ;
 unsigned short VAR_23 ;
 unsigned short VAR_24 ;
 unsigned short VAR_25 ;
 unsigned short VAR_26 ;
 unsigned short VAR_27 ;
 unsigned short VAR_28 ;
 unsigned short VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 int VAR_32 ;
 unsigned short VAR_33 ;
 unsigned short VAR_34 ;
 unsigned short VAR_35 ;
 unsigned short VAR_36 ;
 unsigned short VAR_37 ;
 unsigned short VAR_38 ;
 unsigned short VAR_39 ;
 unsigned short VAR_40 ;
 unsigned short VAR_41 ;
 unsigned short VAR_42 ;
 unsigned short VAR_43 ;
 unsigned short VAR_44 ;
 unsigned short VAR_45 ;
 unsigned short VAR_46 ;
 unsigned short VAR_47 ;
 unsigned short VAR_48 ;
 unsigned short VAR_49 ;
 unsigned short VAR_50 ;
 unsigned short VAR_51 ;
 unsigned short VAR_52 ;
 unsigned short VAR_53 ;
 int VAR_54 ;
 unsigned short VAR_55 ;
 unsigned short VAR_56 ;
 unsigned short VAR_57 ;
 unsigned short VAR_58 ;
 unsigned short VAR_59 ;
 unsigned short VAR_60 ;
 unsigned short VAR_61 ;
 unsigned short VAR_62 ;
 size_t VAR_63 ;
 size_t VAR_64 ;
 size_t VAR_65 ;
 size_t VAR_66 ;
 size_t VAR_67 ;
 size_t VAR_68 ;
 int VAR_69 ;
 size_t VAR_70 ;
 size_t VAR_71 ;
 size_t VAR_72 ;
 unsigned short VAR_73 ;
 unsigned short VAR_74 ;
 unsigned short VAR_75 ;
 unsigned short VAR_76 ;
 unsigned short VAR_77 ;
 unsigned short VAR_78 ;
 unsigned short VAR_79 ;
 unsigned short VAR_80 ;
 unsigned short VAR_81 ;
 unsigned short VAR_82 ;
 unsigned short VAR_83 ;
 unsigned short VAR_84 ;
 unsigned short VAR_85 ;
 unsigned short VAR_86 ;
 unsigned short VAR_87 ;
 unsigned short VAR_88 ;
 unsigned short VAR_89 ;
 unsigned short VAR_90 ;
 unsigned short VAR_91 ;
 unsigned short VAR_92 ;
 unsigned short VAR_93 ;
 unsigned short VAR_94 ;
 unsigned short VAR_95 ;
 size_t VAR_96 ;
 unsigned short VAR_97 ;
 unsigned short VAR_98 ;
 size_t VAR_99 ;
 size_t VAR_100 ;
 size_t VAR_101 ;
 size_t VAR_102 ;
 size_t VAR_103 ;
 size_t VAR_104 ;
 size_t VAR_105 ;
 int VAR_106 ;
 unsigned short VAR_107 ;
 unsigned short VAR_108 ;
 unsigned short VAR_109 ;
 unsigned short VAR_110 ;
 unsigned short VAR_111 ;
 unsigned short VAR_112 ;
 unsigned short VAR_113 ;
 unsigned short VAR_114 ;
 unsigned short VAR_115 ;
 unsigned short VAR_116 ;
 unsigned short VAR_117 ;
 size_t VAR_118 ;
 size_t VAR_119 ;
 int FUNC_0 (int *,int,char*,int ) ;
 int FUNC_1 (struct snd_ac97*,struct snd_info_buffer*) ;
 int FUNC_2 (struct snd_ac97*,size_t) ;
 unsigned short* VAR_120 ;
 int FUNC_3 (struct snd_ac97*,size_t,unsigned short,unsigned short) ;
 int FUNC_4 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_5(struct snd_ac97 *VAR_121, struct snd_info_buffer *VAR_122, int VAR_123)
{
 char VAR_124[64];
 unsigned short VAR_125, VAR_126, VAR_127, VAR_128;
 static const char *VAR_129[4] = { " SPDIF=3/4", " SPDIF=7/8", " SPDIF=6/9", " SPDIF=10/11" };
 static const char *VAR_130[4] = { " Rate=44.1kHz", " Rate=res", " Rate=48kHz", " Rate=32kHz" };
 static const char *VAR_131[4] = { " Rate=48kHz", " Rate=44.1kHz", " Rate=res", " Rate=res" };
 static const char *VAR_132[4] = { "10/11", "7/8", "reserved", "reserved" };

 FUNC_0(((void*)0), VAR_121->id, VAR_124, 0);
 FUNC_4(VAR_122, "%d-%d/%d: %s\n\n", VAR_121->addr, VAR_121->num, VAR_123, VAR_124);

 if ((VAR_121->scaps & VAR_106) == 0)
  goto __modem;

        FUNC_4(VAR_122, "PCI Subsys Vendor: 0x%04x\n",
             VAR_121->subsystem_vendor);
        FUNC_4(VAR_122, "PCI Subsys Device: 0x%04x\n\n",
                    VAR_121->subsystem_device);

 FUNC_4(VAR_122, "Flags: %x\n", VAR_121->flags);

 if ((VAR_121->ext_id & VAR_57) >= VAR_56) {
  VAR_125 = FUNC_2(VAR_121, VAR_70);
  FUNC_3(VAR_121, VAR_70,
         VAR_98, VAR_97);
  VAR_126 = FUNC_2(VAR_121, VAR_30);
  FUNC_4(VAR_122, "Revision         : 0x%02x\n", VAR_126 & 0xff);
  FUNC_4(VAR_122, "Compat. Class    : 0x%02x\n", (VAR_126 >> 8) & 0x1f);
  FUNC_4(VAR_122, "Subsys. Vendor ID: 0x%04x\n",
       FUNC_2(VAR_121, VAR_100));
  FUNC_4(VAR_122, "Subsys. ID       : 0x%04x\n\n",
       FUNC_2(VAR_121, VAR_99));
  FUNC_3(VAR_121, VAR_70,
         VAR_98, VAR_125 & VAR_98);
 }


 VAR_125 = VAR_121->caps;
 FUNC_4(VAR_122, "Capabilities     :%s%s%s%s%s%s\n",
          VAR_125 & VAR_25 ? " -dedicated MIC PCM IN channel-" : "",
      VAR_125 & VAR_28 ? " -reserved1-" : "",
      VAR_125 & VAR_23 ? " -bass & treble-" : "",
      VAR_125 & VAR_29 ? " -simulated stereo-" : "",
      VAR_125 & VAR_26 ? " -headphone out-" : "",
      VAR_125 & VAR_27 ? " -loudness-" : "");
 VAR_126 = VAR_121->caps & VAR_24;
 FUNC_4(VAR_122, "DAC resolution   : %s%s%s%s\n",
      VAR_126 == VAR_17 ? "16-bit" : "",
      VAR_126 == VAR_19 ? "18-bit" : "",
      VAR_126 == VAR_21 ? "20-bit" : "",
      VAR_126 == VAR_24 ? "???" : "");
 VAR_126 = VAR_121->caps & VAR_22;
 FUNC_4(VAR_122, "ADC resolution   : %s%s%s%s\n",
      VAR_126 == VAR_16 ? "16-bit" : "",
      VAR_126 == VAR_18 ? "18-bit" : "",
      VAR_126 == VAR_20 ? "20-bit" : "",
      VAR_126 == VAR_22 ? "???" : "");
 FUNC_4(VAR_122, "3D enhancement   : %s\n",
  VAR_120[(VAR_125 >> 10) & 0x1f]);
 FUNC_4(VAR_122, "\nCurrent setup\n");
 VAR_125 = FUNC_2(VAR_121, VAR_96);
 FUNC_4(VAR_122, "Mic gain         : %s [%s]\n", VAR_125 & 0x0040 ? "+20dB" : "+0dB", VAR_121->regs[VAR_96] & 0x0040 ? "+20dB" : "+0dB");
 VAR_125 = FUNC_2(VAR_121, VAR_67);
 FUNC_4(VAR_122, "POP path         : %s 3D\n"
      "Sim. stereo      : %s\n"
      "3D enhancement   : %s\n"
      "Loudness         : %s\n"
      "Mono output      : %s\n"
      "Mic select       : %s\n"
      "ADC/DAC loopback : %s\n",
      VAR_125 & 0x8000 ? "post" : "pre",
      VAR_125 & 0x4000 ? "on" : "off",
      VAR_125 & 0x2000 ? "on" : "off",
      VAR_125 & 0x1000 ? "on" : "off",
      VAR_125 & 0x0200 ? "Mic" : "MIX",
      VAR_125 & 0x0100 ? "Mic2" : "Mic1",
      VAR_125 & 0x0080 ? "on" : "off");
 if (VAR_121->ext_id & VAR_54)
  FUNC_4(VAR_122, "Double rate slots: %s\n",
       VAR_132[(VAR_125 >> 10) & 3]);

 VAR_127 = FUNC_2(VAR_121, VAR_63);
 if (VAR_127 == 0)
  goto __modem;

 FUNC_4(VAR_122, "Extended ID      : codec=%i rev=%i%s%s%s%s DSA=%i%s%s%s%s\n",
   (VAR_127 & VAR_48) >> VAR_49,
   (VAR_127 & VAR_57) >> VAR_58,
   VAR_127 & VAR_50 ? " AMAP" : "",
   VAR_127 & VAR_55 ? " LDAC" : "",
   VAR_127 & VAR_59 ? " SDAC" : "",
   VAR_127 & VAR_51 ? " CDAC" : "",
   (VAR_127 & VAR_52) >> VAR_53,
   VAR_127 & VAR_62 ? " VRM" : "",
   VAR_127 & VAR_60 ? " SPDIF" : "",
   VAR_127 & VAR_54 ? " DRA" : "",
   VAR_127 & VAR_61 ? " VRA" : "");
 VAR_125 = FUNC_2(VAR_121, VAR_66);
 FUNC_4(VAR_122, "Extended status  :%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",
   VAR_125 & VAR_40 ? " PRL" : "",
   VAR_125 & VAR_39 ? " PRK" : "",
   VAR_125 & VAR_38 ? " PRJ" : "",
   VAR_125 & VAR_37 ? " PRI" : "",
   VAR_125 & VAR_42 ? " SPCV" : "",
   VAR_125 & VAR_36 ? " MADC" : "",
   VAR_125 & VAR_35 ? " LDAC" : "",
   VAR_125 & VAR_41 ? " SDAC" : "",
   VAR_125 & VAR_33 ? " CDAC" : "",
   VAR_127 & VAR_60 ? VAR_129[(VAR_125 & VAR_44) >> VAR_45] : "",
   VAR_125 & VAR_47 ? " VRM" : "",
   VAR_125 & VAR_43 ? " SPDIF" : "",
   VAR_125 & VAR_34 ? " DRA" : "",
   VAR_125 & VAR_46 ? " VRA" : "");
 if (VAR_127 & VAR_61) {
  VAR_125 = FUNC_2(VAR_121, VAR_101);
  FUNC_4(VAR_122, "PCM front DAC    : %iHz\n", VAR_125);
  if (VAR_127 & VAR_59) {
   VAR_125 = FUNC_2(VAR_121, VAR_105);
   FUNC_4(VAR_122, "PCM Surr DAC     : %iHz\n", VAR_125);
  }
  if (VAR_127 & VAR_55) {
   VAR_125 = FUNC_2(VAR_121, VAR_102);
   FUNC_4(VAR_122, "PCM LFE DAC      : %iHz\n", VAR_125);
  }
  VAR_125 = FUNC_2(VAR_121, VAR_103);
  FUNC_4(VAR_122, "PCM ADC          : %iHz\n", VAR_125);
 }
 if (VAR_127 & VAR_62) {
  VAR_125 = FUNC_2(VAR_121, VAR_104);
  FUNC_4(VAR_122, "PCM MIC ADC      : %iHz\n", VAR_125);
 }
 if ((VAR_127 & VAR_60) || (VAR_121->flags & VAR_32) ||
     (VAR_121->id == VAR_69)) {
         if (VAR_121->flags & VAR_32)
   VAR_125 = FUNC_2(VAR_121, VAR_31);
  else if (VAR_121->id == VAR_69) {
   VAR_125 = FUNC_2(VAR_121, VAR_119);
   VAR_125 = 0x2000 | (VAR_125 & 0xff00) >> 4 | (VAR_125 & 0x38) >> 2;
  } else
   VAR_125 = FUNC_2(VAR_121, VAR_118);

  FUNC_4(VAR_122, "SPDIF Control    :%s%s%s%s Category=0x%x Generation=%i%s%s%s\n",
   VAR_125 & VAR_114 ? " PRO" : " Consumer",
   VAR_125 & VAR_112 ? " Non-audio" : " PCM",
   VAR_125 & VAR_109 ? "" : " Copyright",
   VAR_125 & VAR_113 ? " Preemph50/15" : "",
   (VAR_125 & VAR_107) >> VAR_108,
   (VAR_125 & VAR_111) >> 11,
   (VAR_121->flags & VAR_32) ?
       VAR_131[(VAR_125 & VAR_115) >> VAR_116] :
       VAR_130[(VAR_125 & VAR_115) >> VAR_116],
   (VAR_121->flags & VAR_32) ?
       (VAR_125 & VAR_110 ? " Validity" : "") :
       (VAR_125 & VAR_110 ? " DRS" : ""),
   (VAR_121->flags & VAR_32) ?
       (VAR_125 & VAR_117 ? " Enabled" : "") :
       (VAR_125 & VAR_117 ? " Validity" : ""));

  if ((VAR_121->id & 0xfffffff0) == 0x414c4720 &&
      (FUNC_2(VAR_121, VAR_2) & 0x01)) {
   VAR_125 = FUNC_2(VAR_121, VAR_12);
   if (VAR_125 & VAR_4) {
    VAR_125 = FUNC_2(VAR_121, VAR_11);
    FUNC_4(VAR_122, "SPDIF In Status  :%s%s%s%s Category=0x%x Generation=%i",
         VAR_125 & VAR_10 ? " PRO" : " Consumer",
         VAR_125 & VAR_8 ? " Non-audio" : " PCM",
         VAR_125 & VAR_6 ? "" : " Copyright",
         VAR_125 & VAR_9 ? " Preemph50/15" : "",
         (VAR_125 & VAR_0) >> VAR_1,
         (VAR_125 & VAR_7) >> 15);
    VAR_125 = FUNC_2(VAR_121, VAR_12);
    FUNC_4(VAR_122, "%s Accuracy=%i%s%s\n",
         VAR_130[(VAR_125 & VAR_13) >> VAR_14],
         (VAR_125 & VAR_3) >> VAR_5,
         (VAR_125 & VAR_4 ? " Locked" : " Unlocked"),
         (VAR_125 & VAR_15 ? " Validity?" : ""));
   } else {
    FUNC_4(VAR_122, "SPDIF In Status  : Not Locked\n");
   }
  }
 }
 if ((VAR_121->ext_id & VAR_57) >= VAR_56) {
  VAR_125 = FUNC_2(VAR_121, VAR_70);
  FUNC_3(VAR_121, VAR_70,
         VAR_98, VAR_97);
  FUNC_1(VAR_121, VAR_122);
  FUNC_3(VAR_121, VAR_70,
         VAR_98, VAR_125 & VAR_98);
 }


      __modem:
 VAR_128 = FUNC_2(VAR_121, VAR_64);
 if (VAR_128 == 0)
  return;

 FUNC_4(VAR_122, "Extended modem ID: codec=%i%s%s%s%s%s\n",
   (VAR_128 & VAR_89) >> VAR_90,
   VAR_128 & VAR_92 ? " CID2" : "",
   VAR_128 & VAR_91 ? " CID1" : "",
   VAR_128 & VAR_93 ? " HSET" : "",
   VAR_128 & VAR_95 ? " LIN2" : "",
   VAR_128 & VAR_94 ? " LIN1" : "");
 VAR_125 = FUNC_2(VAR_121, VAR_65);
 FUNC_4(VAR_122, "Modem status     :%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",
   VAR_125 & VAR_77 ? " GPIO" : "",
   VAR_125 & VAR_80 ? " MREF" : "",
   VAR_125 & VAR_73 ? " ADC1" : "",
   VAR_125 & VAR_75 ? " DAC1" : "",
   VAR_125 & VAR_74 ? " ADC2" : "",
   VAR_125 & VAR_76 ? " DAC2" : "",
   VAR_125 & VAR_78 ? " HADC" : "",
   VAR_125 & VAR_79 ? " HDAC" : "",
   VAR_125 & VAR_81 ? " PRA(GPIO)" : "",
   VAR_125 & VAR_82 ? " PRB(res)" : "",
   VAR_125 & VAR_83 ? " PRC(ADC1)" : "",
   VAR_125 & VAR_84 ? " PRD(DAC1)" : "",
   VAR_125 & VAR_85 ? " PRE(ADC2)" : "",
   VAR_125 & VAR_86 ? " PRF(DAC2)" : "",
   VAR_125 & VAR_87 ? " PRG(HADC)" : "",
   VAR_125 & VAR_88 ? " PRH(HDAC)" : "");
 if (VAR_128 & VAR_94) {
  VAR_125 = FUNC_2(VAR_121, VAR_71);
  FUNC_4(VAR_122, "Line1 rate       : %iHz\n", VAR_125);
 }
 if (VAR_128 & VAR_95) {
  VAR_125 = FUNC_2(VAR_121, VAR_72);
  FUNC_4(VAR_122, "Line2 rate       : %iHz\n", VAR_125);
 }
 if (VAR_128 & VAR_93) {
  VAR_125 = FUNC_2(VAR_121, VAR_68);
  FUNC_4(VAR_122, "Headset rate     : %iHz\n", VAR_125);
 }
}
