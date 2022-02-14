
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 scalar_t__ FUNC_0 (char**,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;

void
FUNC_3 (char *VAR_3)
{
  int VAR_4;

  if (VAR_0 == 0)
    {
      VAR_2 = (char **) FUNC_2 (2 * sizeof (*VAR_2));
      VAR_2[0] = ".";
      VAR_0 = 2;
    }
  else
    {
      VAR_0++;
      VAR_2 =
 (char **) FUNC_0 (VAR_2,
      VAR_0 * sizeof (*VAR_2));
    }

  VAR_2[VAR_0 - 1] = VAR_3;

  VAR_4 = FUNC_1 (VAR_3);
  if (VAR_4 > VAR_1)
    VAR_1 = VAR_4;
}
