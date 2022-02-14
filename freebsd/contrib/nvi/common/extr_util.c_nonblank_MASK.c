
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int recno_t ;
typedef int SCR ;
typedef int CHAR_T ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ,int **,size_t*,int*) ;

int
FUNC_2(
 SCR *VAR_0,
 recno_t VAR_1,
 size_t *VAR_2)
{
 CHAR_T *VAR_3;
 size_t VAR_4, VAR_5, VAR_6;
 int VAR_7;


 VAR_6 = *VAR_2;
 *VAR_2 = 0;


 if (FUNC_1(VAR_0, VAR_1, &VAR_3, &VAR_5, &VAR_7))
  return (!VAR_7);


 if (VAR_5 == 0 || VAR_6 >= VAR_5)
  return (0);

 for (VAR_4 = VAR_6, VAR_3 = &VAR_3[VAR_6],
     VAR_5 -= VAR_6; VAR_5 && FUNC_0(*VAR_3); ++VAR_4, ++VAR_3, --VAR_5);


 *VAR_2 = VAR_5 ? VAR_4 : VAR_4 - 1;
 return (0);
}
