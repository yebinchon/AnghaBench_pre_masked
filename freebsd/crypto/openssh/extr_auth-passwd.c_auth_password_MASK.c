
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ssh {TYPE_1__* authctxt; } ;
struct passwd {scalar_t__ pw_uid; } ;
struct TYPE_7__ {scalar_t__ permit_root_login; scalar_t__ permit_empty_passwd; int kerberos_authentication; scalar_t__ use_pam; } ;
struct TYPE_6__ {int valid; int force_pwchange; struct passwd* pw; } ;
typedef scalar_t__ HANDLE ;
typedef TYPE_1__ Authctxt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (struct ssh*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct passwd*,char const*) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_3__ VAR_3 ;
 scalar_t__ FUNC_5 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (struct ssh*,char const*) ;

int
FUNC_8(struct ssh *VAR_4, const char *VAR_5)
{
 Authctxt *VAR_6 = VAR_4->authctxt;
 struct passwd *VAR_7 = VAR_6->pw;
 int VAR_8, VAR_9 = VAR_6->valid;




 if (FUNC_6(VAR_5) > VAR_1)
  return 0;


 if (VAR_7->pw_uid == 0 && VAR_3.permit_root_login != VAR_2)
  VAR_9 = 0;

 if (*VAR_5 == '\0' && VAR_3.permit_empty_passwd == 0)
  return 0;
 VAR_8 = FUNC_7(VAR_4, VAR_5);
 if (VAR_6->force_pwchange)
  FUNC_1(VAR_4);
 return (VAR_8 && VAR_9);
}
