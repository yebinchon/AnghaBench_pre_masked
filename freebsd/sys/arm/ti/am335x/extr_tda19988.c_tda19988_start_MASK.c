
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct tda19988_softc {int sc_version; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
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
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct tda19988_softc*,int,int*) ;
 int FUNC_4 (struct tda19988_softc*,int ,int) ;
 scalar_t__ FUNC_5 (struct tda19988_softc*) ;
 int FUNC_6 (struct tda19988_softc*,int ,int) ;
 int FUNC_7 (struct tda19988_softc*,int ,int*) ;
 int FUNC_8 (struct tda19988_softc*,int ,int) ;
 int FUNC_9 (struct tda19988_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_10(struct tda19988_softc *VAR_32)
{
 device_t VAR_33;
 uint8_t VAR_34;
 uint16_t VAR_35;

 VAR_33 = VAR_32->sc_dev;

 FUNC_4(VAR_32, VAR_9, VAR_4 | VAR_3);
 FUNC_0(1000);
 FUNC_3(VAR_32, 0xfe, &VAR_34);


 FUNC_8(VAR_32, VAR_25, 3);
 FUNC_0(100);
 FUNC_6(VAR_32, VAR_25, 3);
 FUNC_0(100);


 FUNC_8(VAR_32, VAR_12, VAR_5);
 FUNC_6(VAR_32, VAR_12, VAR_5);


 FUNC_9(VAR_32, VAR_20, 0x00);
 FUNC_9(VAR_32, VAR_21, FUNC_1(1));
 FUNC_9(VAR_32, VAR_22, 0x00);
 FUNC_9(VAR_32, VAR_24, 0x00);
 FUNC_9(VAR_32, VAR_8, 0x00);
 FUNC_9(VAR_32, VAR_14, 0x00);
 FUNC_9(VAR_32, VAR_23, VAR_7 | VAR_6);
 FUNC_9(VAR_32, VAR_16, 0xfa);
 FUNC_9(VAR_32, VAR_17, 0x00);
 FUNC_9(VAR_32, VAR_18, 0x5b);
 FUNC_9(VAR_32, VAR_19, 0x00);
 FUNC_9(VAR_32, VAR_15, 0x10);


 FUNC_9(VAR_32, VAR_13, 0x24);

 VAR_35 = 0;
 FUNC_7(VAR_32, VAR_27, &VAR_34);
 VAR_35 |= VAR_34;
 FUNC_7(VAR_32, VAR_28, &VAR_34);
 VAR_35 |= (VAR_34 << 8);


 VAR_32->sc_version = VAR_35 & ~0x30;
 switch (VAR_32->sc_version) {
  case 128:
   FUNC_2(VAR_33, "TDA19988\n");
   break;
  default:
   FUNC_2(VAR_33, "Unknown device: %04x\n", VAR_32->sc_version);
   return;
 }

 FUNC_9(VAR_32, VAR_11, VAR_2);
 FUNC_9(VAR_32, VAR_26, 39);

     FUNC_4(VAR_32, VAR_10,
            VAR_0 | VAR_1);

 if (FUNC_5(VAR_32) < 0) {
  FUNC_2(VAR_33, "failed to read EDID\n");
  return;
 }


 FUNC_9(VAR_32, VAR_29, 0x23);
 FUNC_9(VAR_32, VAR_30, 0x01);
 FUNC_9(VAR_32, VAR_31, 0x45);
}
