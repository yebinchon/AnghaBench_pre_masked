
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spwd {char* sp_pwdp; } ;
struct TYPE_2__ {char* fd_encrypt; } ;
struct pr_passwd {TYPE_1__ ufld; } ;
struct passwd_adjunct {char* pwa_passwd; } ;
struct passwd {char* pw_passwd; int pw_name; } ;


 char* FUNC_0 (struct passwd*) ;
 struct pr_passwd* FUNC_1 (int ) ;
 struct passwd_adjunct* FUNC_2 (int ) ;
 struct spwd* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;

char *
FUNC_5(struct passwd *VAR_0)
{
 char *VAR_1 = VAR_0->pw_passwd;
 return VAR_1;
}
