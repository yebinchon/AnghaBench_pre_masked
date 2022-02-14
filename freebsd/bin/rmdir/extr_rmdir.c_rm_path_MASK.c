
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(char *VAR_1)
{
 char *VAR_2;

 VAR_2 = VAR_1 + FUNC_2(VAR_1);
 while (--VAR_2 > VAR_1 && *VAR_2 == '/')
  ;
 *++VAR_2 = '\0';
 while ((VAR_2 = FUNC_3(VAR_1, '/')) != ((void*)0)) {

  while (--VAR_2 >= VAR_1 && *VAR_2 == '/')
   ;
  *++VAR_2 = '\0';
  if (VAR_2 == VAR_1)
   break;

  if (FUNC_1(VAR_1) < 0) {
   FUNC_4("%s", VAR_1);
   return (1);
  }
  if (VAR_0)
   FUNC_0("%s\n", VAR_1);
 }

 return (0);
}
