
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct bge_softc {int bge_mfw_flags; scalar_t__ bge_asicrev; int bge_flags; scalar_t__ bge_chipid; int bge_expcap; int bge_pcixcap; int bge_msicap; int bge_expmrq; int bge_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct bge_softc*,int ,int ) ;
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
 scalar_t__ FUNC_1 (struct bge_softc*) ;
 scalar_t__ FUNC_2 (struct bge_softc*) ;
 int FUNC_3 (struct bge_softc*) ;
 scalar_t__ FUNC_4 (struct bge_softc*) ;
 scalar_t__ FUNC_5 (struct bge_softc*) ;
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
 int FUNC_6 (struct bge_softc*,int) ;
 int FUNC_7 (struct bge_softc*,int,int) ;
 int FUNC_8 (int) ;
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
 int FUNC_9 (struct bge_softc*,int ) ;
 int FUNC_10 (struct bge_softc*,int ) ;
 int FUNC_11 (struct bge_softc*) ;
 int FUNC_12 (struct bge_softc*,int) ;
 void FUNC_13 (struct bge_softc*,int,int) ;
 void FUNC_14 (struct bge_softc*,int,int) ;
 void FUNC_15 (struct bge_softc*,int,int) ;
 scalar_t__ VAR_78 ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 (int ,int,int) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_20(struct bge_softc *VAR_79)
{
 device_t VAR_80;
 uint32_t VAR_81, VAR_82, VAR_83, VAR_84, VAR_85, VAR_86;
 void (*VAR_87)(struct bge_softc *, int, int);
 uint16_t VAR_88;
 int VAR_89;

 VAR_80 = VAR_79->bge_dev;

 VAR_84 = VAR_25 | VAR_26;
 if ((VAR_79->bge_mfw_flags & VAR_30) != 0)
  VAR_84 |= VAR_23 | VAR_24;
 VAR_83 = FUNC_6(VAR_79, VAR_27) & VAR_84;

 if (FUNC_5(VAR_79) && !FUNC_2(VAR_79) &&
     (VAR_79->bge_asicrev != VAR_9)) {
  if (VAR_79->bge_flags & VAR_19)
   VAR_87 = FUNC_13;
  else
   VAR_87 = FUNC_14;
 } else
  VAR_87 = FUNC_15;

 if (VAR_79->bge_asicrev != VAR_2 &&
     VAR_79->bge_asicrev != VAR_3) {
  FUNC_7(VAR_79, VAR_39, VAR_38);
  for (VAR_89 = 0; VAR_89 < 8000; VAR_89++) {
   if (FUNC_6(VAR_79, VAR_39) &
       VAR_37)
    break;
   FUNC_8(20);
  }
  if (VAR_89 == 8000) {
   if (VAR_78)
    FUNC_16(VAR_80, "NVRAM lock timedout!\n");
  }
 }

 FUNC_9(VAR_79, VAR_1);


 VAR_81 = FUNC_17(VAR_80, VAR_49, 4);
 VAR_82 = FUNC_17(VAR_80, VAR_50, 4);

 FUNC_19(VAR_80, VAR_51,
     VAR_40 | VAR_41 |
     VAR_22 | VAR_42, 4);


 if (VAR_79->bge_asicrev == VAR_7 ||
     FUNC_4(VAR_79)) {
  if (VAR_78)
   FUNC_16(VAR_80, "Disabling fastboot\n");
  FUNC_7(VAR_79, VAR_14, 0x0);
 }






 FUNC_14(VAR_79, VAR_54, VAR_55);

 VAR_85 = VAR_32 | VAR_0;


 if (VAR_79->bge_flags & VAR_19) {
  if (VAR_79->bge_asicrev != VAR_8 &&
      (VAR_79->bge_flags & VAR_15) == 0) {
   if (FUNC_6(VAR_79, 0x7E2C) == 0x60)
    FUNC_7(VAR_79, 0x7E2C, 0x20);
  }
  if (VAR_79->bge_chipid != VAR_11) {

   FUNC_7(VAR_79, VAR_33, 1 << 29);
   VAR_85 |= 1 << 29;
  }
 }

 if (VAR_79->bge_asicrev == VAR_9) {
  VAR_86 = FUNC_6(VAR_79, VAR_59);
  FUNC_7(VAR_79, VAR_59,
      VAR_86 | VAR_60);
  VAR_86 = FUNC_6(VAR_79, VAR_57);
  FUNC_7(VAR_79, VAR_57,
      VAR_86 & ~VAR_58);
 }





 if (FUNC_1(VAR_79) &&
     (VAR_79->bge_flags & VAR_16) == 0)
  VAR_85 |= VAR_31;


 VAR_87(VAR_79, VAR_33, VAR_85);

 if (VAR_79->bge_flags & VAR_19)
  FUNC_8(100 * 1000);
 else
  FUNC_8(1000);


 if (VAR_79->bge_flags & VAR_19) {
  if (VAR_79->bge_chipid == VAR_11) {
   FUNC_8(500000);
   VAR_86 = FUNC_17(VAR_80, 0xC4, 4);
   FUNC_19(VAR_80, 0xC4, VAR_86 | (1 << 15), 4);
  }
  VAR_88 = FUNC_17(VAR_80,
      VAR_79->bge_expcap + VAR_69, 2);

  VAR_88 &= ~(VAR_64 |
      VAR_63);
  FUNC_19(VAR_80, VAR_79->bge_expcap + VAR_69,
      VAR_88, 2);
  FUNC_18(VAR_80, VAR_79->bge_expmrq);

  FUNC_19(VAR_80, VAR_79->bge_expcap + VAR_70,
      VAR_65 |
      VAR_67 | VAR_66 |
      VAR_68, 2);
 }


 FUNC_19(VAR_80, VAR_51,
     VAR_40 | VAR_41 |
     VAR_22 | VAR_42, 4);
 VAR_86 = VAR_47 | VAR_48;
 if (VAR_79->bge_chipid == VAR_10 &&
     (VAR_79->bge_flags & VAR_20) != 0)
  VAR_86 |= VAR_46;
 if ((VAR_79->bge_mfw_flags & VAR_30) != 0)
  VAR_86 |= VAR_43 |
      VAR_45 |
      VAR_44;
 FUNC_19(VAR_80, VAR_52, VAR_86, 4);
 FUNC_19(VAR_80, VAR_49, VAR_81, 4);
 FUNC_19(VAR_80, VAR_50, VAR_82, 4);





 if (VAR_79->bge_flags & VAR_20) {
  VAR_88 = FUNC_17(VAR_80,
      VAR_79->bge_pcixcap + VAR_77, 2);
  VAR_88 &= ~VAR_73;
  if (VAR_79->bge_asicrev == VAR_4) {
   VAR_88 &= ~VAR_74;
   VAR_88 |= VAR_75;
  } else if (VAR_79->bge_asicrev == VAR_5) {
   VAR_88 &= ~(VAR_76 |
       VAR_74);
   VAR_88 |= VAR_75;
  }
  FUNC_19(VAR_80, VAR_79->bge_pcixcap + VAR_77,
      VAR_88, 2);
 }

 if (FUNC_2(VAR_79)) {

  if (VAR_79->bge_flags & VAR_18) {
   VAR_86 = FUNC_17(VAR_80,
       VAR_79->bge_msicap + VAR_72, 2);
   FUNC_19(VAR_80,
       VAR_79->bge_msicap + VAR_72,
       VAR_86 | VAR_71, 2);
   VAR_86 = FUNC_6(VAR_79, VAR_36);
   FUNC_7(VAR_79, VAR_36,
       VAR_86 | VAR_35);
  }
  VAR_86 = FUNC_6(VAR_79, VAR_29);
  FUNC_7(VAR_79, VAR_29, VAR_28 | VAR_86);
 } else
  FUNC_7(VAR_79, VAR_29, VAR_28);


 FUNC_7(VAR_79, VAR_34, FUNC_11(VAR_79));

 VAR_86 = FUNC_6(VAR_79, VAR_27);
 VAR_86 = (VAR_86 & ~VAR_84) | VAR_83;
 FUNC_7(VAR_79, VAR_27, VAR_86);
 FUNC_8(40);

 FUNC_10(VAR_79, VAR_1);

 if (VAR_79->bge_asicrev == VAR_9) {
  for (VAR_89 = 0; VAR_89 < VAR_56; VAR_89++) {
   VAR_86 = FUNC_6(VAR_79, VAR_59);
   if (VAR_86 & VAR_61)
    break;
   FUNC_8(100);
  }
  if (VAR_89 == VAR_56) {
   FUNC_16(VAR_80, "reset timed out\n");
   return (1);
  }
 } else {






  for (VAR_89 = 0; VAR_89 < VAR_56; VAR_89++) {
   FUNC_8(10);
   VAR_86 = FUNC_12(VAR_79, VAR_54);
   if (VAR_86 == ~VAR_55)
    break;
  }

  if ((VAR_79->bge_flags & VAR_17) && VAR_89 == VAR_56)
   FUNC_16(VAR_80,
       "firmware handshake timed out, found 0x%08x\n",
       VAR_86);

  if (VAR_79->bge_chipid == VAR_12)
   FUNC_8(10 * 1000);
 }






 if (VAR_79->bge_asicrev == VAR_5 &&
     VAR_79->bge_flags & VAR_21) {
  VAR_86 = FUNC_6(VAR_79, VAR_53);
  VAR_86 = (VAR_86 & ~0xFFF) | 0x880;
  FUNC_7(VAR_79, VAR_53, VAR_86);
 }


 if (VAR_79->bge_flags & VAR_19 &&
     !FUNC_3(VAR_79) &&
     VAR_79->bge_chipid != VAR_11 &&
     VAR_79->bge_asicrev != VAR_8) {

  VAR_86 = FUNC_6(VAR_79, 0x7C00);
  FUNC_7(VAR_79, 0x7C00, VAR_86 | (1 << 25));
 }

 if (VAR_79->bge_asicrev == VAR_6)
  FUNC_0(VAR_79, VAR_13,
      VAR_62);

 return (0);
}
