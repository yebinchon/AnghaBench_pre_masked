
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int chip_id; scalar_t__ chip_rev; } ;
struct bhnd_pmu_softc {TYPE_1__ cid; int query; } ;
struct TYPE_5__ {int fref; int xf; int p1div; int p2div; int ndiv_frac; int ndiv_int; } ;
typedef TYPE_2__ pmu1_xtaltab0_t ;


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
 int FUNC_0 (struct bhnd_pmu_softc*,int,int) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_1 (struct bhnd_pmu_softc*,int ,int,int ) ;
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
 int FUNC_2 (int,int ) ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_3 (struct bhnd_pmu_softc*,int,int ) ;
 int FUNC_4 (struct bhnd_pmu_softc*,int) ;
 int FUNC_5 (struct bhnd_pmu_softc*,int,int,int) ;
 int FUNC_6 (struct bhnd_pmu_softc*,int) ;
 int FUNC_7 (struct bhnd_pmu_softc*) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (struct bhnd_pmu_softc*,int,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct bhnd_pmu_softc*,char*,...) ;
 int FUNC_13 (struct bhnd_pmu_softc*,char*,int,int) ;
 int FUNC_14 (struct bhnd_pmu_softc*,int ,int ) ;
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

 int FUNC_15 (int *) ;
 TYPE_2__* FUNC_16 (int *) ;
 int FUNC_17 (struct bhnd_pmu_softc*) ;
 int FUNC_18 (char*,int) ;

