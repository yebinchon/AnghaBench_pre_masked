
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acctstr ;


 int FUNC_0 (char*,int,char*,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*,int) ;

void
FUNC_4(int VAR_0, char **VAR_1)
{
 char VAR_2[50];

 if (VAR_0 > 1) {
  ++VAR_1;
  --VAR_0;
  FUNC_3 (VAR_2, *VAR_1, sizeof(VAR_2));
  while (VAR_0 > 1) {
   --VAR_0;
   ++VAR_1;
   FUNC_2(VAR_2, *VAR_1, sizeof(VAR_2));
  }
 }
 else {
     FUNC_0(VAR_2, sizeof(VAR_2), "Account:", 0);
 }
 FUNC_1("ACCT %s", VAR_2);
}
