
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EXCMDLIST ;
typedef char CHAR_T ;


 size_t VAR_0 ;
 int const* VAR_1 ;
 int* FUNC_0 (char*,size_t) ;

int
FUNC_1(CHAR_T *VAR_2, size_t VAR_3)
{
 EXCMDLIST const *VAR_4;





 if (VAR_2[VAR_3 - 1] != '!')
  return (0);
 --VAR_3;
 return ((VAR_4 = FUNC_0(VAR_2, VAR_3)) != ((void*)0) &&
     VAR_4 == &VAR_1[VAR_0]);
}
