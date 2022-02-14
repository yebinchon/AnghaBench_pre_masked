
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {struct passwd* pw_shell; struct passwd* pw_dir; struct passwd* pw_passwd; struct passwd* pw_name; } ;


 int FUNC_0 (struct passwd*) ;

__attribute__((used)) static void
FUNC_1(struct passwd *VAR_0)
{
    FUNC_0 (VAR_0->pw_name);
    FUNC_0 (VAR_0->pw_passwd);
    FUNC_0 (VAR_0->pw_dir);
    FUNC_0 (VAR_0->pw_shell);
    FUNC_0 (VAR_0);
}
