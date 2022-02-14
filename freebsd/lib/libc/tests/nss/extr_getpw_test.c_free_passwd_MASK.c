
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_shell; int pw_dir; int pw_gecos; int pw_class; int pw_passwd; int pw_name; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct passwd *VAR_0)
{
 FUNC_0(VAR_0->pw_name);
 FUNC_0(VAR_0->pw_passwd);
 FUNC_0(VAR_0->pw_class);
 FUNC_0(VAR_0->pw_gecos);
 FUNC_0(VAR_0->pw_dir);
 FUNC_0(VAR_0->pw_shell);
}
