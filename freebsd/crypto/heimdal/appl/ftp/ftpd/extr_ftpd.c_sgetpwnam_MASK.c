
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {void* pw_shell; void* pw_dir; void* pw_gecos; void* pw_passwd; void* pw_name; } ;


 int FUNC_0 (void*) ;
 struct passwd* FUNC_1 (char*) ;
 void* FUNC_2 (void*) ;

__attribute__((used)) static struct passwd *
FUNC_3(char *VAR_0)
{
 static struct passwd VAR_1;
 struct passwd *VAR_2;

 if ((VAR_2 = FUNC_1(VAR_0)) == ((void*)0))
  return (VAR_2);
 if (VAR_1.pw_name) {
  FUNC_0(VAR_1.pw_name);
  FUNC_0(VAR_1.pw_passwd);
  FUNC_0(VAR_1.pw_gecos);
  FUNC_0(VAR_1.pw_dir);
  FUNC_0(VAR_1.pw_shell);
 }
 VAR_1 = *VAR_2;
 VAR_1.pw_name = FUNC_2(VAR_2->pw_name);
 VAR_1.pw_passwd = FUNC_2(VAR_2->pw_passwd);
 VAR_1.pw_gecos = FUNC_2(VAR_2->pw_gecos);
 VAR_1.pw_dir = FUNC_2(VAR_2->pw_dir);
 VAR_1.pw_shell = FUNC_2(VAR_2->pw_shell);
 return (&VAR_1);
}
