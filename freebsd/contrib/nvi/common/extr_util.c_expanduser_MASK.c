
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_dir; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 () ;
 struct passwd* FUNC_3 (char*) ;
 struct passwd* FUNC_4 (int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 char* FUNC_7 (char*,char*) ;
 char* FUNC_8 (char*,int) ;

char *
FUNC_9(char *VAR_0)
{
 struct passwd *VAR_1;
 char *VAR_2, *VAR_3, *VAR_4, *VAR_5;






 if (*VAR_0 != '~')
  return (((void*)0));
 VAR_2 = VAR_0 + 1;
 for (VAR_3 = VAR_2; *VAR_3 != '/' && *VAR_3 != '\0'; ++VAR_3)
  continue;
 if (VAR_3 == VAR_2) {

  if (FUNC_6() != 0 ||
      (VAR_5 = FUNC_1("HOME")) == ((void*)0)) {
   if (((VAR_5 = FUNC_2()) != ((void*)0) &&
        (VAR_1 = FUNC_3(VAR_5)) != ((void*)0)) ||
       (VAR_1 = FUNC_4(FUNC_5())) != ((void*)0))
    VAR_5 = VAR_1->pw_dir;
   else
    return (((void*)0));
  }
 } else {

  if ((VAR_4 = FUNC_8(VAR_2, VAR_3 - VAR_2)) == ((void*)0))
   return (((void*)0));
  if ((VAR_1 = FUNC_3(VAR_4)) == ((void*)0)) {
   FUNC_0(VAR_4);
   return (((void*)0));
  } else
   VAR_5 = VAR_1->pw_dir;
  FUNC_0(VAR_4);
 }

 for (; *VAR_3 == '/' && *VAR_3 != '\0'; ++VAR_3)
  continue;
 return (FUNC_7(VAR_5, VAR_3));
}
