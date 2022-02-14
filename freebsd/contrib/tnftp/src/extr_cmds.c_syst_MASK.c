
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;

void
FUNC_2(int VAR_2, char *VAR_3[])
{
 int VAR_4 = VAR_1;

 if (VAR_2 == 0) {
  FUNC_0("usage: %s\n", VAR_3[0]);
  VAR_0 = -1;
  return;
 }
 VAR_1 = 1;
 (void)FUNC_1("SYST");
 VAR_1 = VAR_4;
}
