
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 scalar_t__ FUNC_0 (int ,char const*,char**) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,char*,char***) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static krb5_error_code
FUNC_4 (krb5_context VAR_0,
    const char *VAR_1,
    char **VAR_2,
    char ***VAR_3)
{
    krb5_error_code VAR_4;

    VAR_4 = FUNC_0 (VAR_0, VAR_1, VAR_2);
    if (VAR_4)
 return VAR_4;
    FUNC_3 (*VAR_2);

    VAR_4 = FUNC_2 (VAR_0, *VAR_2, VAR_3);
    if (VAR_4) {
 FUNC_1 (*VAR_2);
 return VAR_4;
    }
    return 0;
}
