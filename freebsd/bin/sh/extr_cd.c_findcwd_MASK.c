
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char,char*) ;
 int FUNC_3 (char*,char*) ;
 char FUNC_4 (char*) ;
 char FUNC_5 (char*) ;
 char* VAR_0 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 char* FUNC_7 (char**) ;
 char* FUNC_8 () ;
 char* FUNC_9 () ;
 char* FUNC_10 (char*) ;

__attribute__((used)) static char *
FUNC_11(char *VAR_1)
{
 char *VAR_2;
 char *VAR_3;
 char *VAR_4;






 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
  return FUNC_8();
 VAR_4 = FUNC_10(VAR_1);
 FUNC_1(VAR_2);
 if (*VAR_1 != '/') {
  FUNC_3(VAR_0, VAR_2);
  if (FUNC_4(VAR_2) == '/')
   FUNC_5(VAR_2);
 }
 while ((VAR_3 = FUNC_7(&VAR_4)) != ((void*)0)) {
  if (FUNC_6(VAR_3, "..")) {
   while (VAR_2 > FUNC_9() && (FUNC_5(VAR_2), *VAR_2) != '/');
  } else if (*VAR_3 != '\0' && ! FUNC_6(VAR_3, ".")) {
   FUNC_2('/', VAR_2);
   FUNC_3(VAR_3, VAR_2);
  }
 }
 if (VAR_2 == FUNC_9())
  FUNC_2('/', VAR_2);
 FUNC_0(VAR_2);
 return FUNC_9();
}
