
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef short rman_res_t ;
typedef int driver_t ;
typedef int * device_t ;
typedef int * devclass_t ;


 int * FUNC_0 (int *,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 short VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int ,int ,short*,short*) ;
 int FUNC_2 (int *,int ,int ,short,short) ;
 int FUNC_3 (int *,int ,int ,short,short,short) ;
 scalar_t__ FUNC_4 (short,int,int) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (int *,int ***,int*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int **,int ) ;
 short* VAR_5 ;

__attribute__((used)) static void FUNC_12 (driver_t *VAR_6, device_t VAR_7)
{
 rman_res_t VAR_8, VAR_9;
 int VAR_10;
 device_t *VAR_11;
 device_t VAR_12;
 devclass_t VAR_13;
 int VAR_14, VAR_15;

 if ((VAR_13 = FUNC_5 ("ct")) == ((void*)0))
  return;

 FUNC_6 (VAR_13, &VAR_11, &VAR_10);

 if (VAR_10 == 0) {



  for (VAR_14 = 0; (VAR_8 = VAR_5 [VAR_14]) != 0; VAR_14++) {
   if (!FUNC_3 (VAR_7, 0, VAR_4,
       VAR_8, VAR_8 + VAR_3, VAR_3))
    continue;
   if (FUNC_4 (VAR_8, -1, -1) == 0)
    continue;

   VAR_10++;
   VAR_12 = FUNC_0 (VAR_7, VAR_0, "ct",
       -1);

   if (VAR_12 == ((void*)0))
    return;

   FUNC_9 (VAR_12, "Cronyx Tau-ISA");
   FUNC_10 (VAR_12, VAR_6);
   FUNC_2 (VAR_12, VAR_4, 0,
       VAR_8, VAR_3);

   if (VAR_10 >= VAR_2)
    break;
  }
 } else {
  static short VAR_16 [] = {
   0x200, 0x220, 0x240, 0x260, 0x280, 0x2a0, 0x2c0, 0x2e0,
   0x300, 0x320, 0x340, 0x360, 0x380, 0x3a0, 0x3c0, 0x3e0, 0
  };


  for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
   if (FUNC_1 (VAR_11[VAR_15], VAR_4, 0,
       &VAR_8, &VAR_9) != 0)
    continue;

   for (VAR_14 = 0; VAR_16 [VAR_14] != 0; VAR_14++) {
    if (VAR_16 [VAR_14] != VAR_8)
     continue;

    if (!FUNC_3 (VAR_11[VAR_15], 0, VAR_4,
        VAR_8, VAR_8 + VAR_3, VAR_3))
     continue;

    if (FUNC_4 (VAR_8, -1, -1) == 0)
     continue;
    VAR_16 [VAR_14] = -1;
    FUNC_9 (VAR_11[VAR_15], "Cronyx Tau-ISA");
    break;
   }
   if (VAR_16 [VAR_14] == 0) {
    FUNC_7 (
        FUNC_8 (VAR_11[VAR_15]),
        VAR_11 [VAR_15]);
    VAR_11[VAR_15] = 0;
    continue;
   }
  }
  for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
   if (VAR_11[VAR_15] == 0)
    continue;
   if (FUNC_1 (VAR_11[VAR_15], VAR_4, 0,
       &VAR_8, &VAR_9) == 0)
    continue;
   for (VAR_14 = 0; (VAR_8 = VAR_16 [VAR_14]) != 0; VAR_14++) {
    if (VAR_16 [VAR_14] == -1)
     continue;
    if (!FUNC_3 (VAR_11[VAR_15], 0, VAR_4,
        VAR_8, VAR_8 + VAR_3, VAR_3))
     continue;
    if (FUNC_4 (VAR_8, -1, -1) == 0)
     continue;

    FUNC_2 (VAR_11[VAR_15], VAR_4, 0,
        VAR_8, VAR_3);
    VAR_16 [VAR_14] = -1;
    FUNC_9 (VAR_11[VAR_15], "Cronyx Tau-ISA");
    break;
   }
   if (VAR_16 [VAR_14] == 0) {
    FUNC_7 (
        FUNC_8 (VAR_11[VAR_15]),
        VAR_11 [VAR_15]);
   }
  }
  FUNC_11 (VAR_11, VAR_1);
 }

 return;
}
