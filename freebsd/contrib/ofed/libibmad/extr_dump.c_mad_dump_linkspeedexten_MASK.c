
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,char*,char*) ;

void FUNC_2(char *VAR_0, int VAR_1, void *VAR_2, int VAR_3)
{
 int VAR_4 = *(int *)VAR_2;

 if (VAR_4 == 30) {
  FUNC_1(VAR_0, "%s", "Extended link speeds disabled");
  return;
 }
 FUNC_0(VAR_0, VAR_1, VAR_4);
}
