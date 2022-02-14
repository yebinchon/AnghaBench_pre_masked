
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mi_opt {int dummy; } ;


 int FUNC_0 (char const*,int,char**,struct mi_opt*,int*,char**) ;

int
FUNC_1 (const char *VAR_0, int VAR_1, char **VAR_2)
{
  int VAR_3 = 0;
  char *VAR_4;
  static struct mi_opt VAR_5[] =
  {
    0
  };

  if (FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_5, &VAR_3, &VAR_4) == -1)
    return 1;
  else
    return 0;
}
