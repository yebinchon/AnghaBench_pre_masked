
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0 (int VAR_3, int VAR_4, int VAR_5)
{
  if (VAR_3 == VAR_0)
    {
      if (VAR_1 == 0)
 return 0;
      else if (VAR_1 < 0)
 return 1;
      else if (VAR_4 <= VAR_1)
 return 1;
    }
  else
    {
      if (VAR_2 == 0)
 return 0;
      else if (VAR_2 < 0)
 return 1;
      else if (VAR_5)
 return -1;
      else if (VAR_4 <= VAR_2)
 return 1;
    }
  return -1;
}
