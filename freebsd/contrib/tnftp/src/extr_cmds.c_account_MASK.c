
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*) ;

void
FUNC_5(int VAR_1, char *VAR_2[])
{
 char *VAR_3;
 char VAR_4[] = "";

 if (VAR_1 == 0 || VAR_1 > 2) {
  FUNC_0("usage: %s [password]\n", VAR_2[0]);
  VAR_0 = -1;
  return;
 }
 else if (VAR_1 == 2)
  VAR_3 = VAR_2[1];
 else {
  VAR_3 = FUNC_2("Account:");
  if (VAR_3 == ((void*)0))
   VAR_3 = VAR_4;
 }
 (void)FUNC_1("ACCT %s", VAR_3);
 FUNC_3(VAR_3, 0, FUNC_4(VAR_3));
}
