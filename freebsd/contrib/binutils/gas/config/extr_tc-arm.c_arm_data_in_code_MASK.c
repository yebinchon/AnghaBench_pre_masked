
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 scalar_t__ VAR_1 ;

int
FUNC_1 (void)
{
  if (VAR_1 && ! FUNC_0 (VAR_0 + 1, "data:", 5))
    {
      *VAR_0 = '/';
      VAR_0 += 5;
      *VAR_0 = 0;
      return 1;
    }

  return 0;
}
