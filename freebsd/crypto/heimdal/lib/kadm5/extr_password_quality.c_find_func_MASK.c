
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kadm5_pw_policy_check_func {char* name; } ;
typedef int krb5_context ;
struct TYPE_4__ {struct kadm5_pw_policy_check_func* funcs; } ;
struct TYPE_3__ {char* name; struct kadm5_pw_policy_check_func* funcs; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int VAR_1 ;
 char* FUNC_2 (char const*,char) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,char const*,size_t) ;
 TYPE_1__** VAR_2 ;

__attribute__((used)) static const struct kadm5_pw_policy_check_func *
FUNC_5(krb5_context VAR_3, const char *VAR_4)
{
    const struct kadm5_pw_policy_check_func *VAR_5;
    char *VAR_6 = ((void*)0);
    const char *VAR_7, *VAR_8;
    int VAR_9;

    VAR_7 = FUNC_2(VAR_4, ':');
    if (VAR_7) {
 size_t VAR_10 = VAR_7 - VAR_4 + 1;
 VAR_8 = VAR_7 + 1;
 VAR_6 = FUNC_1(VAR_10);
 if (VAR_6 == ((void*)0))
     return ((void*)0);
 FUNC_4(VAR_6, VAR_4, VAR_10);
    } else
 VAR_8 = VAR_4;


    for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
 if (VAR_6 && FUNC_3(VAR_6, VAR_2[VAR_9]->name) != 0)
     continue;
 for (VAR_5 = VAR_2[VAR_9]->funcs; VAR_5->name ; VAR_5++)
     if (FUNC_3(VAR_8, VAR_5->name) == 0) {
  if (VAR_6)
      FUNC_0(VAR_6);
  return VAR_5;
     }
    }

    if (VAR_6 == ((void*)0) || FUNC_3(VAR_6, "builtin") == 0) {
 for (VAR_5 = VAR_0.funcs; VAR_5->name ; VAR_5++)
     if (FUNC_3(VAR_8, VAR_5->name) == 0) {
  if (VAR_6)
      FUNC_0(VAR_6);
  return VAR_5;
     }
    }
    if (VAR_6)
 FUNC_0(VAR_6);
    return ((void*)0);
}
