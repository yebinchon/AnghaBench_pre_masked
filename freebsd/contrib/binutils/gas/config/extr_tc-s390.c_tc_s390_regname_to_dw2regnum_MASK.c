
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

int
FUNC_2 (char *VAR_2)
{
  int VAR_3 = -1;

  if (VAR_2[0] != 'c' && VAR_2[0] != 'a')
    {
      VAR_3 = FUNC_0 (VAR_1, VAR_0, VAR_2);
      if (VAR_2[0] == 'f' && VAR_3 != -1)
        VAR_3 += 16;
    }
  else if (FUNC_1 (VAR_2, "ap") == 0)
    VAR_3 = 32;
  else if (FUNC_1 (VAR_2, "cc") == 0)
    VAR_3 = 33;
  return VAR_3;
}
