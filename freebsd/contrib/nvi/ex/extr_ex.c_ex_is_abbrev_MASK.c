
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EXCMDLIST ;
typedef int CHAR_T ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int const* VAR_2 ;
 int* FUNC_0 (int *,size_t) ;

int
FUNC_1(CHAR_T *VAR_3, size_t VAR_4)
{
 EXCMDLIST const *VAR_5;

 return ((VAR_5 = FUNC_0(VAR_3, VAR_4)) != ((void*)0) &&
     (VAR_5 == &VAR_2[VAR_0] || VAR_5 == &VAR_2[VAR_1]));
}
