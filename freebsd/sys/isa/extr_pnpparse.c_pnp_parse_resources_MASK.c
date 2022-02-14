
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;
struct isa_config {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ,int ,int,struct isa_config*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;



 int VAR_4 ;
 int FUNC_5 (struct isa_config*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct isa_config*,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int,int ,int) ;
 int FUNC_11 (int ,struct isa_config*,struct isa_config*) ;
 int FUNC_12 (int ,int*,int,struct isa_config*,int) ;
 scalar_t__ FUNC_13 (int ,int,int*,int,struct isa_config*,int) ;
 int FUNC_14 (int ,char*,...) ;

void
FUNC_15(device_t VAR_5, u_char *VAR_6, int VAR_7, int VAR_8)
{
 struct isa_config *VAR_9;
 struct isa_config *VAR_10;
 device_t VAR_11;
 int VAR_12[1 + VAR_0];
 u_char *VAR_13;
 u_char *VAR_14;
 u_char VAR_15;
 u_int32_t VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_11 = FUNC_6(VAR_5);
 VAR_16 = FUNC_9(VAR_5);

 VAR_9 = (struct isa_config *)FUNC_10(sizeof(*VAR_9)*(1 + VAR_0),
           VAR_1, VAR_2 | VAR_3);
 if (VAR_9 == ((void*)0)) {
  FUNC_7(VAR_11, "No memory to parse PNP data\n");
  return;
 }
 VAR_10 = &VAR_9[0];
 VAR_12[0] = 0;
 VAR_17 = 1;

 VAR_14 = VAR_6;
 VAR_13 = ((void*)0);
 while (VAR_7 > 0) {
  VAR_15 = *VAR_14++;
  VAR_7--;
  if (FUNC_2(VAR_15) == 0) {

   VAR_18 = FUNC_3(VAR_15);
   if (VAR_7 < VAR_18) {
    VAR_7 = 0;
    continue;
   }
   VAR_7 -= VAR_18;

   switch (FUNC_4(VAR_15)) {

   case 128:
    if (VAR_13 != ((void*)0)) {




     FUNC_11(VAR_5, &VAR_9[0],
           VAR_10);
     FUNC_12(VAR_5, VAR_13,
           VAR_14 - VAR_13 - 1,
           VAR_10, VAR_8);
    }
    VAR_13 = VAR_14 + VAR_18;
    if (VAR_17 > VAR_0) {
     FUNC_7(VAR_11, "too many dependent configs (%d)\n", VAR_0);
     VAR_7 = 0;
     break;
    }
    VAR_10 = &VAR_9[VAR_17];




    if (VAR_18 > 0)
     VAR_12[VAR_17] = VAR_14[0];
    else
     VAR_12[VAR_17] = 1;
    if (VAR_4)
     FUNC_14(VAR_16, "start dependent (%d)\n",
         VAR_12[VAR_17]);
    VAR_17++;
    break;

   case 129:
    if (VAR_13 == ((void*)0)) {
     FUNC_7(VAR_11,
            "malformed resources\n");
     VAR_7 = 0;
     break;
    }




    FUNC_11(VAR_5, &VAR_9[0], VAR_10);
    FUNC_12(VAR_5, VAR_13, VAR_14 - VAR_13 - 1,
          VAR_10, VAR_8);
    VAR_13 = ((void*)0);
    if (VAR_4)
     FUNC_14(VAR_16, "end dependent\n");





    VAR_10 = &VAR_9[0];
    FUNC_5(VAR_10, sizeof(*VAR_10));
    break;

   case 130:
    if (VAR_13 != ((void*)0)) {
     FUNC_7(VAR_11,
            "malformed resources\n");
    }
    VAR_7 = 0;
    break;

   default:
    if (VAR_13 != ((void*)0))

     break;
    if (FUNC_13(VAR_5, VAR_15, VAR_14, VAR_18, VAR_10, VAR_8))
     VAR_7 = 0;
    break;
   }
   VAR_14 += VAR_18;
  } else {

   if (VAR_7 < 2) {
    VAR_7 = 0;
    break;
   }
   VAR_18 = FUNC_0(VAR_14);
   VAR_14 += 2;
   VAR_7 -= 2;
   if (VAR_7 < VAR_18) {
    VAR_7 = 0;
    break;
   }
   VAR_7 -= VAR_18;
   if (VAR_13 == ((void*)0) &&
       FUNC_13(VAR_5, VAR_15, VAR_14, VAR_18, VAR_10, VAR_8)) {
    VAR_7 = 0;
    break;
   }
   VAR_14 += VAR_18;
  }
 }

 if (VAR_17 == 1) {

  FUNC_1(VAR_11, VAR_5, VAR_12[0], &VAR_9[0]);
  FUNC_8(VAR_9, VAR_1);
  return;
 }

 for (VAR_19 = 1; VAR_19 < VAR_17; VAR_19++) {





  FUNC_11(VAR_5, &VAR_9[0], &VAR_9[VAR_19]);
  FUNC_1(VAR_11, VAR_5, VAR_12[VAR_19], &VAR_9[VAR_19]);
 }

 FUNC_8(VAR_9, VAR_1);
}
