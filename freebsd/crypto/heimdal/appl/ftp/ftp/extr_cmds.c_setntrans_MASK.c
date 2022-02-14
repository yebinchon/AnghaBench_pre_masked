
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;

void
FUNC_2(int VAR_4, char **VAR_5)
{
 if (VAR_4 == 1) {
  VAR_1 = 0;
  FUNC_0("Ntrans off.\n");
  VAR_0 = VAR_1;
  return;
 }
 VAR_1++;
 VAR_0 = VAR_1;
 FUNC_1 (VAR_2, VAR_5[1], 17);
 if (VAR_4 == 2) {
  VAR_3[0] = '\0';
  return;
 }
 FUNC_1 (VAR_3, VAR_5[2], 17);
}
