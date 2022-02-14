
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 scalar_t__ VAR_30 ;
 char* VAR_31 ;
 char* FUNC_0 (long) ;
 scalar_t__ FUNC_1 (int,int ,...) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3 (int VAR_32)
{
 char VAR_33 [8];
 char VAR_34;
 int VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42, VAR_43;
 int VAR_44, VAR_45, VAR_46, VAR_47, VAR_48, VAR_49, VAR_50, VAR_51;
 int VAR_52, VAR_53, VAR_54, VAR_55, VAR_56;
 int VAR_57, VAR_58, VAR_59;
 long VAR_60, VAR_61, VAR_62;
 int VAR_63, VAR_64, VAR_65, VAR_66, VAR_67;
 int VAR_68, VAR_69, VAR_70, VAR_71, VAR_72;
 int VAR_73, VAR_74, VAR_75, VAR_76;
 int VAR_77, VAR_78, VAR_79, VAR_80;
 int VAR_81, VAR_82, VAR_83, VAR_84;
 int VAR_85, VAR_86, VAR_87, VAR_88, VAR_89;
 int VAR_90, VAR_91, VAR_92;

 VAR_63 = FUNC_1 (VAR_32, VAR_22, &VAR_33) >= 0;
 VAR_79 = FUNC_1 (VAR_32, VAR_3, &VAR_34) >= 0;
 VAR_64 = FUNC_1 (VAR_32, VAR_0, &VAR_60) >= 0;
 VAR_65 = FUNC_1 (VAR_32, VAR_16, &VAR_35) >= 0;
 VAR_68 = FUNC_1 (VAR_32, VAR_8, &VAR_36) >= 0;
 VAR_69 = FUNC_1 (VAR_32, VAR_19, &VAR_37) >= 0;
 VAR_70 = FUNC_1 (VAR_32, VAR_10, &VAR_38) >= 0;
 VAR_81 = FUNC_1 (VAR_32, VAR_11, &VAR_48) >= 0;
 VAR_82 = FUNC_1 (VAR_32, VAR_12, &VAR_49) >= 0;
 VAR_71 = FUNC_1 (VAR_32, VAR_4, &VAR_39) >= 0;
 VAR_73 = FUNC_1 (VAR_32, VAR_27, &VAR_61) >= 0;
 VAR_74 = FUNC_1 (VAR_32, VAR_26, &VAR_62) >= 0;
 VAR_75 = FUNC_1 (VAR_32, VAR_9, &VAR_40) >= 0;
 VAR_72 = FUNC_1 (VAR_32, VAR_20, &VAR_41) >= 0;
 VAR_83 = FUNC_1 (VAR_32, VAR_28, &VAR_50) >= 0;
 VAR_84 = FUNC_1 (VAR_32, VAR_17, &VAR_51) >= 0;
 VAR_66 = FUNC_1 (VAR_32, VAR_29, &VAR_42) >= 0;
 VAR_67 = FUNC_1 (VAR_32, VAR_5, &VAR_43) >= 0;
 VAR_88 = FUNC_1 (VAR_32, VAR_14, &VAR_55) >= 0;
 VAR_76 = FUNC_1 (VAR_32, VAR_15, &VAR_44) >= 0;
 VAR_77 = FUNC_1 (VAR_32, VAR_13, &VAR_45) >= 0;
 VAR_78 = FUNC_1 (VAR_32, VAR_6, &VAR_46) >= 0;
 VAR_80 = FUNC_1 (VAR_32, VAR_21, &VAR_47) >= 0;
 VAR_85 = FUNC_1 (VAR_32, VAR_1, &VAR_52) >= 0;
 VAR_86 = FUNC_1 (VAR_32, VAR_7, &VAR_53) >= 0;
 VAR_87 = FUNC_1 (VAR_32, VAR_25, &VAR_54) >= 0;
 VAR_90 = FUNC_1 (VAR_32, VAR_2, &VAR_57) >= 0;
 VAR_91 = FUNC_1 (VAR_32, VAR_23, &VAR_58) >= 0;
 VAR_89 = FUNC_1 (VAR_32, VAR_18, &VAR_56) >= 0;
 VAR_92 = FUNC_1 (VAR_32, VAR_24, &VAR_59) >= 0;

 FUNC_2 ("%s", VAR_31);
 if (VAR_80)
  switch (VAR_47) {
  case 0: FUNC_2 (" (rs232)"); break;
  case 1: FUNC_2 (" (v35)"); break;
  case 2: FUNC_2 (" (rs530)"); break;
  }
 else if (VAR_85)
  switch (VAR_52) {
  case 0: FUNC_2 (" (rs232)"); break;
  case 1: FUNC_2 (" (v35)"); break;
  case 2: FUNC_2 (" (rs530)"); break;
  case 3: FUNC_2 (" (x21)"); break;
  case 4: FUNC_2 (" (rs485)"); break;
  case 9: FUNC_2 (" (no cable)"); break;
  }
 if (VAR_78 && VAR_46)
  FUNC_2 (" debug=%d", VAR_46);
 if (VAR_63 && *VAR_33)
  FUNC_2 (" %.8s", VAR_33);
 else
  FUNC_2 (" idle");
 if (VAR_90)
  FUNC_2 (" cablen=%s", VAR_57 ? "on" : "off");
 if (VAR_77)
  FUNC_2 (" keepalive=%s", VAR_45 ? "on" : "off");

 if (VAR_79)
  switch (VAR_34) {
  case 'a' : FUNC_2 (" cfg=A"); break;
  case 'b' : FUNC_2 (" cfg=B"); break;
  case 'c' : FUNC_2 (" cfg=C"); break;
  case 'd' : FUNC_2 (" cfg=D"); break;
  default : FUNC_2 (" cfg=unknown");
  }
 if (VAR_86)
  FUNC_2 (" dir=%d", VAR_53);

 if (VAR_64) {
  if (VAR_60)
   FUNC_2 (" %ld", VAR_60);
  else
   FUNC_2 (" extclock");
 }
 if (VAR_89)
  FUNC_2 (" mtu=%d", VAR_56);

 if (VAR_30 && VAR_92)
  FUNC_2 (" rqlen=%d", VAR_59);

 if (VAR_71)
  switch (VAR_39) {
  case 133: FUNC_2 (" syn=int"); break;
  case 132: FUNC_2 (" syn=rcv"); break;
  case 131: FUNC_2 (" syn=rcv0"); break;
  case 130: FUNC_2 (" syn=rcv1"); break;
  case 129: FUNC_2 (" syn=rcv2"); break;
  case 128: FUNC_2 (" syn=rcv3"); break;
  default: FUNC_2 (" syn=%d", VAR_39); break;
  }

 if (VAR_68)
  FUNC_2 (" dpll=%s", VAR_36 ? "on" : "off");
 if (VAR_69)
  FUNC_2 (" nrzi=%s", VAR_37 ? "on" : "off");
 if (VAR_70)
  FUNC_2 (" invclk=%s", VAR_38 ? "on" : "off");
 if (VAR_81)
  FUNC_2 (" invrclk=%s", VAR_48 ? "on" : "off");
 if (VAR_82)
  FUNC_2 (" invtclk=%s", VAR_49 ? "on" : "off");
 if (VAR_83)
  FUNC_2 (" unfram=%s", VAR_50 ? "on" : "off");
 if (VAR_66)
  FUNC_2 (" use16=%s", VAR_42 ? "on" : "off");
 if (VAR_30) {
  if (VAR_67)
   FUNC_2 (" crc4=%s", VAR_43 ? "on" : "off");
  if (VAR_75)
   FUNC_2 (" higain=%s", VAR_40 ? "on" : "off");
  if (VAR_84)
   FUNC_2 (" monitor=%s", VAR_51 ? "on" : "off");
  if (VAR_72)
   FUNC_2 (" phony=%s", VAR_41 ? "on" : "off");
  if (VAR_87)
   FUNC_2 (" scrambler=%s", VAR_54 ? "on" : "off");
  if (VAR_65)
   FUNC_2 (" loop=%s", VAR_35 ? "on" : "off");
  if (VAR_91)
   FUNC_2 (" rloop=%s", VAR_58 ? "on" : "off");
  if (VAR_88)
   FUNC_2 (" ami=%s", VAR_55 ? "on" : "off");
 }
 if (VAR_73)
  FUNC_2 (" ts=%s", FUNC_0 (VAR_61));
 if (VAR_74)
  FUNC_2 (" pass=%s", FUNC_0 (VAR_62));
 if (VAR_76)
  FUNC_2 (" (level=-%.1fdB)", VAR_44 / 10.0);
 FUNC_2 ("\n");
}
