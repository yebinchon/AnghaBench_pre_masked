
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_4__ {int acl_flags; int context; int caller; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *,int *) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

kadm5_ret_t
FUNC_4(kadm5_server_context *VAR_2)
{
    krb5_principal VAR_3;
    krb5_error_code VAR_4;

    VAR_4 = FUNC_2(VAR_2->context, VAR_0, &VAR_3);
    if (VAR_4)
 return VAR_4;
    VAR_4 = FUNC_3(VAR_2->context, VAR_2->caller, VAR_3);
    FUNC_1(VAR_2->context, VAR_3);
    if(VAR_4 != 0) {
 VAR_2->acl_flags = VAR_1;
 return 0;
    }

    return FUNC_0 (VAR_2, ((void*)0), &VAR_2->acl_flags);
}
