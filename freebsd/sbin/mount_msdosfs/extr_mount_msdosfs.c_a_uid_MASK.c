
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {int pw_uid; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*) ;
 struct passwd* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char) ;

uid_t
FUNC_4(char *VAR_1)
{
 struct passwd *VAR_2;
 char *VAR_3;
 uid_t VAR_4;

 if ((VAR_2 = FUNC_2(VAR_1)) != ((void*)0))
  VAR_4 = VAR_2->pw_uid;
 else {
  for (VAR_3 = VAR_1; *VAR_1 && FUNC_3(*VAR_1); ++VAR_1);
  if (!*VAR_1)
   VAR_4 = FUNC_0(VAR_3);
  else
   FUNC_1(VAR_0, "unknown user id: %s", VAR_3);
 }
 return (VAR_4);
}
