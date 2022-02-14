
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ e_type ;
typedef scalar_t__ e_processor ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,char*,unsigned long*) ;

int
FUNC_1 (char *VAR_4, unsigned long *VAR_5)
{
  e_type VAR_6;
  e_processor VAR_7;

  for (VAR_7 = VAR_2; VAR_7 < VAR_0; VAR_7++)
    {
      for (VAR_6 = VAR_3; VAR_6 < VAR_1; VAR_6++)
 {
   if (FUNC_0 (VAR_7, VAR_6, VAR_4, VAR_5))
     return 1;
 }
    }
  return 0;
}
