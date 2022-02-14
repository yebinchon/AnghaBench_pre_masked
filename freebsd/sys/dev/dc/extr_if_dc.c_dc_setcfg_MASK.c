
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_softc {scalar_t__ dc_pmode; scalar_t__ dc_type; int dc_link; } ;


 int FUNC_0 (struct dc_softc*,int ) ;
 int FUNC_1 (struct dc_softc*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct dc_softc*,int ,int) ;
 scalar_t__ FUNC_3 (struct dc_softc*) ;
 scalar_t__ FUNC_4 (struct dc_softc*) ;
 scalar_t__ FUNC_5 (struct dc_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (struct dc_softc*,int ) ;
 int FUNC_7 (struct dc_softc*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (struct dc_softc*,int ,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct dc_softc*) ;

__attribute__((used)) static void
FUNC_12(struct dc_softc *VAR_30, int VAR_31)
{
 int VAR_32 = 0, VAR_33;

 if (FUNC_10(VAR_31) == VAR_29)
  return;

 if (FUNC_0(VAR_30, VAR_1) & (VAR_9 | VAR_6)) {
  VAR_32 = 1;
  FUNC_2(VAR_30, VAR_1, (VAR_9 | VAR_6));
  FUNC_11(VAR_30);
 }

 if (FUNC_10(VAR_31) == VAR_24) {
  FUNC_2(VAR_30, VAR_1, VAR_8);
  FUNC_8(VAR_30, VAR_1, VAR_3);
  if (VAR_30->dc_pmode == VAR_10) {
   if (FUNC_4(VAR_30)) {

    VAR_33 = FUNC_0(VAR_30, VAR_21);
    VAR_33 &= ~VAR_22;
    VAR_33 |= VAR_23;
    FUNC_1(VAR_30, VAR_21, VAR_33);
   } else {
    FUNC_8(VAR_30, VAR_21, VAR_23);
   }
   FUNC_2(VAR_30, VAR_1, (VAR_4 |
       VAR_5 | VAR_7));
   if (VAR_30->dc_type == VAR_20)
    FUNC_8(VAR_30, VAR_1, (VAR_4 |
        VAR_7));
   if (!FUNC_3(VAR_30))
    FUNC_8(VAR_30, VAR_1, VAR_5);
   FUNC_2(VAR_30, VAR_0, 0xFFFF);
  } else {
   if (FUNC_5(VAR_30)) {
    FUNC_7(VAR_30, VAR_13);
    FUNC_7(VAR_30, VAR_12);
    FUNC_8(VAR_30, VAR_14, VAR_16);
   }
   FUNC_8(VAR_30, VAR_1, VAR_5);
   FUNC_8(VAR_30, VAR_1, VAR_4);
   FUNC_8(VAR_30, VAR_1, VAR_7);
  }
 }

 if (FUNC_10(VAR_31) == VAR_25) {
  FUNC_8(VAR_30, VAR_1, VAR_8);
  FUNC_2(VAR_30, VAR_1, VAR_3);
  if (VAR_30->dc_pmode == VAR_10) {

   if (FUNC_4(VAR_30)) {
    VAR_33 = FUNC_0(VAR_30, VAR_21);
    VAR_33 &= ~VAR_22;
    VAR_33 |= VAR_23;
    FUNC_1(VAR_30, VAR_21, VAR_33);
   } else {
    FUNC_8(VAR_30, VAR_21, VAR_23);
   }
   FUNC_2(VAR_30, VAR_1, (VAR_4 |
       VAR_5 | VAR_7));
   if (VAR_30->dc_type == VAR_20)
    FUNC_8(VAR_30, VAR_1, VAR_4);
   if (!FUNC_3(VAR_30))
    FUNC_8(VAR_30, VAR_1, VAR_5);
   FUNC_2(VAR_30, VAR_0, 0xFFFF);
  } else {
   if (FUNC_5(VAR_30)) {
    FUNC_6(VAR_30, VAR_13);
    FUNC_7(VAR_30, VAR_12);
    FUNC_2(VAR_30, VAR_14, VAR_16);
   }
   FUNC_2(VAR_30, VAR_1, VAR_5);
   FUNC_2(VAR_30, VAR_1, VAR_4);
   FUNC_2(VAR_30, VAR_1, VAR_7);
   if (FUNC_4(VAR_30)) {
    FUNC_2(VAR_30, VAR_17, VAR_18);
    FUNC_2(VAR_30, VAR_0, 0xFFFF);
    if ((VAR_31 & VAR_27) == VAR_26)
     FUNC_8(VAR_30, VAR_0, 0x7F3D);
    else
     FUNC_8(VAR_30, VAR_0, 0x7F3F);
    FUNC_8(VAR_30, VAR_17, VAR_18);
    FUNC_2(VAR_30, VAR_0,
        VAR_19);
    FUNC_9(20000);
   }
  }
 }






 if (FUNC_3(VAR_30)) {
  if (FUNC_10(VAR_31) == VAR_28) {
   FUNC_8(VAR_30, VAR_1, VAR_5);
   VAR_30->dc_link = 1;
  } else {
   FUNC_2(VAR_30, VAR_1, VAR_5);
  }
 }

 if ((VAR_31 & VAR_27) == VAR_26) {
  FUNC_8(VAR_30, VAR_1, VAR_2);
  if (VAR_30->dc_pmode == VAR_11 && FUNC_5(VAR_30))
   FUNC_8(VAR_30, VAR_14, VAR_15);
 } else {
  FUNC_2(VAR_30, VAR_1, VAR_2);
  if (VAR_30->dc_pmode == VAR_11 && FUNC_5(VAR_30))
   FUNC_2(VAR_30, VAR_14, VAR_15);
 }

 if (VAR_32)
  FUNC_8(VAR_30, VAR_1, VAR_9 | VAR_6);
}
