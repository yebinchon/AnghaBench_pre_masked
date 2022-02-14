
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct passwd {char* pw_name; scalar_t__ pw_uid; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*,int *) ;
 struct passwd* FUNC_1 (char*) ;
 struct passwd* FUNC_2 (scalar_t__) ;
 char* FUNC_3 (char*) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

char *
FUNC_6()
{
 static char *VAR_1 = ((void*)0);
 extern char *FUNC_7();
 register struct passwd *VAR_2;


 if (VAR_1 == ((void*)0))
 {
  VAR_1 = FUNC_7();
  if (VAR_1 == ((void*)0) || VAR_1[0] == '\0')
  {
   VAR_2 = FUNC_2(VAR_0);
   if (VAR_2 != ((void*)0))
    VAR_1 = VAR_2->pw_name;
  }
  else
  {
   uid_t VAR_3 = VAR_0;

   if ((VAR_2 = FUNC_1(VAR_1)) == ((void*)0) ||
         (VAR_3 != 0 && VAR_3 != VAR_2->pw_uid))
   {
    VAR_2 = FUNC_2(VAR_3);
    if (VAR_2 != ((void*)0))
     VAR_1 = VAR_2->pw_name;
   }
  }
  if (VAR_1 == ((void*)0) || VAR_1[0] == '\0')
  {
   FUNC_5("554 5.3.0 Who are you?");
   VAR_1 = "postmaster";
  }
  else if (FUNC_4(VAR_1, ",;:/|\"\\") != ((void*)0))
   VAR_1 = FUNC_0(VAR_1, ((void*)0));
  else
   VAR_1 = FUNC_3(VAR_1);
 }
 return VAR_1;
}
