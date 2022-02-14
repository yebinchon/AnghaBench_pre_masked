
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_shell; int pw_dir; int pw_gecos; int pw_passwd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct passwd*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct passwd *VAR_0)
{

 FUNC_0(VAR_0->pw_passwd);
 FUNC_0(VAR_0->pw_gecos);
 FUNC_0(VAR_0->pw_dir);
 FUNC_0(VAR_0->pw_shell);
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
}
