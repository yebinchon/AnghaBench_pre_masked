
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mapped ;
typedef int TERMTYPE ;


 size_t FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 char* VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int) ;
 scalar_t__ FUNC_5 (char*,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static void
FUNC_7(TERMTYPE *VAR_1)
{
    if (FUNC_1(VAR_0)) {
 const char *VAR_2 = "lmkjtuvwqxn";
 char VAR_3[256];
 char VAR_4[256];
 const char *VAR_5;
 char *VAR_6;

 FUNC_4(VAR_3, 0, sizeof(VAR_3));
 for (VAR_5 = VAR_0; *VAR_5 != '\0'; VAR_5 += 2) {
     if (VAR_5[1] == '\0') {
  FUNC_2("acsc has odd number of characters");
  break;
     }
     VAR_3[FUNC_0(VAR_5[0])] = VAR_5[1];
 }

 if (VAR_3[FUNC_0('I')] && !VAR_3[FUNC_0('i')]) {
     FUNC_2("acsc refers to 'I', which is probably an error");
 }

 for (VAR_5 = VAR_2, VAR_6 = VAR_4; *VAR_5 != '\0'; ++VAR_5) {
     if (!VAR_3[FUNC_0(VAR_5[0])]) {
  *VAR_6++ = VAR_5[0];
     }
 }
 *VAR_6 = '\0';

 FUNC_3(FUNC_6(VAR_4) <= FUNC_6(VAR_2));
 if (*VAR_4 != '\0' && FUNC_5(VAR_4, VAR_2)) {
     FUNC_2("acsc is missing some line-drawing mapping: %s", VAR_4);
 }
    }
}
