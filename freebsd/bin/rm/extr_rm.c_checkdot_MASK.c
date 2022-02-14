
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(char **VAR_1)
{
 char *VAR_2, **VAR_3, **VAR_4;
 int VAR_5;

 VAR_5 = 0;
 for (VAR_4 = VAR_1; *VAR_4;) {
  if ((VAR_2 = FUNC_1(*VAR_4, '/')) != ((void*)0))
   ++VAR_2;
  else
   VAR_2 = *VAR_4;
  if (FUNC_0(VAR_2)) {
   if (!VAR_5++)
    FUNC_2("\".\" and \"..\" may not be removed");
   VAR_0 = 1;
   for (VAR_3 = VAR_4; (VAR_4[0] = VAR_4[1]) != ((void*)0); ++VAR_4)
    continue;
   VAR_4 = VAR_3;
  } else
   ++VAR_4;
 }
}
