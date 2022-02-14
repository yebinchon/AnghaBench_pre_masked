
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {scalar_t__ sc_hwcrypto; int sc_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct rtwn_softc*,int) ;
 int FUNC_2 (struct rtwn_softc*,scalar_t__) ;
 int FUNC_3 (struct rtwn_softc*,scalar_t__) ;
 int FUNC_4 (struct rtwn_softc*,scalar_t__,int,int) ;
 int FUNC_5 (struct rtwn_softc*,scalar_t__,int,int,int) ;
 int FUNC_6 (struct rtwn_softc*,scalar_t__,int,int) ;
 int FUNC_7 (struct rtwn_softc*,int ,int ) ;
 int FUNC_8 (struct rtwn_softc*,scalar_t__,int ) ;
 int FUNC_9 (struct rtwn_softc*,int ,int ) ;

int
FUNC_10(struct rtwn_softc *VAR_34)
{
 int VAR_35;


 FUNC_4(VAR_34, VAR_1, VAR_2, 0);


 FUNC_6(VAR_34, VAR_5, VAR_8, 0);
 FUNC_7(VAR_34, VAR_28, 0);


 for(VAR_35 = 0; VAR_35 < 5000; VAR_35++) {
  if (FUNC_3(VAR_34, VAR_5) & VAR_11)
   break;
  FUNC_1(VAR_34, 10);
 }
 if (VAR_35 == 5000) {
  FUNC_0(VAR_34->sc_dev,
      "timeout waiting for chip power up\n");
  return (VAR_0);
 }


 FUNC_4(VAR_34, VAR_30,
     VAR_31 | VAR_32, 0);


 FUNC_4(VAR_34, VAR_3 + 2, 0, 0x80);


 FUNC_5(VAR_34, VAR_5,
     VAR_8, 0, 1);


 FUNC_5(VAR_34, VAR_5,
     VAR_6 | VAR_7, 0, 1);


 FUNC_5(VAR_34, VAR_5,
     0, VAR_9, 1);
 for (VAR_35 = 0; VAR_35 < 5000; VAR_35++) {
  if (!(FUNC_2(VAR_34, VAR_5) &
      VAR_9))
   break;
  FUNC_1(VAR_34, 10);
 }
 if (VAR_35 == 5000)
  return (VAR_0);

 FUNC_4(VAR_34, VAR_27 + 2, 0, 0x04);


 FUNC_4(VAR_34, VAR_24, VAR_25, 0);

 FUNC_4(VAR_34, VAR_5, 0, VAR_10);
 FUNC_4(VAR_34, VAR_27 + 2, 0, 0x04);
 FUNC_4(VAR_34, VAR_4 + 1, 0, 0x02);
 FUNC_4(VAR_34, VAR_29, 0, 0x08);
 FUNC_6(VAR_34, VAR_21, VAR_22, 0);


 FUNC_8(VAR_34, VAR_12, 0);
 FUNC_6(VAR_34, VAR_12, 0,
     VAR_16 | VAR_20 |
     VAR_15 | VAR_18 |
     VAR_17 | VAR_19 |
     ((VAR_34->sc_hwcrypto != VAR_33) ? VAR_14 : 0) |
     VAR_13);

 FUNC_9(VAR_34, VAR_23, 0);
 FUNC_9(VAR_34, VAR_26, 0);

 return (0);
}
