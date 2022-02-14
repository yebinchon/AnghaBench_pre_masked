
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char const*) ;

uint8_t
FUNC_1(const char *VAR_0)
{
 const char *VAR_1;

 if (VAR_0 == ((void*)0))
  return 0;




 VAR_1 = VAR_0 + FUNC_0(VAR_0);
 while (--VAR_1 >= VAR_0) {






  if (*VAR_1 == '\n')
   return (0);
  else if (*VAR_1 == 'n' && --VAR_1 > VAR_0 && *VAR_1 == '\\')
   return (1);
 }

 return (0);
}
