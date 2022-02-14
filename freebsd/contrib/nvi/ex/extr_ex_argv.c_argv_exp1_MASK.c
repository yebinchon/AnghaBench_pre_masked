
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCR ;
typedef int EX_PRIVATE ;
typedef int EXCMD ;
typedef int CHAR_T ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (int *,int *,size_t,int) ;
 int FUNC_3 (int *,int *,int *,size_t) ;
 scalar_t__ FUNC_4 (int *,int *,int *,size_t,int *,size_t*,int **,size_t*,int) ;
 int FUNC_5 (int ) ;

int
FUNC_6(SCR *VAR_0, EXCMD *VAR_1, CHAR_T *VAR_2, size_t VAR_3, int VAR_4)
{
 EX_PRIVATE *VAR_5;
 size_t VAR_6, VAR_7;
 CHAR_T *VAR_8, *VAR_9, *VAR_10;

 FUNC_2(VAR_0, VAR_10, VAR_6, 512);

 VAR_7 = 0;
 VAR_5 = FUNC_0(VAR_0);
 if (FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_10, &VAR_7, &VAR_10, &VAR_6, VAR_4)) {
  FUNC_1(VAR_0, VAR_10, VAR_6);
  return (1);
 }


 if (VAR_7 != 0) {
  for (VAR_8 = VAR_10, VAR_9 = VAR_10 + VAR_7; VAR_8 < VAR_9; ++VAR_8)
   if (!FUNC_5(*VAR_8))
    break;
  if (VAR_8 == VAR_9)
   goto ret;
 } else
  goto ret;

 (void)FUNC_3(VAR_0, VAR_1, VAR_10, VAR_7);

ret: FUNC_1(VAR_0, VAR_10, VAR_6);
 return (0);
}
