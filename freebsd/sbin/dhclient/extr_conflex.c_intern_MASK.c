
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
 int FUNC_0 (char) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char) ;

__attribute__((used)) static int
FUNC_4(char *VAR_76, int VAR_77)
{
 if (!FUNC_0(VAR_76[0]))
  return (VAR_77);

 switch (FUNC_3(VAR_76[0])) {
 case 'a':
  if (!FUNC_1(VAR_76 + 1, "lways-reply-rfc1048"))
   return (VAR_3);
  if (!FUNC_1(VAR_76 + 1, "ppend"))
   return (VAR_4);
  if (!FUNC_1(VAR_76 + 1, "llow"))
   return (VAR_2);
  if (!FUNC_1(VAR_76 + 1, "lias"))
   return (VAR_1);
  if (!FUNC_1(VAR_76 + 1, "bandoned"))
   return (VAR_0);
  if (!FUNC_1(VAR_76 + 1, "uthoritative"))
   return (VAR_5);
  break;
 case 'b':
  if (!FUNC_1(VAR_76 + 1, "ackoff-cutoff"))
   return (VAR_6);
  if (!FUNC_1(VAR_76 + 1, "ootp"))
   return (VAR_8);
  if (!FUNC_1(VAR_76 + 1, "ooting"))
   return (VAR_7);
  if (!FUNC_1(VAR_76 + 1, "oot-unknown-clients"))
   return (VAR_9);
  break;
 case 'c':
  if (!FUNC_1(VAR_76 + 1, "lass"))
   return (VAR_11);
  if (!FUNC_1(VAR_76 + 1, "iaddr"))
   return (VAR_10);
  if (!FUNC_1(VAR_76 + 1, "lient-identifier"))
   return (VAR_13);
  if (!FUNC_1(VAR_76 + 1, "lient-hostname"))
   return (VAR_12);
  break;
 case 'd':
  if (!FUNC_1(VAR_76 + 1, "omain"))
   return (VAR_17);
  if (!FUNC_1(VAR_76 + 1, "eny"))
   return (VAR_16);
  if (!FUNC_2(VAR_76 + 1, "efault", 6)) {
   if (!VAR_76[7])
    return (VAR_14);
   if (!FUNC_1(VAR_76 + 7, "-lease-time"))
    return (VAR_15);
   break;
  }
  if (!FUNC_2(VAR_76 + 1, "ynamic-bootp", 12)) {
   if (!VAR_76[13])
    return (VAR_18);
   if (!FUNC_1(VAR_76 + 13, "-lease-cutoff"))
    return (VAR_19);
   if (!FUNC_1(VAR_76 + 13, "-lease-length"))
    return (VAR_20);
   break;
  }
  break;
 case 'e':
  if (!FUNC_1(VAR_76 + 1, "thernet"))
   return (VAR_22);
  if (!FUNC_1(VAR_76 + 1, "nds"))
   return (VAR_21);
  if (!FUNC_1(VAR_76 + 1, "xpire"))
   return (VAR_23);
  break;
 case 'f':
  if (!FUNC_1(VAR_76 + 1, "ilename"))
   return (VAR_25);
  if (!FUNC_1(VAR_76 + 1, "ixed-address"))
   return (VAR_26);
  if (!FUNC_1(VAR_76 + 1, "ddi"))
   return (VAR_24);
  break;
 case 'g':
  if (!FUNC_1(VAR_76 + 1, "iaddr"))
   return (VAR_28);
  if (!FUNC_1(VAR_76 + 1, "roup"))
   return (VAR_29);
  if (!FUNC_1(VAR_76 + 1, "et-lease-hostnames"))
   return (VAR_27);
  break;
 case 'h':
  if (!FUNC_1(VAR_76 + 1, "ost"))
   return (VAR_31);
  if (!FUNC_1(VAR_76 + 1, "ardware"))
   return (VAR_30);
  if (!FUNC_1(VAR_76 + 1, "ostname"))
   return (VAR_32);
  break;
 case 'i':
  if (!FUNC_1(VAR_76 + 1, "nitial-interval"))
   return (VAR_33);
  if (!FUNC_1(VAR_76 + 1, "nterface"))
   return (VAR_34);
  break;
 case 'l':
  if (!FUNC_1(VAR_76 + 1, "ease"))
   return (VAR_35);
  break;
 case 'm':
  if (!FUNC_1(VAR_76 + 1, "ax-lease-time"))
   return (VAR_36);
  if (!FUNC_2(VAR_76 + 1, "edi", 3)) {
   if (!FUNC_1(VAR_76 + 4, "a"))
    return (VAR_37);
   if (!FUNC_1(VAR_76 + 4, "um"))
    return (VAR_38);
   break;
  }
  break;
 case 'n':
  if (!FUNC_1(VAR_76 + 1, "ameserver"))
   return (VAR_39);
  if (!FUNC_1(VAR_76 + 1, "etmask"))
   return (VAR_40);
  if (!FUNC_1(VAR_76 + 1, "ext-server"))
   return (VAR_41);
  if (!FUNC_1(VAR_76 + 1, "ot"))
   return (VAR_67);
  break;
 case 'o':
  if (!FUNC_1(VAR_76 + 1, "ption"))
   return (VAR_43);
  if (!FUNC_1(VAR_76 + 1, "ne-lease-per-client"))
   return (VAR_42);
  break;
 case 'p':
  if (!FUNC_1(VAR_76 + 1, "repend"))
   return (VAR_45);
  if (!FUNC_1(VAR_76 + 1, "acket"))
   return (VAR_44);
  break;
 case 'r':
  if (!FUNC_1(VAR_76 + 1, "ange"))
   return (VAR_46);
  if (!FUNC_1(VAR_76 + 1, "equest"))
   return (VAR_51);
  if (!FUNC_1(VAR_76 + 1, "equire"))
   return (VAR_52);
  if (!FUNC_1(VAR_76 + 1, "etry"))
   return (VAR_53);
  if (!FUNC_1(VAR_76 + 1, "enew"))
   return (VAR_50);
  if (!FUNC_1(VAR_76 + 1, "ebind"))
   return (VAR_47);
  if (!FUNC_1(VAR_76 + 1, "eboot"))
   return (VAR_48);
  if (!FUNC_1(VAR_76 + 1, "eject"))
   return (VAR_49);
  break;
 case 's':
  if (!FUNC_1(VAR_76 + 1, "earch"))
   return (VAR_55);
  if (!FUNC_1(VAR_76 + 1, "tarts"))
   return (VAR_62);
  if (!FUNC_1(VAR_76 + 1, "iaddr"))
   return (VAR_61);
  if (!FUNC_1(VAR_76 + 1, "ubnet"))
   return (VAR_63);
  if (!FUNC_1(VAR_76 + 1, "hared-network"))
   return (VAR_60);
  if (!FUNC_1(VAR_76 + 1, "erver-name"))
   return (VAR_59);
  if (!FUNC_1(VAR_76 + 1, "erver-identifier"))
   return (VAR_58);
  if (!FUNC_1(VAR_76 + 1, "elect-timeout"))
   return (VAR_56);
  if (!FUNC_1(VAR_76 + 1, "end"))
   return (VAR_57);
  if (!FUNC_1(VAR_76 + 1, "cript"))
   return (VAR_54);
  if (!FUNC_1(VAR_76 + 1, "upersede"))
   return (VAR_64);
  break;
 case 't':
  if (!FUNC_1(VAR_76 + 1, "imestamp"))
   return (VAR_66);
  if (!FUNC_1(VAR_76 + 1, "imeout"))
   return (VAR_65);
  if (!FUNC_1(VAR_76 + 1, "oken-ring"))
   return (VAR_68);
  break;
 case 'u':
  if (!FUNC_2(VAR_76 + 1, "se", 2)) {
   if (!FUNC_1(VAR_76 + 3, "r-class"))
    return (VAR_71);
   if (!FUNC_1(VAR_76 + 3, "-host-decl-names"))
    return (VAR_72);
   if (!FUNC_1(VAR_76 + 3,
      "-lease-addr-for-default-route"))
    return (VAR_73);
   break;
  }
  if (!FUNC_1(VAR_76 + 1, "id"))
   return (VAR_69);
  if (!FUNC_1(VAR_76 + 1, "nknown-clients"))
   return (VAR_70);
  break;
 case 'v':
  if (!FUNC_1(VAR_76 + 1, "endor-class"))
   return (VAR_74);
  break;
 case 'y':
  if (!FUNC_1(VAR_76 + 1, "iaddr"))
   return (VAR_75);
  break;
 }
 return (VAR_77);
}
