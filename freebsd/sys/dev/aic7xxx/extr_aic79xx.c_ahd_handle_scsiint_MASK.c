
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct scb {int flags; } ;
struct ahd_softc {int bugs; } ;
struct ahd_devinfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahd_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ahd_softc*) ;
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
 int FUNC_2 (struct ahd_softc*) ;
 int FUNC_3 (struct ahd_softc*,int) ;
 int FUNC_4 (struct ahd_softc*) ;
 int FUNC_5 (struct ahd_softc*) ;
 int VAR_61 ;
 int FUNC_6 (struct ahd_softc*) ;
 int FUNC_7 (struct ahd_softc*,struct scb*) ;
 int FUNC_8 (struct ahd_softc*) ;
 int FUNC_9 (struct ahd_softc*,struct ahd_devinfo*,int ,int ,char*,int) ;
 int FUNC_10 (struct ahd_softc*,int) ;
 int FUNC_11 (struct ahd_softc*) ;
 int FUNC_12 (struct ahd_softc*,int) ;
 int FUNC_13 (struct ahd_softc*) ;
 int FUNC_14 (struct ahd_softc*,int ) ;
 int FUNC_15 (struct ahd_softc*,int ) ;
 int FUNC_16 (struct ahd_softc*) ;
 struct scb* FUNC_17 (struct ahd_softc*,int) ;
 char* FUNC_18 (struct ahd_softc*) ;
 int FUNC_19 (struct ahd_softc*,int ,int) ;
 int FUNC_20 (struct ahd_softc*) ;
 int FUNC_21 (struct ahd_softc*,struct scb*) ;
 int FUNC_22 (struct ahd_softc*,char,int ) ;
 int FUNC_23 (struct ahd_softc*) ;
 int FUNC_24 (struct ahd_softc*,struct ahd_devinfo*,struct scb*) ;
 int FUNC_25 (struct ahd_softc*,int,int) ;
 int FUNC_26 (struct ahd_softc*) ;
 int FUNC_27 (struct ahd_softc*) ;
 int FUNC_28 (struct ahd_softc*) ;
 int FUNC_29 (struct scb*,int ) ;
 int FUNC_30 (char*,...) ;

