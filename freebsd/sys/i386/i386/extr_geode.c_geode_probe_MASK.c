
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int ) ;
 void* VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 void* FUNC_5 (int (*) (int*,int),int*,char*) ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (char*,...) ;
 char* FUNC_11 (int) ;
 int FUNC_12 (int ,int,int ) ;
 int FUNC_13 (int *) ;
 int VAR_22 ;

__attribute__((used)) static int
FUNC_14(device_t VAR_23)
{

 static u_char VAR_24[80] = "\0";

 switch (FUNC_8(VAR_23)) {
 case 0x0515100b:
  if (VAR_11 == 0) {




   VAR_9 = FUNC_9(VAR_23, 0x64, 4);
   if (VAR_8)
    FUNC_10("Geode CBA@ 0x%x\n", VAR_9);
   VAR_11 = VAR_9 + 0x08;
   FUNC_7(VAR_9 + 0x0d, 2);
   if (VAR_8)
    FUNC_10("Geode rev: %02x %02x\n",
     FUNC_4(VAR_9 + 0x3c), FUNC_4(VAR_9 + 0x3d));
   FUNC_13(&VAR_13);
   FUNC_0(VAR_22, VAR_14,
       ((void*)0), 0);
   FUNC_12(VAR_12, 27000000, 0);
  }
  break;
 case 0x0510100b:
  VAR_15 = FUNC_9(VAR_23, FUNC_1(0), 4);
  VAR_15 &= ~0x1f;
  if (VAR_8)
   FUNC_10("Geode GPIO@ = %x\n", VAR_15);
  if (FUNC_2(&VAR_6,
      VAR_24, sizeof VAR_24) > 0 ) {
   VAR_17 = 20;
   VAR_16 = FUNC_5(FUNC_6, &VAR_17, "error");
  } else if (FUNC_2(&VAR_4,
      VAR_24, sizeof VAR_24) > 0 ) {
   VAR_17 = -2;
   VAR_19 = -3;
   VAR_21 = -18;
   VAR_16 = FUNC_5(FUNC_6, &VAR_17, "led1");
   VAR_18 = FUNC_5(FUNC_6, &VAR_19, "led2");
   VAR_20 = FUNC_5(FUNC_6, &VAR_21, "led3");




   FUNC_6(&VAR_17, 1);
  }
  if (*VAR_24)
   FUNC_10("Geode %s\n", VAR_24);
  break;
 case 0x01011078:
  if (FUNC_2(&VAR_3,
      VAR_24, sizeof VAR_24) > 0 ) {
   FUNC_10("Geode %s\n", VAR_24);
   FUNC_0(VAR_22, VAR_2,
       ((void*)0), 0);
  }
  break;
 case 0x20801022:
  if (FUNC_2(&VAR_7,
      VAR_24, sizeof VAR_24) > 0 ) {
   VAR_17 = 6;
   VAR_16 = FUNC_5(FUNC_3, &VAR_17, "error");
  } else if (FUNC_2(&VAR_5,
      VAR_24, sizeof VAR_24) > 0 ) {
   VAR_17 = -6;
   VAR_19 = -25;
   VAR_21 = -27;
   VAR_16 = FUNC_5(FUNC_3, &VAR_17, "led1");
   VAR_18 = FUNC_5(FUNC_3, &VAR_19, "led2");
   VAR_20 = FUNC_5(FUNC_3, &VAR_21, "led3");




   FUNC_3(&VAR_17, 1);
  }
  if (*VAR_24)
   FUNC_10("Geode LX: %s\n", VAR_24);
  if (VAR_8)
   FUNC_10("MFGPT bar: %jx\n", FUNC_11(0x5140000d));
  FUNC_0(VAR_22, VAR_10, ((void*)0), 0);
  break;
 }
 return (VAR_1);
}
