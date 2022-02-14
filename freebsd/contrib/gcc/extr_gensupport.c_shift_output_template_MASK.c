
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (unsigned char) ;

__attribute__((used)) static char *
FUNC_2 (char *VAR_0, const char *VAR_1, int VAR_2)
{
  while (*VAR_1)
    {
      char VAR_3 = *VAR_1++;
      *VAR_0++ = VAR_3;
      if (VAR_3 == '%')
 {
   VAR_3 = *VAR_1++;
   if (FUNC_1 ((unsigned char) VAR_3))
     VAR_3 += VAR_2;
   else if (FUNC_0 (VAR_3))
     {
       *VAR_0++ = VAR_3;
       VAR_3 = *VAR_1++ + VAR_2;
     }
   *VAR_0++ = VAR_3;
 }
    }

  return VAR_0;
}