void
FUNC_31(struct ahd_softc *VAR_62, u_int VAR_63)
{
 struct scb *VAR_64;
 u_int VAR_65;
 u_int VAR_66;
 u_int VAR_67;
 u_int VAR_68;
 u_int VAR_69;
 u_int VAR_70;
 u_int VAR_71;

 FUNC_28(VAR_62);
 FUNC_25(VAR_62, VAR_5, VAR_5);

 VAR_66 = FUNC_14(VAR_62, VAR_58) & (VAR_40|VAR_41);
 VAR_65 = FUNC_14(VAR_62, VAR_55) & (VAR_30|VAR_42|VAR_49|VAR_50);
 VAR_67 = FUNC_14(VAR_62, VAR_56) & (VAR_51|VAR_47|VAR_8|VAR_46);
 VAR_68 = FUNC_14(VAR_62, VAR_35);
 VAR_69 = FUNC_14(VAR_62, VAR_37);
 VAR_71 = FUNC_14(VAR_62, VAR_57) & VAR_9;
 if ((VAR_65 & (VAR_49|VAR_50)) != 0) {
  u_int VAR_72;

  FUNC_25(VAR_62, VAR_2, VAR_2);
  VAR_72 = FUNC_14(VAR_62, VAR_53);
  VAR_65 &= VAR_72 & (VAR_30|VAR_42|VAR_49|VAR_50);
  FUNC_25(VAR_62, VAR_5, VAR_5);
 }
 VAR_70 = FUNC_8(VAR_62);
 VAR_64 = FUNC_17(VAR_62, VAR_70);
 if (VAR_64 != ((void*)0)
  && (FUNC_14(VAR_62, VAR_52) & VAR_39) != 0)
  VAR_64 = ((void*)0);

 if ((VAR_65 & VAR_30) != 0) {
  u_int VAR_73;

  VAR_73 = FUNC_14(VAR_62, VAR_44) & VAR_26;
  FUNC_30("%s: Transceiver State Has Changed to %s mode\n",
         FUNC_18(VAR_62), VAR_73 ? "LVD" : "SE");
  FUNC_19(VAR_62, VAR_23, VAR_14);



  FUNC_22(VAR_62, 'A', VAR_59);
  FUNC_20(VAR_62);
  FUNC_26(VAR_62);
  FUNC_27(VAR_62);
 } else if ((VAR_65 & VAR_42) != 0) {

  FUNC_30("%s: SCSI offset overrun detected.  Resetting bus.\n",
         FUNC_18(VAR_62));
  FUNC_0(VAR_62);
  FUNC_22(VAR_62, 'A', VAR_59);
 } else if ((VAR_67 & VAR_47) != 0) {

  FUNC_30("%s: Someone reset channel A\n", FUNC_18(VAR_62));
  FUNC_22(VAR_62, 'A', VAR_29);
  FUNC_1(VAR_62);
 } else if ((VAR_67 & VAR_46) != 0) {


  FUNC_2(VAR_62);

  FUNC_13(VAR_62);
 } else if (VAR_69 != 0) {

  FUNC_30("%s: lqostat0 == 0x%x!\n", FUNC_18(VAR_62), VAR_69);
  FUNC_19(VAR_62, VAR_17, VAR_69);
  if ((VAR_62->bugs & VAR_1) != 0)
   FUNC_19(VAR_62, VAR_18, 0);
 } else if ((VAR_67 & VAR_51) != 0) {
  u_int VAR_74;


  FUNC_19(VAR_62, VAR_48, 0);


  FUNC_2(VAR_62);


  FUNC_5(VAR_62);


  FUNC_19(VAR_62, VAR_24, VAR_22|VAR_12|VAR_20);
  FUNC_19(VAR_62, VAR_23, VAR_21);

  VAR_74 = FUNC_15(VAR_62, VAR_60);
  VAR_64 = FUNC_17(VAR_62, VAR_74);
  if (VAR_64 == ((void*)0)) {
   FUNC_30("%s: ahd_intr - referenced scb not "
          "valid during SELTO scb(0x%x)\n",
          FUNC_18(VAR_62), VAR_74);
   FUNC_6(VAR_62);
   FUNC_1(VAR_62);
  } else {
   struct ahd_devinfo VAR_75;







   FUNC_24(VAR_62, &VAR_75, VAR_64);
   FUNC_29(VAR_64, VAR_11);
   FUNC_7(VAR_62, VAR_64);







   FUNC_9(VAR_62, &VAR_75,
         VAR_10,
         VAR_11,
         "Selection Timeout",
                          1);
  }
  FUNC_19(VAR_62, VAR_13, VAR_19);
  FUNC_16(VAR_62);
  FUNC_27(VAR_62);
 } else if ((VAR_65 & (VAR_49|VAR_50)) != 0) {

  FUNC_16(VAR_62);
  FUNC_27(VAR_62);
 } else if (VAR_66 != 0) {
  FUNC_30("%s: SCSI Cell parity error SSTAT3 == 0x%x\n",
         FUNC_18(VAR_62), VAR_66);
  FUNC_0(VAR_62);
  FUNC_19(VAR_62, VAR_25, VAR_66);
 } else if ((VAR_68 & (VAR_33|VAR_34)) != 0) {


  FUNC_2(VAR_62);

  FUNC_10(VAR_62, VAR_68);
 } else if ((VAR_68 & VAR_32) != 0) {






  FUNC_19(VAR_62, VAR_16, VAR_15);
 } else if ((VAR_67 & VAR_8) != 0
  || (VAR_68 & VAR_36) != 0) {
  u_int VAR_76;
  int VAR_77;
  int VAR_78;
  int VAR_79;
  u_int VAR_80;







  FUNC_19(VAR_62, VAR_48, 0);


  FUNC_2(VAR_62);





  VAR_80 = VAR_5;
  VAR_71 = FUNC_14(VAR_62, VAR_57) & VAR_9;
  VAR_76 = FUNC_14(VAR_62, VAR_38);
  switch (VAR_71) {
  case 130:
  case 129:
  {
   u_int VAR_81;
   struct scb *VAR_82;

   VAR_80 = VAR_71 == 130
        ? VAR_3 : VAR_4;
   FUNC_25(VAR_62, VAR_80, VAR_80);
   VAR_81 = FUNC_8(VAR_62);
   VAR_82 = FUNC_17(VAR_62, VAR_81);
   if (VAR_82 == ((void*)0)) {
    FUNC_30("%s: Invalid SCB %d in DFF%d "
           "during unexpected busfree\n",
           FUNC_18(VAR_62), VAR_81, VAR_80);
    VAR_79 = 0;
    FUNC_0(VAR_62);
   } else
    VAR_79 = (VAR_82->flags & VAR_45) != 0;
   VAR_78 = 1;
   break;
  }
  case 128:
   VAR_78 = 0;
   VAR_79 = 1;
   break;
  default:
   VAR_78 = 0;
   VAR_79 = (VAR_76 & VAR_36) != 0;
   if (!VAR_79
    && FUNC_14(VAR_62, VAR_31) == VAR_43
    && (FUNC_14(VAR_62, VAR_55) & VAR_49) == 0
    && ((FUNC_14(VAR_62, VAR_55) & VAR_50) == 0
     || (FUNC_14(VAR_62, VAR_48) & VAR_28) == 0))






    VAR_79 = 1;
   break;
  }
  if (VAR_79 && FUNC_14(VAR_62, VAR_31) == VAR_43) {
   VAR_77 = FUNC_12(VAR_62, VAR_71);
  } else {
   VAR_79 = 0;
   VAR_77 = FUNC_11(VAR_62);
  }
  FUNC_19(VAR_62, VAR_24, VAR_12);
  if (VAR_79 == 0
   && (VAR_62->bugs & VAR_0) != 0)
   FUNC_19(VAR_62, VAR_54,
     FUNC_14(VAR_62, VAR_54) & ~VAR_27);

  if (VAR_78)
   FUNC_3(VAR_62, VAR_80);

  FUNC_5(VAR_62);
  FUNC_19(VAR_62, VAR_13, VAR_19);
  if (VAR_77) {
   FUNC_23(VAR_62);
  } else {
   FUNC_27(VAR_62);
  }
 } else {
  FUNC_30("%s: Missing case in ahd_handle_scsiint. status = %x\n",
         FUNC_18(VAR_62), VAR_67);
  FUNC_6(VAR_62);
  FUNC_4(VAR_62);
  FUNC_27(VAR_62);
 }
}
