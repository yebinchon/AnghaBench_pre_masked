
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 char* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int VAR_0 ;

int
FUNC_4(int VAR_1, char *VAR_2[], int *VAR_3, const char *VAR_4)
{
 if (VAR_1 == 1) {
  *VAR_3 = !*VAR_3;
 } else if (VAR_1 == 2 && FUNC_3(VAR_2[1], "on") == 0) {
  *VAR_3 = 1;
 } else if (VAR_1 == 2 && FUNC_3(VAR_2[1], "off") == 0) {
  *VAR_3 = 0;
 } else {
  FUNC_0("usage: %s [ on | off ]\n", VAR_2[0]);
  return (-1);
 }
 if (VAR_4)
  FUNC_1(VAR_0, "%s %s.\n", VAR_4, FUNC_2(*VAR_3));
 return (*VAR_3);
}
