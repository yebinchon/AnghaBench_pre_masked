
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * opt_private; } ;
typedef TYPE_1__ krb5_get_init_creds_opt ;
typedef int krb5_error_code ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,int ,int ,char const*) ;

__attribute__((used)) static krb5_error_code
FUNC_2(krb5_context VAR_1,
  krb5_get_init_creds_opt *VAR_2,
  const char *VAR_3)
{
    if (VAR_2->opt_private == ((void*)0)) {
 FUNC_1(VAR_1, VAR_0,
          FUNC_0("%s on non extendable opt", ""), VAR_3);
 return VAR_0;
    }
    return 0;
}
