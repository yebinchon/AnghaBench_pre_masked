
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char*,char*) ;
 char* FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int VAR_3 ;

void
FUNC_4(int VAR_4, char *VAR_5[])
{

 if (VAR_4 == 1) {
  VAR_2 = !VAR_2;
  VAR_0 = VAR_2;
 } else if (VAR_4 != 2) {
 passiveusage:
  FUNC_0("usage: %s [ on | off | auto ]\n", VAR_5[0]);
  VAR_1 = -1;
  return;
 } else if (FUNC_3(VAR_5[1], "on") == 0) {
  VAR_2 = 1;
  VAR_0 = 0;
 } else if (FUNC_3(VAR_5[1], "off") == 0) {
  VAR_2 = 0;
  VAR_0 = 0;
 } else if (FUNC_3(VAR_5[1], "auto") == 0) {
  VAR_2 = 1;
  VAR_0 = 1;
 } else
  goto passiveusage;
 FUNC_1(VAR_3, "Passive mode: %s; fallback to active mode: %s.\n",
     FUNC_2(VAR_2), FUNC_2(VAR_0));
 VAR_1 = VAR_2;
}
