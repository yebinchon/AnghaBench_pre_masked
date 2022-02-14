
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int*,char***,char*) ;
 int VAR_2 ;
 int FUNC_2 (char*,char*) ;
 int VAR_3 ;
 int FUNC_3 (char*,int ) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (char*) ;
 int VAR_4 ;

void
FUNC_8(int VAR_5, char *VAR_6[])
{
 char *VAR_7;
 char VAR_8[] = "";
 int VAR_9, VAR_10 = 0;

 if (VAR_5 == 0)
  goto usage;
 if (VAR_5 < 2)
  (void)FUNC_1(&VAR_5, &VAR_6, "username");
 if (VAR_5 < 2 || VAR_5 > 4) {
 usage:
  FUNC_0("usage: %s username [password [account]]\n",
      VAR_6[0]);
  VAR_2 = -1;
  return;
 }
 VAR_9 = FUNC_2("USER %s", VAR_6[1]);
 if (VAR_9 == VAR_1) {
  if (VAR_5 < 3) {
   VAR_7 = FUNC_4("Password: ");
   if (VAR_7 == ((void*)0))
    VAR_7 = VAR_8;
  } else {
   VAR_7 = VAR_6[2];
  }
  VAR_9 = FUNC_2("PASS %s", VAR_7);
  FUNC_6(VAR_7, 0, FUNC_7(VAR_7));
 }
 if (VAR_9 == VAR_1) {
  VAR_10++;
  if (VAR_5 < 4) {
   VAR_7 = FUNC_4("Account: ");
   if (VAR_7 == ((void*)0))
    VAR_7 = VAR_8;
  } else {
   VAR_7 = VAR_6[3];
  }
  VAR_9 = FUNC_2("ACCT %s", VAR_7);
  FUNC_6(VAR_7, 0, FUNC_7(VAR_7));
 }
 if (VAR_9 != VAR_0) {
  FUNC_3("Login failed.\n", VAR_4);
  return;
 }
 if (!VAR_10 && VAR_5 == 4) {
  VAR_7 = VAR_6[3];
  (void)FUNC_2("ACCT %s", VAR_7);
  FUNC_6(VAR_7, 0, FUNC_7(VAR_7));
 }
 VAR_3 = -1;
 FUNC_5();
}
