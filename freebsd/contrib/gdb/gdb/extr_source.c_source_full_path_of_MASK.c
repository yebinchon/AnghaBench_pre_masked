
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,char*,int ,int ,char**) ;
 int VAR_1 ;

int
FUNC_2 (char *VAR_2, char **VAR_3)
{
  int VAR_4;

  VAR_4 = FUNC_1 (VAR_1, 1, VAR_2, VAR_0, 0, VAR_3);
  if (VAR_4 < 0)
    {
      *VAR_3 = ((void*)0);
      return 0;
    }

  FUNC_0 (VAR_4);
  return 1;
}
