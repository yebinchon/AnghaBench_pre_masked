
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*,scalar_t__) ;

int
FUNC_2 (char *VAR_0, char *VAR_1)
{
  int VAR_2;
  if (VAR_1 != (char *) ((void*)0) && VAR_0 != (char *) ((void*)0)
      && FUNC_0 (VAR_0) <= FUNC_0 (VAR_1))
    VAR_2 =
      (FUNC_1
       (VAR_1, VAR_0, FUNC_0 (VAR_0)) == 0);
  else
    VAR_2 = 0;
  return VAR_2;
}
