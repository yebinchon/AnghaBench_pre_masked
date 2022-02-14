
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int kcm_operation ;
typedef int kcm_client ;


 int FUNC_0 (int ,int *,int ,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int *,char*) ;
 int FUNC_3 (int ,int *,char*) ;
 scalar_t__ FUNC_4 (int *,char**) ;

__attribute__((used)) static krb5_error_code
FUNC_5(krb5_context VAR_0,
        kcm_client *VAR_1,
        kcm_operation VAR_2,
        krb5_storage *VAR_3,
        krb5_storage *VAR_4)
{
    krb5_error_code VAR_5;
    char *VAR_6;

    VAR_5 = FUNC_4(VAR_3, &VAR_6);
    if (VAR_5)
 return VAR_5;

    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_6);

    VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_6);
    if (VAR_5 == 0)
 FUNC_3(VAR_0, VAR_1, VAR_6);

    FUNC_1(VAR_6);

    return VAR_5;
}
