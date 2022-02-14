
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;

char *
FUNC_2 (char * VAR_1)
{
  int VAR_2;

  if (VAR_0 && (VAR_2 = FUNC_1 (VAR_1)) > 5
      && FUNC_0 (VAR_1 + VAR_2 - 5, "/data"))
    *(VAR_1 + VAR_2 - 5) = 0;

  return VAR_1;
}
