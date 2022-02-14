
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int * krb5_ccache ;


 scalar_t__ FUNC_0 (int ,int ,int **) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int,scalar_t__,char*,char const*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,char const*,int *) ;

__attribute__((used)) static void
FUNC_5(krb5_context VAR_0, const char *VAR_1, int VAR_2)
{
    krb5_principal VAR_3;
    krb5_error_code VAR_4;
    krb5_ccache VAR_5 = ((void*)0);

    VAR_4 = FUNC_4(VAR_0, VAR_1, &VAR_3);
    if (VAR_4)
 FUNC_2(VAR_0, 1, VAR_4, "parse_name for %s failed", VAR_1);

    VAR_4 = FUNC_0(VAR_0, VAR_3, &VAR_5);
    if (VAR_4 && VAR_2)
 FUNC_2(VAR_0, 1, VAR_4, "cc_cache_match for %s failed", VAR_1);
    if (VAR_4 == 0 && !VAR_2)
 FUNC_2(VAR_0, 1, VAR_4, "cc_cache_match for %s found", VAR_1);

    if (VAR_5)
 FUNC_1(VAR_0, VAR_5);
    FUNC_3(VAR_0, VAR_3);
}
