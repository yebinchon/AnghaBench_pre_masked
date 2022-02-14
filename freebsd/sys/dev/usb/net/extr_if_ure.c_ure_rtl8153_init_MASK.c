
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int u1u2 ;
struct TYPE_2__ {int ue_udev; int ue_dev; } ;
struct ure_softc {int sc_chip; TYPE_1__ sc_ue; } ;


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
 int FUNC_0 (int) ;
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
 scalar_t__ VAR_69 ;
 int FUNC_1 (int ,char*) ;
 int VAR_70 ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (struct ure_softc*) ;
 int FUNC_5 (struct ure_softc*,int ) ;
 int FUNC_6 (struct ure_softc*,int ,int) ;
 int FUNC_7 (struct ure_softc*,int ,int) ;
 int FUNC_8 (struct ure_softc*,int ,int) ;
 int FUNC_9 (struct ure_softc*,int ,int,int) ;
 int FUNC_10 (struct ure_softc*,int ,int,int) ;
 int FUNC_11 (struct ure_softc*,int ,int,int *,int) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(struct ure_softc *VAR_71)
{
 uint16_t VAR_72;
 uint8_t VAR_73[8];
 int VAR_74;


 FUNC_6(VAR_71, VAR_21,
     FUNC_5(VAR_71, VAR_21) & ~VAR_11);
 FUNC_3(&VAR_71->sc_ue, VAR_70 / 50);

 FUNC_2(VAR_73, 0x00, sizeof(VAR_73));
 FUNC_11(VAR_71, VAR_64,
     VAR_19 | VAR_2, VAR_73, sizeof(VAR_73));

        for (VAR_74 = 0; VAR_74 < VAR_45; VAR_74++) {
  if (FUNC_8(VAR_71, VAR_28, VAR_18) &
      VAR_1)
   break;
  FUNC_3(&VAR_71->sc_ue, VAR_70 / 100);
 }
 if (VAR_74 == VAR_45)
  FUNC_1(VAR_71->sc_ue.ue_dev,
      "timeout waiting for chip autoload\n");

        for (VAR_74 = 0; VAR_74 < VAR_45; VAR_74++) {
  VAR_72 = FUNC_5(VAR_71, VAR_20) &
      VAR_25;
  if (VAR_72 == VAR_24 || VAR_72 == VAR_26)
   break;
  FUNC_3(&VAR_71->sc_ue, VAR_70 / 100);
 }
 if (VAR_74 == VAR_45)
  FUNC_1(VAR_71->sc_ue.ue_dev,
      "timeout waiting for phy to stabilize\n");

 FUNC_10(VAR_71, VAR_65, VAR_19,
     FUNC_8(VAR_71, VAR_65, VAR_19) &
     ~VAR_52);

 if (VAR_71->sc_chip & VAR_4) {
  VAR_72 = FUNC_8(VAR_71, VAR_63, VAR_19);
  VAR_72 &= ~VAR_35;
  VAR_72 |= FUNC_0(96);
  FUNC_10(VAR_71, VAR_63, VAR_19, VAR_72);

  FUNC_9(VAR_71, VAR_66, VAR_19,
      FUNC_7(VAR_71, VAR_66, VAR_19) |
      VAR_53 | VAR_54);
 } else if (VAR_71->sc_chip & VAR_5) {
  FUNC_9(VAR_71, VAR_29, VAR_18,
      FUNC_7(VAR_71, VAR_29, VAR_18) &
      ~VAR_8);
 }
 if (VAR_71->sc_chip & (VAR_5 | VAR_6)) {
  VAR_72 = FUNC_7(VAR_71, VAR_58, VAR_19);
  if (FUNC_8(VAR_71, VAR_56, VAR_19) ==
      0)
   VAR_72 &= ~VAR_7;
  else
   VAR_72 |= VAR_7;
  FUNC_9(VAR_71, VAR_58, VAR_19, VAR_72);
 }

 FUNC_9(VAR_71, VAR_59, VAR_19,
     FUNC_7(VAR_71, VAR_59, VAR_19) |
     VAR_12);

 FUNC_10(VAR_71, VAR_68, VAR_19,
     FUNC_8(VAR_71, VAR_68, VAR_19) &
     ~VAR_46);

 FUNC_10(VAR_71, VAR_30, VAR_18,
     FUNC_8(VAR_71, VAR_30, VAR_18) &
     ~VAR_15);

 if ((VAR_71->sc_chip & VAR_4) &&
     FUNC_12(VAR_71->sc_ue.ue_udev) != VAR_69)
  VAR_72 = VAR_16;
 else
  VAR_72 = VAR_17;
 FUNC_9(VAR_71, VAR_60, VAR_19,
     VAR_72 | VAR_13 | VAR_38);

 VAR_72 = FUNC_8(VAR_71, VAR_55, VAR_19);
 VAR_72 &= ~VAR_42;
 VAR_72 |= VAR_43 | VAR_41;
 FUNC_10(VAR_71, VAR_55, VAR_19, VAR_72);

 FUNC_10(VAR_71, VAR_57, VAR_19, 0x0001);

 FUNC_10(VAR_71, VAR_62, VAR_19,
     FUNC_8(VAR_71, VAR_62, VAR_19) &
     ~(VAR_37 | VAR_23));
 FUNC_10(VAR_71, VAR_61, VAR_19,
     FUNC_8(VAR_71, VAR_61, VAR_19) &
     ~VAR_22);

 FUNC_2(VAR_73, 0xff, sizeof(VAR_73));
 FUNC_11(VAR_71, VAR_64,
     VAR_19 | VAR_2, VAR_73, sizeof(VAR_73));

 FUNC_10(VAR_71, VAR_31, VAR_18,
     VAR_0);
 FUNC_10(VAR_71, VAR_32, VAR_18,
     VAR_10);
 FUNC_10(VAR_71, VAR_33, VAR_18,
     VAR_27 | VAR_44 |
     VAR_51 | VAR_14);
 FUNC_10(VAR_71, VAR_34, VAR_18,
     VAR_36 | VAR_39 | VAR_50 |
     VAR_48 | VAR_49 | VAR_47 |
     VAR_9);

 VAR_72 = FUNC_8(VAR_71, VAR_65, VAR_19);
 if (!(VAR_71->sc_chip & (VAR_3 | VAR_4)))
  VAR_72 |= VAR_52;
 else
  VAR_72 &= ~VAR_52;
 FUNC_10(VAR_71, VAR_65, VAR_19, VAR_72);

 FUNC_2(VAR_73, 0x00, sizeof(VAR_73));
        FUNC_11(VAR_71, VAR_64,
     VAR_19 | VAR_2, VAR_73, sizeof(VAR_73));


 FUNC_6(VAR_71, VAR_21,
     FUNC_5(VAR_71, VAR_21) & ~VAR_11);
 FUNC_3(&VAR_71->sc_ue, VAR_70 / 50);

 FUNC_4(VAR_71);


 FUNC_10(VAR_71, VAR_67, VAR_19,
     FUNC_8(VAR_71, VAR_67, VAR_19) |
     VAR_40);

 VAR_72 = FUNC_8(VAR_71, VAR_65, VAR_19);
 if (!(VAR_71->sc_chip & (VAR_3 | VAR_4)))
  VAR_72 |= VAR_52;
 else
  VAR_72 &= ~VAR_52;
 FUNC_10(VAR_71, VAR_65, VAR_19, VAR_72);

 FUNC_2(VAR_73, 0xff, sizeof(VAR_73));
 FUNC_11(VAR_71, VAR_64,
     VAR_19 | VAR_2, VAR_73, sizeof(VAR_73));
}
