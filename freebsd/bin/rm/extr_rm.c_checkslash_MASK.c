
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(char **VAR_1)
{
 char **VAR_2, **VAR_3;
 int VAR_4;

 VAR_4 = 0;
 for (VAR_2 = VAR_1; *VAR_2;) {
  if (FUNC_0(*VAR_2)) {
   if (!VAR_4++)
    FUNC_1("\"/\" may not be removed");
   VAR_0 = 1;
   for (VAR_3 = VAR_2; VAR_3[0] != ((void*)0); ++VAR_3)
    VAR_3[0] = VAR_3[1];
  } else {
   ++VAR_2;
  }
 }
}
