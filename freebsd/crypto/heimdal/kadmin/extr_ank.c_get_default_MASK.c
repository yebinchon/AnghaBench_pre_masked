
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_const_realm ;
struct TYPE_4__ {int context; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef int kadm5_principal_ent_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ,char*,int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_4 (kadm5_server_context *VAR_1,
      krb5_principal VAR_2,
      kadm5_principal_ent_t VAR_3)
{
    krb5_error_code VAR_4;
    krb5_principal VAR_5;
    krb5_const_realm VAR_6 = FUNC_3(VAR_1->context, VAR_2);

    VAR_4 = FUNC_2 (VAR_1->context, &VAR_5,
          VAR_6, "default", ((void*)0));
    if (VAR_4)
 return VAR_4;
    VAR_4 = FUNC_0 (VAR_1, VAR_5, VAR_3,
          VAR_0);
    FUNC_1 (VAR_1->context, VAR_5);
    return VAR_4;
}
