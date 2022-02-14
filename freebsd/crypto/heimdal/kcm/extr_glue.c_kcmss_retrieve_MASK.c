
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_flags ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_creds ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef int kcm_ccache ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int const*,int **) ;
 scalar_t__ FUNC_3 (int ,int *,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_4(krb5_context VAR_0,
        krb5_ccache VAR_1,
        krb5_flags VAR_2,
        const krb5_creds *VAR_3,
        krb5_creds *VAR_4)
{
    krb5_error_code VAR_5;
    kcm_ccache VAR_6 = FUNC_0(VAR_1);
    krb5_creds *VAR_7;

    FUNC_1(VAR_6);

    VAR_5 = FUNC_2(VAR_0, VAR_6, VAR_2,
         VAR_3, &VAR_7);
    if (VAR_5)
 return VAR_5;

    VAR_5 = FUNC_3(VAR_0, VAR_7, VAR_4);
    if (VAR_5)
 return VAR_5;

    return 0;
}
