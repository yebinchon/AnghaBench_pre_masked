
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_boolean ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 int VAR_1 ;

__attribute__((used)) static bfd_boolean
FUNC_1 (const char **VAR_2, unsigned int *VAR_3)
{
  if (! FUNC_0 (**VAR_2))
    return VAR_0;

  *VAR_3 = **VAR_2 - '0';
  ++*VAR_2;
  if (FUNC_0 (**VAR_2))
    {
      unsigned int VAR_4;
      const char *VAR_5;

      VAR_4 = *VAR_3;
      VAR_5 = *VAR_2;
      do
 {
   VAR_4 *= 10;
   VAR_4 += *VAR_5 - '0';
   ++VAR_5;
 }
      while (FUNC_0 (*VAR_5));
      if (*VAR_5 == '_')
 {
   *VAR_2 = VAR_5 + 1;
   *VAR_3 = VAR_4;
 }
    }

  return VAR_1;
}
