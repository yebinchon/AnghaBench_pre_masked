
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtwn_softc {scalar_t__ sc_hwcrypto; int sc_dev; struct r92c_softc* sc_priv; } ;
struct r92c_softc {scalar_t__ board_type; int chip; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct rtwn_softc*,scalar_t__) ;
 int FUNC_3 (struct rtwn_softc*,scalar_t__) ;
 int FUNC_4 (struct rtwn_softc*,scalar_t__,int,int ) ;
 int FUNC_5 (struct rtwn_softc*,scalar_t__,int,int) ;
 int FUNC_6 (struct rtwn_softc*,scalar_t__,int,int) ;
 int FUNC_7 (struct rtwn_softc*,scalar_t__,int) ;
 int FUNC_8 (struct rtwn_softc*,scalar_t__,int) ;
 int FUNC_9 (struct rtwn_softc*,int ,int) ;

int
FUNC_10(struct rtwn_softc *VAR_39)
{
 struct r92c_softc *VAR_40 = VAR_39->sc_priv;
 uint32_t VAR_41;
 int VAR_42;


 for (VAR_42 = 0; VAR_42 < 1000; VAR_42++) {
  if (FUNC_2(VAR_39, VAR_6) & VAR_10)
   break;
  FUNC_0(5);
 }
 if (VAR_42 == 1000) {
  FUNC_1(VAR_39->sc_dev,
      "timeout waiting for chip autoload\n");
  return (VAR_1);
 }


 FUNC_7(VAR_39, VAR_33, 0);

 if (VAR_40->board_type != VAR_14) {

  FUNC_6(VAR_39, VAR_6, 0,
      VAR_11 |
      VAR_12 |
      VAR_13);
 }


 FUNC_7(VAR_39, VAR_34, 0x2b);


 FUNC_7(VAR_39, VAR_2, 0x0f);


 if (VAR_40->board_type != VAR_14) {


  FUNC_6(VAR_39, VAR_2, 0x024800, 0);
 }

 FUNC_5(VAR_39, VAR_35, 0xff00,
     VAR_37 | VAR_36);

 FUNC_0(200);




 FUNC_5(VAR_39, VAR_6, 0, VAR_8);
 for (VAR_42 = 0; VAR_42 < 1000; VAR_42++) {
  if (!(FUNC_3(VAR_39, VAR_6) &
      VAR_8))
   break;
  FUNC_0(5);
 }
 if (VAR_42 == 1000) {
  FUNC_1(VAR_39->sc_dev, "timeout waiting for MAC auto ON\n");
  return (VAR_1);
 }


 FUNC_8(VAR_39, VAR_6,
     VAR_7 |
     VAR_9 |
     VAR_10);

 FUNC_5(VAR_39, VAR_35, VAR_36, 0);

 if (VAR_40->chip & VAR_15)
  FUNC_7(VAR_39, VAR_32 + 3, 0x77);
 else
  FUNC_7(VAR_39, VAR_32 + 3, 0x22);

 FUNC_9(VAR_39, VAR_30, 0);

 if (VAR_40->board_type != VAR_14) {


  FUNC_4(VAR_39, VAR_2 + 2, 0x02, 0);
 }

 FUNC_4(VAR_39, VAR_28, VAR_29, 0);

 VAR_41 = FUNC_2(VAR_39, VAR_26);
 if (!(VAR_41 & VAR_27)) {
  FUNC_1(VAR_39->sc_dev,
      "radio is disabled by hardware switch\n");

  return (VAR_0);
 }


 FUNC_4(VAR_39, VAR_3, VAR_4, 0);
 for (VAR_42 = 0; VAR_42 < 200; VAR_42++) {
  if (!(FUNC_2(VAR_39, VAR_3) &
      VAR_5))
   break;
  FUNC_0(500);
 }
 if (VAR_42 == 200) {
  FUNC_1(VAR_39->sc_dev,
      "timeout waiting for MAC initialization\n");
  return (VAR_1);
 }


 FUNC_5(VAR_39, VAR_16, 0,
     VAR_19 | VAR_18 |
     VAR_25 | VAR_23 | VAR_22 |
     VAR_24 | VAR_21 | VAR_20 |
     ((VAR_39->sc_hwcrypto != VAR_38) ? VAR_17 : 0));

 FUNC_9(VAR_39, VAR_31, 0x0);

 return (0);
}
