
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int ue_udev; int ue_dev; } ;
struct ure_softc {int sc_flags; int sc_chip; TYPE_1__ sc_ue; } ;


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
 scalar_t__ VAR_50 ;
 int FUNC_0 (int ,char*) ;
 int VAR_51 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (struct ure_softc*) ;
 int FUNC_3 (struct ure_softc*,int ) ;
 int FUNC_4 (struct ure_softc*,int ,int) ;
 int FUNC_5 (struct ure_softc*,int ,int ) ;
 int FUNC_6 (struct ure_softc*,int ,int ) ;
 int FUNC_7 (struct ure_softc*,int ,int ) ;
 int FUNC_8 (struct ure_softc*) ;
 int FUNC_9 (struct ure_softc*,int ,int ,int) ;
 int FUNC_10 (struct ure_softc*,int ,int ,int) ;
 int FUNC_11 (struct ure_softc*,int ,int ,int) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(struct ure_softc *VAR_52)
{
 uint32_t VAR_53, VAR_54;
 int VAR_55;

 FUNC_10(VAR_52, VAR_25, VAR_14,
     FUNC_6(VAR_52, VAR_25, VAR_14) |
     VAR_37);

 FUNC_2(VAR_52);

 FUNC_11(VAR_52, VAR_28, VAR_14,
     FUNC_7(VAR_52, VAR_28, VAR_14) &
     ~VAR_35);

 if (!(VAR_52->sc_flags & VAR_11)) {
  if (VAR_52->sc_chip & (VAR_1 | VAR_2 |
      VAR_3)) {
    FUNC_4(VAR_52, VAR_16,
        VAR_4 | VAR_0 | VAR_10);
  }
  if (VAR_52->sc_chip & VAR_1) {
   FUNC_4(VAR_52, VAR_18,
       FUNC_3(VAR_52, VAR_18) &
       ~VAR_6);
  }
  FUNC_4(VAR_52, VAR_19,
      FUNC_3(VAR_52, VAR_19) |
      VAR_7);
  FUNC_4(VAR_52, VAR_17,
      FUNC_3(VAR_52, VAR_17) |
      VAR_8);
  FUNC_4(VAR_52, VAR_19,
      FUNC_3(VAR_52, VAR_19) |
      VAR_9);
  FUNC_4(VAR_52, VAR_20, VAR_45);
  FUNC_4(VAR_52, VAR_21, 0x0b13);
  FUNC_10(VAR_52, VAR_27, VAR_14,
      FUNC_6(VAR_52, VAR_27, VAR_14) |
      VAR_22);


  FUNC_4(VAR_52, VAR_20, VAR_46);
  FUNC_4(VAR_52, VAR_21, 0xf70f);


  FUNC_4(VAR_52, VAR_20, VAR_43);
  FUNC_4(VAR_52, VAR_21, 0x00af);
  FUNC_4(VAR_52, VAR_20, VAR_44);
  FUNC_4(VAR_52, VAR_21, 0x0208);
 }

 FUNC_8(VAR_52);

 FUNC_9(VAR_52, VAR_24, VAR_14, 0);

 FUNC_9(VAR_52, VAR_26, VAR_14,
     FUNC_5(VAR_52, VAR_26, VAR_14) &
     ~VAR_15);

 FUNC_10(VAR_52, VAR_32, VAR_14,
     FUNC_6(VAR_52, VAR_32, VAR_14) &
     ~VAR_13);
 for (VAR_55 = 0; VAR_55 < VAR_48; VAR_55++) {
  if (FUNC_5(VAR_52, VAR_26, VAR_14) &
      VAR_12)
   break;
  FUNC_1(&VAR_52->sc_ue, VAR_51 / 100);
 }
 if (VAR_55 == VAR_48)
  FUNC_0(VAR_52->sc_ue.ue_dev,
      "timeout waiting for OOB control\n");
 FUNC_10(VAR_52, VAR_32, VAR_14,
     FUNC_6(VAR_52, VAR_32, VAR_14) |
     VAR_36);
 for (VAR_55 = 0; VAR_55 < VAR_48; VAR_55++) {
  if (FUNC_5(VAR_52, VAR_26, VAR_14) &
      VAR_12)
   break;
  FUNC_1(&VAR_52->sc_ue, VAR_51 / 100);
 }
 if (VAR_55 == VAR_48)
  FUNC_0(VAR_52->sc_ue.ue_dev,
      "timeout waiting for OOB control\n");

 FUNC_10(VAR_52, VAR_23, VAR_14,
     FUNC_6(VAR_52, VAR_23, VAR_14) &
     ~VAR_5);
 FUNC_10(VAR_52, VAR_33, VAR_14,
     FUNC_6(VAR_52, VAR_33, VAR_14) |
     VAR_47);


 FUNC_11(VAR_52, VAR_29, VAR_14,
     VAR_38);
 if (FUNC_12(VAR_52->sc_ue.ue_udev) == VAR_50) {
  VAR_53 = VAR_39;
  VAR_54 = VAR_41;
 } else {
  VAR_53 = VAR_40;
  VAR_54 = VAR_42;
 }
 FUNC_11(VAR_52, VAR_30, VAR_14, VAR_53);
 FUNC_11(VAR_52, VAR_31, VAR_14, VAR_54);


 FUNC_11(VAR_52, VAR_34, VAR_14,
     VAR_49);
}
