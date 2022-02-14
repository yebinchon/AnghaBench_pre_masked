
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*) ;

void
FUNC_7(int VAR_4, char *VAR_5[])
{
 char *VAR_6;

 VAR_0 = -1;
 if (VAR_4 == 1) {
  VAR_4++;
  VAR_5[1] = VAR_2;
 }
 if (VAR_4 != 2) {
  FUNC_0("usage: %s [local-directory]\n", VAR_5[0]);
  return;
 }
 if ((VAR_6 = FUNC_4(VAR_5[1])) == ((void*)0))
  return;
 if (FUNC_1(VAR_6) == -1)
  FUNC_6("Can't chdir `%s'", VAR_6);
 else {
  FUNC_5();
  if (VAR_1[0]) {
   FUNC_2(VAR_3, "Local directory now: %s\n", VAR_1);
   VAR_0 = 0;
  } else {
   FUNC_2(VAR_3, "Unable to determine local directory\n");
  }
 }
 (void)FUNC_3(VAR_6);
}
