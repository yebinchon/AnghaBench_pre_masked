
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sighand ;


 int VAR_0 ;
 int FUNC_0 (int*,char***,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,char*,char*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (char*,char*) ;

void
FUNC_8(int VAR_8, char **VAR_9)
{
 sighand VAR_10;
 int VAR_11, VAR_12;
 char *VAR_13, VAR_14[2], *VAR_15;

 if (VAR_8 < 2 && !FUNC_0(&VAR_8, &VAR_9, "remote-files"))
  goto usage;
 if (VAR_8 < 3 && !FUNC_0(&VAR_8, &VAR_9, "local-file")) {
usage:
  FUNC_3("usage: %s remote-files local-file\n", VAR_9[0]);
  VAR_1 = -1;
  return;
 }
 VAR_15 = VAR_9[VAR_8 - 1];
 VAR_9[VAR_8 - 1] = ((void*)0);
 if (FUNC_7(VAR_15, "-") && *VAR_15 != '|')
  if (!FUNC_2(&VAR_15) ||
      !FUNC_1("output to local-file:", VAR_15)) {
   VAR_1 = -1;
   return;
 }
 VAR_13 = VAR_9[0][1] == 'l' ? "NLST" : "LIST";
 VAR_7 = VAR_9[0];
 VAR_6 = 1;
 VAR_10 = FUNC_6(VAR_0, VAR_5);
 FUNC_5(VAR_4);
 VAR_14[1] = '\0';
 for (VAR_12 = 1; VAR_6 && VAR_12 < VAR_8-1; ++VAR_12) {
  *VAR_14 = (VAR_12 == 1) ? 'w' : 'a';
  FUNC_4(VAR_13, VAR_15, VAR_9[VAR_12], VAR_14, 0, 1);
  if (!VAR_6 && VAR_2) {
   VAR_11 = VAR_3;
   VAR_3 = 1;
   if (FUNC_1("Continue with", VAR_9[0])) {
    VAR_6 ++;
   }
   VAR_3 = VAR_11;
  }
 }
 FUNC_6(VAR_0, VAR_10);
 VAR_6 = 0;
}
