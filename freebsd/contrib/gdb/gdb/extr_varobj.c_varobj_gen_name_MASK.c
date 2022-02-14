
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char*,int) ;

char *
FUNC_1 (void)
{
  static int VAR_0 = 0;
  char *VAR_1;


  VAR_0++;
  FUNC_0 (&VAR_1, "var%d", VAR_0);

  return VAR_1;
}
