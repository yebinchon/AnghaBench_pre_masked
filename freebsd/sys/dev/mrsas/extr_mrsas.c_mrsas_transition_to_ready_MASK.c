
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct mrsas_softc {int mrsas_dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;

 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_8 ;
 int FUNC_2 (struct mrsas_softc*) ;
 int FUNC_3 (struct mrsas_softc*,int ,char*) ;
 int FUNC_4 (struct mrsas_softc*,int ) ;
 int VAR_9 ;
 int FUNC_5 (struct mrsas_softc*,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int VAR_10 ;

int
FUNC_7(struct mrsas_softc *VAR_11, int VAR_12)
{
 int VAR_13;
 u_int8_t VAR_14;
 u_int32_t VAR_15, VAR_16;
 u_int32_t VAR_17;
 u_int32_t VAR_18, VAR_19;

 VAR_15 = FUNC_4(VAR_11, FUNC_6(VAR_9, VAR_10));
 VAR_16 = VAR_15 & VAR_4;
 VAR_14 = VAR_7;

 if (VAR_16 != VAR_5)
  FUNC_1(VAR_11->mrsas_dev, "Waiting for FW to come to ready state\n");

 while (VAR_16 != VAR_5) {
  VAR_18 = FUNC_4(VAR_11, FUNC_6(VAR_9, VAR_10));
  switch (VAR_16) {
  case 134:
   FUNC_1(VAR_11->mrsas_dev, "FW is in FAULT state!!\n");
   if (VAR_12) {
    VAR_17 = 134;
    break;
   } else
    return -VAR_0;
  case 128:

   FUNC_5(VAR_11, FUNC_6(VAR_9, VAR_8),
       VAR_1 | VAR_2);
   VAR_17 = 128;
   break;
  case 136:
   FUNC_5(VAR_11, FUNC_6(VAR_9, VAR_8),
       VAR_2);
   VAR_17 = 136;
   break;
  case 130:




   FUNC_2(VAR_11);
   FUNC_5(VAR_11, FUNC_6(VAR_9, VAR_8), VAR_3);
   for (VAR_13 = 0; VAR_13 < VAR_14 * 1000; VAR_13++) {
    if (FUNC_4(VAR_11, FUNC_6(VAR_9, VAR_8)) & 1)
     FUNC_0(1000);
    else
     break;
   }
   VAR_17 = 130;
   break;
  case 129:




   VAR_17 = 129;
   break;
  case 137:
   VAR_17 = 137;
   break;
  case 132:
   VAR_17 = 132;
   break;
  case 131:
   VAR_17 = 131;
   break;
  case 135:
   VAR_17 = 135;
   break;
  case 133:
   VAR_17 = 133;
   break;
  default:
   FUNC_1(VAR_11->mrsas_dev, "Unknown state 0x%x\n", VAR_16);
   return -VAR_0;
  }




  for (VAR_13 = 0; VAR_13 < (VAR_14 * 1000); VAR_13++) {
   VAR_16 = (FUNC_4(VAR_11, FUNC_6(VAR_9,
       VAR_10)) & VAR_4);
   VAR_19 = FUNC_4(VAR_11, FUNC_6(VAR_9,
       VAR_10));
   if (VAR_18 == VAR_19)
    FUNC_0(1000);
   else
    break;
  }




  if (VAR_19 == VAR_18) {
   FUNC_1(VAR_11->mrsas_dev, "FW state [%d] hasn't changed "
       "in %d secs\n", VAR_16, VAR_14);
   return -VAR_0;
  }
 }
 FUNC_3(VAR_11, VAR_6, "FW now in Ready state\n");
 return 0;
}
