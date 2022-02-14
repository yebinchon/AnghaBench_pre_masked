
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t int32_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int volatile*) ;
 char** VAR_2 ;

char *
FUNC_1(volatile int *VAR_3)
{
 int32_t VAR_4 = (int32_t)FUNC_0(VAR_3);

 if (VAR_4 > VAR_0 || VAR_4 < 0)
  return (VAR_2[VAR_1]);

 return (VAR_2[VAR_4]);
}
