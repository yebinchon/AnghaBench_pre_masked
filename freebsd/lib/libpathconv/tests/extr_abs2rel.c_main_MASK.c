
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,...) ;
 int VAR_1 ;
 int FUNC_5 (char*,char*) ;

int
FUNC_6(int VAR_2, char *VAR_3[])
{
 char VAR_4[VAR_0];
 char VAR_5[VAR_0];

 if (VAR_2 < 2) {
  FUNC_2(VAR_1, "usage: abs2rel path [base]\n");
  FUNC_1(1);
 }
 if (VAR_2 == 2) {
  if (!FUNC_3(VAR_5, VAR_0)) {
   FUNC_2(VAR_1, "cannot get current directory.\n");
   FUNC_1(1);
  }
 } else
  FUNC_5(VAR_5, VAR_3[2]);

 if (FUNC_0(VAR_3[1], VAR_5, VAR_4, VAR_0)) {
  FUNC_4("%s\n", VAR_4);
 } else
  FUNC_4("ERROR\n");
 FUNC_1(0);
}
