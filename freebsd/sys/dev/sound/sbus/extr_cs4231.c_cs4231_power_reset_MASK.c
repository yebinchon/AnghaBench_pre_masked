
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct cs4231_softc {int sc_flags; int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cs4231_softc*,int ) ;
 int FUNC_1 (struct cs4231_softc*,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct cs4231_softc*,int ) ;
 int FUNC_3 (struct cs4231_softc*,int ,int) ;
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
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_4 (struct cs4231_softc*,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_5 (struct cs4231_softc*,int ,int ) ;
 int FUNC_6 (int) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_7 (struct cs4231_softc*) ;
 int FUNC_8 (struct cs4231_softc*,int ) ;
 int FUNC_9 (struct cs4231_softc*,int ,int) ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static void
FUNC_11(struct cs4231_softc *VAR_26, int VAR_27)
{
 u_int32_t VAR_28;
 int VAR_29;

 if ((VAR_26->sc_flags & VAR_8) != 0) {
  FUNC_1(VAR_26, VAR_0, VAR_2);
  FUNC_6(10);
  FUNC_1(VAR_26, VAR_0, 0);
  FUNC_6(10);
  FUNC_1(VAR_26,
      VAR_0, FUNC_0(VAR_26, VAR_0) | VAR_1);
  FUNC_6(20);
  FUNC_1(VAR_26,
      VAR_0, FUNC_0(VAR_26, VAR_0) & (~VAR_1));
 } else {
  VAR_28 = FUNC_2(VAR_26, VAR_3);
  if (VAR_27 == VAR_6 && VAR_28 != 0) {
   FUNC_3(VAR_26, VAR_3, 0);
   FUNC_6(20);
  } else if (VAR_27 == VAR_5){
   FUNC_3(VAR_26, VAR_3, 1);
   FUNC_6(20);
   FUNC_3(VAR_26, VAR_3, 0);
   FUNC_6(20);
  }
  FUNC_7(VAR_26);
 }

 for (VAR_29 = VAR_23;
     VAR_29 && FUNC_4(VAR_26, VAR_7) == VAR_14; VAR_29--)
  FUNC_6(10);
 if (VAR_29 == 0)
  FUNC_10(VAR_26->sc_dev, "timeout waiting for reset\n");


 FUNC_9(VAR_26, VAR_17,
     FUNC_8(VAR_26, VAR_17) | VAR_18);

        FUNC_9(VAR_26, VAR_20,
            FUNC_8(VAR_26, VAR_20) | VAR_24);
 FUNC_5(VAR_26, VAR_9, 0);

 FUNC_9(VAR_26, VAR_16,
     FUNC_8(VAR_26, VAR_16) & ~VAR_25);
 FUNC_9(VAR_26, VAR_22,
     FUNC_8(VAR_26, VAR_22) & ~VAR_25);

 FUNC_9(VAR_26, VAR_15,
     FUNC_8(VAR_26, VAR_15) | VAR_4);
 FUNC_9(VAR_26, VAR_21,
     FUNC_8(VAR_26, VAR_21) | VAR_4);

 FUNC_9(VAR_26, VAR_10,
     FUNC_8(VAR_26, VAR_10) | VAR_12 | VAR_19);

 FUNC_9(VAR_26, VAR_11,
     FUNC_8(VAR_26, VAR_11) | VAR_13);
}
