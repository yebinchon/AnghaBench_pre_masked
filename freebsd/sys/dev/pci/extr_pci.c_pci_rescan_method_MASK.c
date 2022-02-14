
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ***,int*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ) ;
 int ** FUNC_8 (int,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int,int,int,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int
FUNC_14(device_t VAR_9)
{

 device_t VAR_10 = FUNC_5(VAR_9);
 device_t VAR_11, *VAR_12, *VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 uint8_t VAR_25;


 VAR_15 = FUNC_4(VAR_9, &VAR_12, &VAR_14);
 if (VAR_15)
  return (VAR_15);
 if (VAR_14 != 0) {
  VAR_13 = FUNC_8(VAR_14 * sizeof(device_t), VAR_2,
      VAR_1 | VAR_3);
  if (VAR_13 == ((void*)0)) {
   FUNC_7(VAR_12, VAR_2);
   return (VAR_0);
  }
 } else
  VAR_13 = ((void*)0);

 VAR_21 = FUNC_13(VAR_9);
 VAR_20 = FUNC_12(VAR_9);
 VAR_18 = FUNC_1(VAR_10);
 for (VAR_22 = 0; VAR_22 <= VAR_18; VAR_22++) {

  VAR_23 = 0;
  if (FUNC_0(VAR_10, VAR_20, VAR_22, VAR_23, VAR_7, 2) == 0xffff)
   continue;
  VAR_24 = 0;
  VAR_25 = FUNC_0(VAR_10, VAR_20, VAR_22, VAR_23, VAR_6, 1);
  if ((VAR_25 & VAR_4) > VAR_8)
   continue;
  if (VAR_25 & VAR_5)
   VAR_24 = FUNC_0(VAR_10);
  for (VAR_23 = 0; VAR_23 <= VAR_24; VAR_23++) {
   if (FUNC_0(VAR_10, VAR_20, VAR_22, VAR_23, VAR_7, 2) == 0xffff)
    continue;





   for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
    VAR_11 = VAR_12[VAR_16];
    if (VAR_11 == ((void*)0))
     continue;
    if (FUNC_10(VAR_11) == VAR_22 &&
        FUNC_9(VAR_11) == VAR_23) {
     VAR_13[VAR_16] = VAR_11;
     goto next_func;
    }
   }

   FUNC_11(VAR_10, VAR_9, VAR_21, VAR_20, VAR_22, VAR_23);
  next_func:;
  }
 }


 for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
  if (VAR_13[VAR_16] != ((void*)0))
   continue;
  FUNC_3(VAR_9, VAR_12[VAR_16]);
 }

 FUNC_7(VAR_12, VAR_2);
 VAR_19 = VAR_14;


 VAR_15 = FUNC_4(VAR_9, &VAR_12, &VAR_14);
 if (VAR_15) {
  FUNC_7(VAR_13, VAR_2);
  return (VAR_15);
 }

 for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
  for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17++) {
   if (VAR_12[VAR_16] == VAR_13[VAR_17])
    goto next_device;
  }

  FUNC_6(VAR_12[VAR_16]);
 next_device:;
 }

 FUNC_7(VAR_13, VAR_2);
 FUNC_7(VAR_12, VAR_2);
 return (0);

}
