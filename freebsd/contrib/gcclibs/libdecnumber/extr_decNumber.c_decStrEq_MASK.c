
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Flag ;


 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static Flag
FUNC_1 (const char *VAR_0, const char *VAR_1)
{
  for (;; VAR_0++, VAR_1++)
    {
      unsigned char VAR_2 = (unsigned char) *VAR_0;
      unsigned char VAR_3 = (unsigned char) *VAR_1;
      if (VAR_2 == VAR_3)
 {
   if (VAR_2 == '\0')
     break;
 }
      else
 {
   if (FUNC_0 (VAR_2) != FUNC_0 (VAR_3))
     return 0;
 }
    }
  return 1;
}
