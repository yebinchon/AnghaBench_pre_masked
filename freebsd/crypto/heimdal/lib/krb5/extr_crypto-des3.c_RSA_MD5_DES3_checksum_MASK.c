
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _krb5_key_data {int dummy; } ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int Checksum ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,struct _krb5_key_data*,void const*,size_t,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_2(krb5_context VAR_0,
        struct _krb5_key_data *VAR_1,
        const void *VAR_2,
        size_t VAR_3,
        unsigned VAR_4,
        Checksum *VAR_5)
{
    return FUNC_1(VAR_0, FUNC_0(), VAR_1, VAR_2, VAR_3, VAR_5);
}
