
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_8__ {int dev; } ;
typedef TYPE_1__ ips_softc_t ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

int FUNC_7(ips_softc_t *VAR_10, int VAR_11)
{
 int VAR_12, VAR_13;
 u_int32_t VAR_14 = 0, VAR_15 = 0;
 FUNC_5(VAR_10, VAR_9, 0x80);
 FUNC_5(VAR_10, VAR_9, 0);
 FUNC_1(VAR_10->dev, "reinitializing adapter, this could take several minutes.\n");
 for(VAR_13 = 0; VAR_13 < 2; VAR_13++){
  VAR_14 <<= 8;
  for(VAR_12 = 0; VAR_12 < 45; VAR_12++){
   if(FUNC_4(VAR_10, VAR_7) & VAR_2){
    VAR_14 |= FUNC_4(VAR_10, VAR_8);
    FUNC_5(VAR_10, VAR_7,
         VAR_2);
    break;
   } else
    FUNC_0(1000000);
  }
  if(VAR_12 == 45)
   return 1;
 }
 for(VAR_13 = 0; VAR_13 < 2; VAR_13++){
  VAR_15 <<= 8;
  for(VAR_12 = 0; VAR_12 < 240; VAR_12++){
   if(FUNC_4(VAR_10, VAR_7) & VAR_2){
    VAR_15 |= FUNC_4(VAR_10, VAR_8);
    FUNC_5(VAR_10, VAR_7,
         VAR_2);
    break;
   } else
    FUNC_0(1000000);
  }
  if(VAR_12 == 240)
   return 1;
 }
 for(VAR_12 = 0; VAR_12 < 240; VAR_12++){
  if(!(FUNC_4(VAR_10, VAR_5) & VAR_4)){
   break;
  } else
   FUNC_0(1000000);
 }
 if(VAR_12 == 240)
  return 1;
 FUNC_6(VAR_10, VAR_6, 0x1000 | VAR_3);
 FUNC_5(VAR_10, VAR_9, VAR_0);
 FUNC_3(VAR_10);
 FUNC_5(VAR_10, VAR_7, VAR_2);
 VAR_12 = FUNC_4(VAR_10, VAR_9);
 FUNC_5(VAR_10, VAR_7, VAR_1);
 if(!VAR_15){
  FUNC_1(VAR_10->dev, "adapter initialization failed\n");
  return 1;
 }
 if(VAR_11 && FUNC_2(VAR_10)){
  FUNC_1(VAR_10->dev, "adapter clear failed\n");
  return 1;
 }
 return 0;
}