__attribute__((used)) static void
FUNC_19(struct bhnd_pmu_softc *VAR_58, uint32_t VAR_59)
{
 const pmu1_xtaltab0_t *VAR_60;
 uint32_t VAR_61;
 uint32_t VAR_62, VAR_63, VAR_64;
 uint32_t VAR_65;
 uint32_t VAR_66;
 uint8_t VAR_67;

 VAR_66 = FUNC_15(&VAR_58->query) / 1000;
 VAR_61 = 0;
 VAR_67 = 1;


 if (VAR_59 == 0) {
  FUNC_12(VAR_58, "Unspecified xtal frequency, skipping PLL "
      "configuration\n");
  return;
 }


 for (VAR_60 = FUNC_16(&VAR_58->query); VAR_60 != ((void*)0) && VAR_60->fref != 0;
     VAR_60++)
 {
  if (VAR_60->fref == VAR_59)
   break;
 }




 if (VAR_60 == ((void*)0) || VAR_60->fref == 0) {
  FUNC_13(VAR_58, "Unsupported XTAL frequency %d.%dMHz, skipping PLL "
      "configuration\n", VAR_59 / 1000, VAR_59 % 1000);
  return;
 }



 VAR_65 = FUNC_6(VAR_58, VAR_36);
 if (FUNC_2(VAR_65, VAR_41) == VAR_60->xf &&
     VAR_58->cid.chip_id != 134 &&
     VAR_58->cid.chip_id != 131)
 {
  FUNC_12(VAR_58, "PLL already programmed for %d.%dMHz\n",
      VAR_60->fref / 1000, VAR_60->fref % 1000);
  return;
 }

 FUNC_12(VAR_58, "XTAL %d.%dMHz (%d)\n", VAR_59 / 1000, VAR_59 % 1000, VAR_60->xf);
 FUNC_12(VAR_58, "Programming PLL for %d.%dMHz\n", VAR_60->fref / 1000,
   VAR_60->fref % 1000);

 switch (VAR_58->cid.chip_id) {
 case 133:

  VAR_61 = 0x222222;

  FUNC_0(VAR_58, VAR_46,
   ~(FUNC_11(VAR_49) |
     FUNC_11(VAR_50)));
  FUNC_0(VAR_58, VAR_45,
   ~(FUNC_11(VAR_49) |
     FUNC_11(VAR_50)));


  FUNC_14(VAR_58, 0, VAR_0);
  break;

 case 132:

  VAR_61 = 0x888888;

  FUNC_0(VAR_58, VAR_46,
   ~(FUNC_11(VAR_51) |
     FUNC_11(VAR_52)));
  FUNC_0(VAR_58, VAR_45,
   ~(FUNC_11(VAR_51) |
     FUNC_11(VAR_52)));


  FUNC_14(VAR_58, 0, VAR_0);


  VAR_62 = VAR_29;
  if (VAR_60->fref == 38400)
   VAR_63 = 0x200024C0;
  else if (VAR_60->fref == 37400)
   VAR_63 = 0x20004500;
  else if (VAR_60->fref == 26000)
   VAR_63 = 0x200024C0;
  else
   VAR_63 = 0x200005C0;

  FUNC_5(VAR_58, VAR_62, VAR_63, ~0);


  VAR_62 = VAR_30;

  VAR_63 = FUNC_4(VAR_58, VAR_62);
  VAR_63 &= VAR_20;

  if (VAR_60->fref == 38400 ||
      VAR_60->fref == 37400 ||
      VAR_60->fref == 26000) {
   VAR_63 |= 0x15;
  } else {
   VAR_63 |= 0x25;
  }

  FUNC_5(VAR_58, VAR_62, VAR_63, ~0);
  break;

 case 134:

  VAR_61 = 0x222222;






  FUNC_0(VAR_58, VAR_46,
   ~(FUNC_11(VAR_48)));
  FUNC_0(VAR_58, VAR_45,
   ~(FUNC_11(VAR_48)));

  FUNC_10(100);
  FUNC_0(VAR_58, VAR_46,
   ~(FUNC_11(VAR_47)));
  FUNC_0(VAR_58, VAR_45,
   ~(FUNC_11(VAR_47)));

  FUNC_10(100);


  FUNC_14(VAR_58, 0, VAR_0);

  VAR_63 = 0x200005c0;
  FUNC_5(VAR_58, VAR_29, VAR_63, ~0);
  break;

 case 130:
  FUNC_0(VAR_58, VAR_46,
   ~(FUNC_11(VAR_55) |
     FUNC_11(VAR_56)));
  FUNC_0(VAR_58, VAR_45,
   ~(FUNC_11(VAR_55) |
     FUNC_11(VAR_56)));
  FUNC_10(100);


  FUNC_14(VAR_58, 0, VAR_0);

  break;

 case 131:
  FUNC_0(VAR_58, VAR_46,
   ~(FUNC_11(VAR_53) |
     FUNC_11(VAR_54)));
  FUNC_0(VAR_58, VAR_45,
   ~(FUNC_11(VAR_53) |
     FUNC_11(VAR_54)));
  FUNC_10(100);


  FUNC_14(VAR_58, 0, VAR_0);

  break;

 default:
  FUNC_18("unsupported chipid %#hx\n", VAR_58->cid.chip_id);
 }

 FUNC_12(VAR_58, "Done masking\n");


 VAR_63 =
     FUNC_8(VAR_60->p1div, VAR_4) |
     FUNC_8(VAR_60->p2div, VAR_6);
 VAR_64 = VAR_5|VAR_7;

 if (VAR_58->cid.chip_id == 134) {
  VAR_63 &= ~(VAR_3);
  VAR_64 |= VAR_3;
  if (!VAR_60->ndiv_frac) {
   VAR_63 |= FUNC_8(1,
       VAR_2);
  }
 }

 FUNC_5(VAR_58, VAR_25, VAR_63, VAR_64);


 if (VAR_58->cid.chip_id == 131)
  FUNC_17(VAR_58);

 if (VAR_58->cid.chip_id == 132 && VAR_58->cid.chip_rev == 0) {
  FUNC_5(VAR_58, VAR_26,
      VAR_44,
      VAR_43);
 }


 if (VAR_58->cid.chip_id == 130 ||
     VAR_58->cid.chip_id == 131)
 {
  VAR_67 = VAR_14;
 } else if (VAR_58->cid.chip_id == 134) {
  if (!(VAR_60->ndiv_frac))
   VAR_67 = VAR_11;
  else
   VAR_67 = VAR_14;
 } else {
  VAR_67 = VAR_12;
 }


 FUNC_5(VAR_58, VAR_27,
     FUNC_8(VAR_60->ndiv_int, VAR_8) |
     FUNC_8(VAR_67, VAR_10),
     VAR_9 |
     VAR_13);


 FUNC_5(VAR_58, VAR_28,
     FUNC_8(VAR_60->ndiv_frac, VAR_15),
     VAR_16);


 if (VAR_58->cid.chip_id == 134) {
  uint8_t VAR_68;

  if (!VAR_60->ndiv_frac)
          VAR_63 = 0x200005c0;
  else
          VAR_63 = 0x202C2820;

  if (VAR_66 < 1600)
   VAR_68 = 4;
  else
          VAR_68 = 7;

  VAR_63 &= ~(VAR_18);
  VAR_63 |= FUNC_8(VAR_68, VAR_17);
  FUNC_9(VAR_58, VAR_29, VAR_63);
 }


 if (VAR_61) {
  FUNC_12(VAR_58, "Adjusting PLL buffer drive strength: %x\n",
      VAR_61);

  VAR_63 = FUNC_8(VAR_61,
      VAR_19);
  VAR_64 = VAR_20;

  if (VAR_58->cid.chip_id == 134) {
   VAR_64 |=
       VAR_24 |
       VAR_22;

   if (!VAR_60->ndiv_frac) {
    VAR_63 |= FUNC_8(0x25,
        VAR_21);
   } else {
    VAR_63 |= FUNC_8(0x15,
        VAR_21);
   }

   if (VAR_66 >= 1600) {
    VAR_63 |= FUNC_8(0x1,
        VAR_23);
   }
  }

  FUNC_5(VAR_58, VAR_30, VAR_63,
      VAR_64);
 }

 FUNC_12(VAR_58, "Done pll\n");




 if (VAR_58->cid.chip_id == 134 &&
     VAR_60->fref != VAR_57)
 {
  uint32_t VAR_69;

  switch (VAR_60->fref) {
  case 129:
   VAR_69 = VAR_31;
   break;
  case 128:
   VAR_69 = VAR_32;
   break;
  default:
   FUNC_18("unsupported 4319USB XTAL frequency: %hu\n",
       VAR_60->fref);
  }

  FUNC_1(VAR_58, VAR_1,
      FUNC_8(VAR_69, VAR_33),
      VAR_34);
 }


 if (FUNC_7(VAR_58) >= 2)
  FUNC_3(VAR_58, VAR_36, VAR_40);


 VAR_65 = FUNC_6(VAR_58, VAR_36);
 VAR_65 &= ~(VAR_39 | VAR_42);
 VAR_65 |= FUNC_8(((VAR_60->fref + 127) / 128) - 1,
     VAR_38);
 VAR_65 |= FUNC_8(VAR_60->xf, VAR_41);

 if (VAR_58->cid.chip_id == 132 && VAR_58->cid.chip_rev == 0) {

  FUNC_0(VAR_58, VAR_35, ~VAR_35);
  VAR_65 &= ~VAR_37;
 }

 FUNC_9(VAR_58, VAR_36, VAR_65);
}
