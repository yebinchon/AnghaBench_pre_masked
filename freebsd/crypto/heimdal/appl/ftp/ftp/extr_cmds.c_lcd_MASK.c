
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_1 ;
 int * FUNC_1 (char*,int) ;
 int FUNC_2 (char**) ;
 char* VAR_2 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;

void
FUNC_6(int VAR_3, char **VAR_4)
{
 char VAR_5[VAR_0];

 if (VAR_3 < 2)
  VAR_3++, VAR_4[1] = VAR_2;
 if (VAR_3 != 2) {
  FUNC_3("usage: %s local-directory\n", VAR_4[0]);
  VAR_1 = -1;
  return;
 }
 if (!FUNC_2(&VAR_4[1])) {
  VAR_1 = -1;
  return;
 }
 if (FUNC_0(VAR_4[1]) < 0) {
  FUNC_4("local: %s", VAR_4[1]);
  VAR_1 = -1;
  return;
 }
 if (FUNC_1(VAR_5, sizeof(VAR_5)) != ((void*)0))
  FUNC_3("Local directory now %s\n", VAR_5);
 else
  FUNC_5("getwd: %s", VAR_5);
 VAR_1 = 0;
}
