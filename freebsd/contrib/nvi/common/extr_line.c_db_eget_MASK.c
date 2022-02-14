
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int recno_t ;
typedef int SCR ;
typedef int CHAR_T ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int ,int **,size_t*) ;
 scalar_t__ FUNC_2 (int *,int*) ;

int
FUNC_3(
 SCR *VAR_0,
 recno_t VAR_1,
 CHAR_T **VAR_2,
 size_t *VAR_3,
 int *VAR_4)
{
 recno_t VAR_5;

 if (VAR_4 != ((void*)0))
  *VAR_4 = 0;


 if (!FUNC_1(VAR_0, VAR_1, 0, VAR_2, VAR_3))
  return (0);






 if ((VAR_1 == 0 || VAR_1 == 1) && FUNC_2(VAR_0, &VAR_5))
  return (1);


 if ((VAR_1 != 0 && VAR_1 != 1) || VAR_5 != 0) {
  FUNC_0(VAR_0, VAR_1);
  return (1);
 }

 if (VAR_4 != ((void*)0))
  *VAR_4 = 1;

 return (1);
}
