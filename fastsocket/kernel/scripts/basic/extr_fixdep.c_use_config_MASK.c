
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*) ;
 char FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(char *VAR_1, int VAR_2)
{
 char VAR_3[VAR_0];
 char *VAR_4;

 if (FUNC_1(VAR_1, VAR_2))
     return;

 FUNC_0(VAR_1, VAR_2);

 FUNC_2(VAR_3, VAR_1, VAR_2); VAR_3[VAR_2] = 0;

 for (VAR_4 = VAR_3; VAR_4 < VAR_3 + VAR_2; VAR_4++) {
  if (*VAR_4 == '_')
   *VAR_4 = '/';
  else
   *VAR_4 = FUNC_4((int)*VAR_4);
 }
 FUNC_3("    $(wildcard include/config/%s.h) \\\n", VAR_3);
}
