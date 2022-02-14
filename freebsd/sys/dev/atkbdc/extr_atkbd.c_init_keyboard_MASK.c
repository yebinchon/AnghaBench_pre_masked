
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int KBDC ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
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
 scalar_t__ FUNC_2 (int ,int,int) ;
 scalar_t__ VAR_19 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,int,int) ;
 scalar_t__ FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static int
FUNC_14(KBDC VAR_20, int *VAR_21, int VAR_22)
{
 int VAR_23;
 int VAR_24;
 int VAR_25;

 if (!FUNC_6(VAR_20, VAR_18)) {

  return VAR_0;
 }


 FUNC_13(VAR_20, VAR_2);


 FUNC_3(VAR_20, 200);
 VAR_25 = FUNC_4(VAR_20);
 if (VAR_25 == -1) {

  FUNC_6(VAR_20, VAR_1);
  FUNC_7("atkbd: unable to get the current command byte value.\n");
  return VAR_0;
 }
 if (VAR_19)
  FUNC_7("atkbd: the current kbd controller command byte %04x\n",
     VAR_25);






 if (FUNC_12(VAR_20, VAR_18, VAR_1)) {

  FUNC_7("atkbd: unable to set the command byte.\n");
  FUNC_6(VAR_20, VAR_1);
  return VAR_0;
 }

 if (FUNC_1(VAR_20, VAR_4) &&
     FUNC_2(VAR_20, VAR_22, VAR_25)) {
  FUNC_6(VAR_20, VAR_1);
  return VAR_0;
 }







 VAR_23 = -1;
 if (VAR_22 & VAR_16)

  VAR_23 = 1;
 *VAR_21 = VAR_17;
 VAR_24 = FUNC_5(VAR_20);
 switch(VAR_24) {
 case 0x41ab:
 case 0x83ab:
 case 0x54ab:
 case 0x84ab:





  *VAR_21 = VAR_14;
  break;
 case -1:
  *VAR_21 = VAR_15;
  break;
 default:
  break;
 }
 if (VAR_19)
  FUNC_7("atkbd: keyboard ID 0x%x (%d)\n", VAR_24, *VAR_21);

 if (!FUNC_1(VAR_20, VAR_4) &&
     FUNC_2(VAR_20, VAR_22, VAR_25)) {
  FUNC_6(VAR_20, VAR_1);
  return VAR_0;
 }






 if (VAR_23 == 1) {
  if (FUNC_10(VAR_20,
   VAR_7, VAR_23) == VAR_8) {

   VAR_25 &= ~VAR_13;
  } else {





   FUNC_11(VAR_20, FUNC_0(VAR_20)
       ? 0xff : VAR_11, VAR_25);
   FUNC_6(VAR_20, VAR_1);
   FUNC_7("atkbd: unable to set the XT keyboard mode.\n");
   return VAR_0;
  }
 }
 if (FUNC_1(VAR_20, VAR_5) &&
     FUNC_10(VAR_20, VAR_6, 0) != VAR_8) {
  FUNC_7("atkbd: setleds failed\n");
 }
 if (!FUNC_0(VAR_20))
     FUNC_9(VAR_20, VAR_3);


 if (!FUNC_11(VAR_20,
  VAR_11 | VAR_13 | VAR_12,
  (VAR_25 & (VAR_13 | VAR_12))
      | VAR_10 | VAR_9)) {





  FUNC_11(VAR_20, FUNC_0(VAR_20)
      ? 0xff : (VAR_11 | VAR_13 |
   VAR_12), VAR_25);
  FUNC_6(VAR_20, VAR_1);
  FUNC_7("atkbd: unable to enable the keyboard port and intr.\n");
  return VAR_0;
 }

 FUNC_6(VAR_20, VAR_1);
 return 0;
}
