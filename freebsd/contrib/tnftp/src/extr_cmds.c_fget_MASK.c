
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmdbuf ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 scalar_t__ FUNC_4 (int *,char*,int,int *) ;
 int FUNC_5 (int,char**,int ,char const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (char*,char*,int) ;
 int VAR_4 ;

void
FUNC_7(int VAR_5, char *VAR_6[])
{
 const char *VAR_7;
 FILE *VAR_8;
 char VAR_9[VAR_0], VAR_10[VAR_1];

 if (VAR_5 != 2) {
  FUNC_0("usage: %s localfile\n", VAR_6[0]);
  VAR_2 = -1;
  return;
 }

 VAR_8 = FUNC_2(VAR_6[1], "r");
 if (VAR_8 == ((void*)0)) {
  FUNC_3(VAR_4, "Can't open source file %s\n", VAR_6[1]);
  VAR_2 = -1;
  return;
 }

 (void)FUNC_6(VAR_10, "get", sizeof(VAR_10));
 VAR_6[0] = VAR_10;
 VAR_7 = VAR_3 ? "r+" : "w";

 while (FUNC_4(VAR_8, VAR_9, sizeof(VAR_9), ((void*)0)) >= 0) {
  if (VAR_9[0] == '\0')
   continue;
  VAR_6[1] = VAR_9;
  (void)FUNC_5(VAR_5, VAR_6, 0, VAR_7);
 }
 FUNC_1(VAR_8);
}
