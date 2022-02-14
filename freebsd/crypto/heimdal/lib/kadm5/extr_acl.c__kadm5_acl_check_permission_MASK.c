
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_const_principal ;
struct TYPE_4__ {unsigned int acl_flags; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;


 scalar_t__ FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,unsigned int*) ;

kadm5_ret_t
FUNC_2(kadm5_server_context *VAR_0,
       unsigned VAR_1,
       krb5_const_principal VAR_2)
{
    kadm5_ret_t VAR_3;
    unsigned VAR_4;

    VAR_3 = FUNC_0 (VAR_1, VAR_0->acl_flags);
    if (VAR_3 == 0)
 return VAR_3;
    VAR_3 = FUNC_1 (VAR_0, VAR_2, &VAR_4);
    if (VAR_3)
 return VAR_3;
    return FUNC_0 (VAR_1, VAR_4);
}
