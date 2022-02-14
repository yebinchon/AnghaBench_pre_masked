
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ aspm_en; } ;
struct TYPE_3__ {scalar_t__ inv; } ;
struct bhnd_pcihb_softc {int quirks; int dev; TYPE_2__ aspm_quirk_override; int pci_dev; TYPE_1__ sdr9_quirk_polarity; } ;
typedef int * device_t ;
typedef scalar_t__ bus_size_t ;
typedef int bhnd_pci_war_state ;


 int FUNC_0 (int *,int ,int ) ;
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
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 int VAR_41 ;
 scalar_t__ VAR_42 ;
 int VAR_43 ;
 scalar_t__ VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_1 (struct bhnd_pcihb_softc*,int ,int ) ;
 int FUNC_2 (struct bhnd_pcihb_softc*,int ,int ,int ) ;
 int FUNC_3 (struct bhnd_pcihb_softc*,int ,int ,int) ;
 int FUNC_4 (struct bhnd_pcihb_softc*,int ,int ,int ,int) ;
 int FUNC_5 (struct bhnd_pcihb_softc*,int ) ;
 int FUNC_6 (struct bhnd_pcihb_softc*,int ,int) ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int FUNC_7 (struct bhnd_pcihb_softc*,scalar_t__) ;
 int FUNC_8 (struct bhnd_pcihb_softc*,int ) ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int FUNC_9 (struct bhnd_pcihb_softc*,scalar_t__,int) ;
 int FUNC_10 (struct bhnd_pcihb_softc*,int ,int) ;
 int FUNC_11 (int,int ,int) ;
 int VAR_56 ;
 int FUNC_12 (int ,char*) ;
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
 int * FUNC_13 (int *,int ,int ) ;
 int * FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,int) ;
 int FUNC_16 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_17(struct bhnd_pcihb_softc *VAR_70, bhnd_pci_war_state VAR_71)
{





 if (VAR_70->quirks & VAR_50 ||
     VAR_70->quirks & VAR_51)
 {
  uint32_t VAR_72;
  VAR_72 = FUNC_8(VAR_70, VAR_52);

  if (VAR_70->quirks & VAR_50)
   VAR_72 |= (VAR_54|VAR_53);

  if (VAR_70->quirks & VAR_51)
   VAR_72 |= VAR_55;

  FUNC_10(VAR_70, VAR_52, VAR_72);
 }


 if (VAR_70->quirks & VAR_49) {
  uint32_t VAR_73;

  VAR_73 = FUNC_8(VAR_70, VAR_47);
  VAR_73 |= VAR_48;
  FUNC_10(VAR_70, VAR_47, VAR_73);
 }


 if (VAR_70->quirks & VAR_25) {
  uint32_t VAR_74;
  VAR_74 = FUNC_5(VAR_70, VAR_45);
  VAR_74 |= VAR_46;
  FUNC_6(VAR_70, VAR_45, VAR_74);
 }



 if (VAR_70->quirks & VAR_17) {
  uint16_t VAR_75;


  VAR_75 = FUNC_11(0, VAR_67, (2064/16));
  VAR_75 = FUNC_11(VAR_75, VAR_66,
      (40960/1024));
  FUNC_3(VAR_70, VAR_12,
      VAR_34, VAR_75);


  VAR_75 = VAR_30;
  VAR_75 = FUNC_11(VAR_75, VAR_65, 0x0);
  FUNC_3(VAR_70, VAR_12,
      VAR_28, VAR_75);


  VAR_75 = 0;
  VAR_75 = FUNC_11(VAR_75, VAR_62, 0x2);
  VAR_75 = FUNC_11(VAR_75, VAR_61, 0x4);
  VAR_75 = FUNC_11(VAR_75, VAR_64, 0x6);
  VAR_75 = FUNC_11(VAR_75, VAR_63, 0x6);
  FUNC_3(VAR_70, VAR_12,
      VAR_29, VAR_75);
 }


 if (VAR_70->quirks & VAR_19) {
  uint16_t VAR_76;

  VAR_76 = FUNC_1(VAR_70, VAR_12,
      VAR_31);

  VAR_76 |= VAR_32;
  if (VAR_70->sdr9_quirk_polarity.inv)
   VAR_76 |= VAR_33;
  else
   VAR_76 &= ~VAR_33;

  FUNC_3(VAR_70, VAR_12,
      VAR_31, VAR_76);
 }


 if (VAR_70->quirks & VAR_18) {
  uint16_t VAR_77;

  VAR_77 = FUNC_1(VAR_70, VAR_11,
      VAR_26);

  VAR_77 &= ~VAR_27;
  FUNC_3(VAR_70, VAR_11,
      VAR_26, VAR_77);
 }


 if (VAR_70->quirks & VAR_16) {
  uint32_t VAR_78;
  VAR_78 = FUNC_5(VAR_70, VAR_6);
  VAR_78 |= VAR_7;
  FUNC_6(VAR_70, VAR_6, VAR_78);
 }


 if (VAR_70->quirks & VAR_14) {
  uint32_t VAR_79;
  VAR_79 = FUNC_5(VAR_70, VAR_8);
  VAR_79 = FUNC_11(VAR_79, VAR_60,
      VAR_9);
  FUNC_6(VAR_70, VAR_8, VAR_79);
 }




 if (VAR_70->quirks & VAR_15) {
  uint32_t VAR_80;
  VAR_80 = FUNC_5(VAR_70, VAR_8);
  VAR_80 |= VAR_5;
  FUNC_6(VAR_70, VAR_8, VAR_80);
 }


 if (VAR_70->quirks & VAR_13) {
  bus_size_t VAR_81;
  uint16_t VAR_82;


  VAR_81 = VAR_37 + VAR_39;
  VAR_82 = FUNC_7(VAR_70, VAR_81);

  if (VAR_70->aspm_quirk_override.aspm_en)
   VAR_82 |= VAR_38;
  else
   VAR_82 &= ~VAR_38;

  FUNC_9(VAR_70, VAR_81, VAR_82);



  VAR_82 = FUNC_15(VAR_70->pci_dev, VAR_59, 2);

  if (VAR_70->aspm_quirk_override.aspm_en)
   VAR_82 |= VAR_57;
  else
   VAR_82 &= ~VAR_57;

  VAR_82 &= ~VAR_58;

  FUNC_16(VAR_70->pci_dev, VAR_59, VAR_82, 2);


  VAR_81 = VAR_37 + VAR_42;
  VAR_82 = FUNC_7(VAR_70, VAR_81);

  if (VAR_70->aspm_quirk_override.aspm_en)
   VAR_82 |= VAR_41;
  else
   VAR_82 &= ~VAR_41;

  FUNC_9(VAR_70, VAR_81, VAR_82);
 }


 if (VAR_70->quirks & VAR_24) {
  bus_size_t VAR_83;
  uint16_t VAR_84;


  VAR_83 = VAR_37 + VAR_44;
  VAR_84 = FUNC_7(VAR_70, VAR_83);


  if (!(VAR_84 & VAR_43)) {
   VAR_84 |= VAR_43;
   FUNC_9(VAR_70, VAR_83, VAR_84);
  }
 }


 if (VAR_70->quirks & VAR_20) {
  device_t VAR_85, VAR_86;
  bus_size_t VAR_87;

  VAR_85 = FUNC_14(VAR_70->dev);
  VAR_86 = FUNC_13(VAR_85, VAR_0, 0);
  FUNC_12(VAR_86 != ((void*)0), ("missing chipcommon device"));


  FUNC_0(VAR_86, VAR_56,
      VAR_56);


  VAR_87 = VAR_37 + VAR_40;
  FUNC_9(VAR_70, VAR_87, 0);
 }


 if (VAR_70->quirks & VAR_22) {
  uint16_t VAR_88;


  VAR_88 = FUNC_2(VAR_70, VAR_10,
      VAR_35, VAR_36);


  if (VAR_70->quirks & VAR_21) {
   VAR_88 = FUNC_11(VAR_88, VAR_69,
       VAR_3);

   VAR_88 = FUNC_11(VAR_88, VAR_68,
       VAR_1);
  }


  if (VAR_70->quirks & VAR_23) {
   VAR_88 = FUNC_11(VAR_88, VAR_69,
       VAR_4);

   VAR_88 = FUNC_11(VAR_88, VAR_68,
       VAR_2);
  }

  FUNC_4(VAR_70, VAR_10,
      VAR_35, VAR_36, VAR_88);
 }

 return (0);
}
