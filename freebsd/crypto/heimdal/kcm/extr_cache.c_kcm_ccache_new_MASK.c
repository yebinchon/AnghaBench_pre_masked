
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int kcm_ccache ;


 scalar_t__ FUNC_0 (int ,char const*,int *) ;
 int FUNC_1 (int ,int ) ;

krb5_error_code
FUNC_2(krb5_context VAR_0,
        const char *VAR_1,
        kcm_ccache *VAR_2)
{
    krb5_error_code VAR_3;

    VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
    if (VAR_3 == 0) {




 FUNC_1(VAR_0, *VAR_2);
    }

    return VAR_3;
}
