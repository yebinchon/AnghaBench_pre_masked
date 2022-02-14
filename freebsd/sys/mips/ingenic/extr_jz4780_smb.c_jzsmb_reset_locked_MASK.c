
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_char ;
struct jzsmb_softc {int bus_freq; int i2c_freq; } ;
typedef int device_t ;


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


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
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
 int FUNC_2 (struct jzsmb_softc*) ;
 int FUNC_3 (struct jzsmb_softc*,int ,int) ;
 struct jzsmb_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct jzsmb_softc*,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_28, u_char VAR_29)
{
 struct jzsmb_softc *VAR_30;
 uint16_t VAR_31;
 uint32_t VAR_32;
 int VAR_33, VAR_34, VAR_35, VAR_36;

 VAR_30 = FUNC_4(VAR_28);

 FUNC_2(VAR_30);




 FUNC_5(VAR_30, 0);


 FUNC_3(VAR_30, VAR_21, 0);


 VAR_32 = VAR_30->bus_freq / VAR_30->i2c_freq;
 VAR_31 = VAR_15 | VAR_16 | VAR_14;
 switch (VAR_30->i2c_freq) {
 case 128:
  VAR_31 |= VAR_18;
  VAR_35 = VAR_12;
  VAR_36 = VAR_4;
  VAR_33 = (VAR_32 * VAR_10) /
      (VAR_8 + VAR_10);
  VAR_34 = VAR_32 - VAR_33;
  VAR_33 = FUNC_0(VAR_33 - VAR_1, VAR_2);
  VAR_34 = FUNC_0(VAR_34 - VAR_5, VAR_6);
  FUNC_3(VAR_30, VAR_13, VAR_31);
  FUNC_3(VAR_30, VAR_25, VAR_33);
  FUNC_3(VAR_30, VAR_26, VAR_34);
  break;
 case 129:
  VAR_31 |= VAR_17;
  VAR_35 = VAR_11;
  VAR_36 = VAR_3;
  VAR_33 = (VAR_32 * VAR_9) /
      (VAR_7 + VAR_9);
  VAR_34 = VAR_32 - VAR_33;
  VAR_33 = FUNC_0(VAR_33 - VAR_1, VAR_2);
  VAR_34 = FUNC_0(VAR_34 - VAR_5, VAR_6);
  FUNC_3(VAR_30, VAR_13, VAR_31);
  FUNC_3(VAR_30, VAR_19, VAR_33);
  FUNC_3(VAR_30, VAR_20, VAR_34);
  break;
 default:
  return (VAR_0);
 }

 VAR_35 = ((VAR_35 * VAR_30->bus_freq / 1000) / 1000000) + 1;
 VAR_35 = FUNC_1(1, FUNC_0(255, VAR_35));
 FUNC_3(VAR_30, VAR_24, VAR_35);

 VAR_36 = ((VAR_36 * VAR_30->bus_freq / 1000) / 1000000) - 1;
 VAR_36 = FUNC_0(255, VAR_36);
 if (VAR_36 >= 0)
  FUNC_3(VAR_30, VAR_22, VAR_36 | VAR_23);
 else
  FUNC_3(VAR_30, VAR_22, 0);

 FUNC_3(VAR_30, VAR_27, VAR_29 >> 1);

 if (VAR_29 != 0) {

  FUNC_5(VAR_30, 1);
 }

 return (0);
}
