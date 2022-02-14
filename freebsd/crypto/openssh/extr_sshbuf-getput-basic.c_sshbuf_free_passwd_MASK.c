
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {struct passwd* pw_name; struct passwd* pw_passwd; struct passwd* pw_gecos; struct passwd* pw_class; struct passwd* pw_dir; struct passwd* pw_shell; } ;


 int FUNC_0 (struct passwd*) ;

void
FUNC_1(struct passwd *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 FUNC_0(VAR_0->pw_shell);
 FUNC_0(VAR_0->pw_dir);






 FUNC_0(VAR_0->pw_passwd);
 FUNC_0(VAR_0->pw_name);
 FUNC_0(VAR_0);
}
