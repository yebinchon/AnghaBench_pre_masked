
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,char*,char*,int ,int) ;
 scalar_t__ FUNC_4 (char*,char*) ;

void
FUNC_5(int VAR_1, char **VAR_2)
{
 char *VAR_3;

 if (VAR_1 < 2)
  VAR_1++, VAR_2[1] = ((void*)0);
 if (VAR_1 < 3)
  VAR_1++, VAR_2[2] = "-";
 if (VAR_1 > 3) {
  FUNC_2("usage: %s remote-directory local-file\n", VAR_2[0]);
  VAR_0 = -1;
  return;
 }
 VAR_3 = VAR_2[0][0] == 'n' ? "NLST" : "LIST";
 if (FUNC_4(VAR_2[2], "-") && !FUNC_1(&VAR_2[2])) {
  VAR_0 = -1;
  return;
 }
 if (FUNC_4(VAR_2[2], "-") && *VAR_2[2] != '|')
     if (!FUNC_1(&VAR_2[2]) || !FUNC_0("output to local-file:",
       VAR_2[2])) {
  VAR_0 = -1;
  return;
     }
 FUNC_3(VAR_3, VAR_2[2], VAR_2[1], "w", 0, 1);
}
