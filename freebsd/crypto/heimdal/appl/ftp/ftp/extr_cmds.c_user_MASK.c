
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int acctstr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,int ) ;
 int FUNC_1 (int*,char***,char*) ;
 int VAR_2 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_7 (char*,char*) ;

void
FUNC_8(int VAR_5, char **VAR_6)
{
 char VAR_7[80];
 int VAR_8, VAR_9 = 0;
 char VAR_10[256];

 if (VAR_5 < 2)
  FUNC_1(&VAR_5, &VAR_6, "username");
 if (VAR_5 < 2 || VAR_5 > 4) {
  FUNC_6("usage: %s username [password] [account]\n", VAR_6[0]);
  VAR_2 = -1;
  return;
 }
 VAR_8 = FUNC_2("USER %s", VAR_6[1]);
 if (VAR_8 == VAR_1) {
     if (VAR_5 < 3 ) {
  FUNC_0 (VAR_10,
        sizeof(VAR_10),
        "Password: ", 0);
  VAR_6[2] = VAR_10;
  VAR_5++;
     }
     VAR_8 = FUNC_2("PASS %s", VAR_6[2]);
 }
 if (VAR_8 == VAR_1) {
  if (VAR_5 < 4) {
   FUNC_6("Account: "); FUNC_3(VAR_4);
   FUNC_4(VAR_7, sizeof(VAR_7) - 1, VAR_3);
   VAR_7[FUNC_7(VAR_7, "\r\n")] = '\0';
   VAR_6[3] = VAR_7; VAR_5++;
  }
  VAR_8 = FUNC_2("ACCT %s", VAR_6[3]);
  VAR_9++;
 }
 if (VAR_8 != VAR_0) {
  FUNC_5(VAR_4, "Login failed.\n");
  return;
 }
 if (!VAR_9 && VAR_5 == 4) {
  FUNC_2("ACCT %s", VAR_6[3]);
 }
}
