
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int32 ;
typedef int int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

int
FUNC_2(
 int VAR_5 ,
 int VAR_6 ,
 int VAR_7 ,
 int VAR_8 ,
 int VAR_9 ,
 u_int32 VAR_10 ,
 u_long *VAR_11,
 u_int32 *VAR_12 )
{
 u_int32 VAR_13[3];
 u_int32 VAR_14[3];
 u_int32 VAR_15[3];
 int32 VAR_16, VAR_17, VAR_18, VAR_19;





 VAR_17 = ((int32)VAR_8 +
        VAR_4 * ((int32)VAR_7 +
        VAR_2 * ((int32)VAR_6 + (int32)VAR_9 +
       VAR_1 * ((int32)VAR_5 - 1))));







 if (*VAR_11) {

  VAR_14[0] = (u_int32)(*VAR_11) + VAR_17;

  VAR_15[0] = VAR_14[0] - VAR_10;
  if (VAR_15[0] >= 0x80000000u)
   VAR_15[0] = ~VAR_15[0] + 1;

  if (VAR_15[0] < VAR_3) {
   *VAR_12 = VAR_14[0];
   return VAR_15[0] < VAR_0;
  }
 }
 VAR_16 = FUNC_0(VAR_10 - VAR_17);
 for (VAR_18 = 0; VAR_18 < 3; VAR_18++) {

  VAR_13[VAR_18] = FUNC_1(VAR_16 + VAR_18 - 1);

  VAR_14[VAR_18] = VAR_13[VAR_18] + VAR_17;

  VAR_15[VAR_18] = VAR_14[VAR_18] - VAR_10;
  if (VAR_15[VAR_18] >= 0x80000000u)
   VAR_15[VAR_18] = ~VAR_15[VAR_18] + 1;
 }

 for (VAR_19 = 1, VAR_18 = 0; VAR_18 < 3; VAR_18++)
  if (VAR_15[VAR_18] < VAR_15[VAR_19])
   VAR_19 = VAR_18;

 *VAR_12 = VAR_14[VAR_19];
 *VAR_11 = VAR_13[VAR_19];


 return VAR_15[VAR_19] < VAR_0;
}
