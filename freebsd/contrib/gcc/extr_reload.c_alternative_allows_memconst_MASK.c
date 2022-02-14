
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char const*) ;
 scalar_t__ FUNC_1 (int,char const*) ;

__attribute__((used)) static int
FUNC_2 (const char *VAR_0, int VAR_1)
{
  int VAR_2;

  while (VAR_1 > 0)
    {
      while (*VAR_0++ != ',');
      VAR_1--;
    }


  for (; (VAR_2 = *VAR_0) && VAR_2 != ',' && VAR_2 != '#';
       VAR_0 += FUNC_0 (VAR_2, VAR_0))
    if (VAR_2 == 'm' || VAR_2 == 'o' || FUNC_1 (VAR_2, VAR_0))
      return 1;
  return 0;
}
