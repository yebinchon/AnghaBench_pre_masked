
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int krb5_storage ;
typedef int kadm5_ret_t ;
typedef int kadm5_principal_ent_t ;
typedef int int32_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,int ) ;

kadm5_ret_t
FUNC_2(krb5_storage *VAR_0,
        kadm5_principal_ent_t VAR_1,
        uint32_t *VAR_2)
{
    int32_t VAR_3;

    FUNC_0 (VAR_0, &VAR_3);
    *VAR_2 = VAR_3;
    return FUNC_1 (VAR_0, VAR_1, *VAR_2);
}
