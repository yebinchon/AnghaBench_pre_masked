
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct atse_softc {int atse_dev; } ;


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
 int FUNC_0 (struct atse_softc*,int ) ;
 int FUNC_1 (struct atse_softc*,int ,int) ;
 int FUNC_2 (int) ;
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
 int FUNC_3 (struct atse_softc*,int ) ;
 int FUNC_4 (struct atse_softc*,int ,int) ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_5 (struct atse_softc*) ;
 int FUNC_6 (struct atse_softc*,int ) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int
FUNC_8(struct atse_softc *VAR_43)
{
 uint32_t VAR_44, VAR_45;
 uint16_t VAR_46;
 int VAR_47;
 FUNC_4(VAR_43, VAR_36, 0x0D40);
 FUNC_4(VAR_43, VAR_37, 0x0003);


 VAR_46 = VAR_34|VAR_35;
 FUNC_4(VAR_43, VAR_33, VAR_46);



 VAR_46 = FUNC_3(VAR_43, VAR_27);
 VAR_46 &= ~(VAR_29|VAR_31);
 VAR_46 &= ~VAR_30;
 VAR_46 |= VAR_28;
 FUNC_4(VAR_43, VAR_27, VAR_46);


 VAR_46 = FUNC_3(VAR_43, VAR_27);
 VAR_46 |= VAR_32;
 FUNC_4(VAR_43, VAR_27, VAR_46);


 for (VAR_47 = 0; VAR_47 < 100; VAR_47++) {
  VAR_46 = FUNC_3(VAR_43, VAR_27);
  if ((VAR_46 & VAR_32) == 0) {
   break;
  }
  FUNC_2(10);
 }

 if ((VAR_46 & VAR_32) != 0) {
  FUNC_7(VAR_43->atse_dev, "PCS reset timed out.\n");
  return (VAR_24);
 }



 VAR_45 = VAR_12|VAR_8;
 VAR_44 = FUNC_0(VAR_43, VAR_1);
 VAR_44 &= ~VAR_45;

 FUNC_1(VAR_43, VAR_1, VAR_44);

 for (VAR_47 = 0; VAR_47 < 100; VAR_47++) {
  VAR_44 = FUNC_0(VAR_43, VAR_1);
  if ((VAR_44 & VAR_45) == 0) {
   break;
  }
  FUNC_2(10);
 }
 if ((VAR_44 & VAR_45) != 0) {
  FUNC_7(VAR_43->atse_dev, "Disabling MAC TX/RX timed out.\n");
  return (VAR_24);
 }

 FUNC_1(VAR_43, VAR_22, VAR_26 - 16);
 FUNC_1(VAR_43, VAR_20, 3);
 FUNC_1(VAR_43, VAR_19, 8);
 FUNC_1(VAR_43, VAR_17, VAR_25 - 16);
 FUNC_1(VAR_43, VAR_16, 8);
 FUNC_1(VAR_43, VAR_15, 8);





 FUNC_1(VAR_43, VAR_23, 0);
 FUNC_1(VAR_43, VAR_18, 0);




 FUNC_5(VAR_43);
 FUNC_6(VAR_43, VAR_0);


 FUNC_1(VAR_43, VAR_13, 1518);
 FUNC_1(VAR_43, VAR_21, 12);
 FUNC_1(VAR_43, VAR_14, 0xFFFF);

 VAR_44 = FUNC_0(VAR_43, VAR_1);
 VAR_44 &= ~VAR_5;

 VAR_44 &= ~VAR_4;
 VAR_44 |= VAR_7;
 VAR_44 &= ~VAR_3;




 VAR_44 |= VAR_9;

 VAR_46 &= ~VAR_6;
 FUNC_1(VAR_43, VAR_1, VAR_44);






 VAR_44 = FUNC_0(VAR_43, VAR_40);
 VAR_44 &= ~(VAR_41|VAR_42);
 FUNC_1(VAR_43, VAR_40, VAR_44);

 VAR_44 = FUNC_0(VAR_43, VAR_38);
 VAR_44 &= ~VAR_39;
 VAR_44 |= VAR_39;
 FUNC_1(VAR_43, VAR_38, VAR_44);


 VAR_44 = FUNC_0(VAR_43, VAR_1);
 VAR_44 |= VAR_10;
 FUNC_1(VAR_43, VAR_1, VAR_44);

 for (VAR_47 = 0; VAR_47 < 100; VAR_47++) {
  VAR_44 = FUNC_0(VAR_43, VAR_1);
  if ((VAR_44 & VAR_10) == 0) {
   break;
  }
  FUNC_2(10);
 }
 if ((VAR_44 & VAR_10) != 0) {
  FUNC_7(VAR_43->atse_dev, "MAC reset timed out.\n");
  return (VAR_24);
 }


 VAR_45 = VAR_12|VAR_8;
 VAR_44 = FUNC_0(VAR_43, VAR_1);
 VAR_44 |= VAR_45;
 FUNC_1(VAR_43, VAR_1, VAR_44);

 for (VAR_47 = 0; VAR_47 < 100; VAR_47++) {
  VAR_44 = FUNC_0(VAR_43, VAR_1);
  if ((VAR_44 & VAR_45) == VAR_45) {
   break;
  }
  FUNC_2(10);
 }
 if ((VAR_44 & VAR_45) != VAR_45) {
  FUNC_7(VAR_43->atse_dev, "Enabling MAC TX/RX timed out.\n");
  return (VAR_24);
 }

 return (0);
}
