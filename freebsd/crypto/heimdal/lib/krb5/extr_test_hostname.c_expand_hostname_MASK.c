
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,scalar_t__,char*,char const*) ;
 scalar_t__ FUNC_2 (int ,char const*,char**) ;
 scalar_t__ FUNC_3 (int ,char const*,char**,char***) ;
 int FUNC_4 (int ,char**) ;
 int FUNC_5 (char*,char const*,...) ;

__attribute__((used)) static int
FUNC_6(krb5_context VAR_1, const char *VAR_2)
{
    krb5_error_code VAR_3;
    char *VAR_4, **VAR_5;

    VAR_3 = FUNC_2(VAR_1, VAR_2, &VAR_4);
    if (VAR_3)
 FUNC_1(VAR_1, 1, VAR_3, "krb5_expand_hostname(%s)", VAR_2);

    FUNC_0(VAR_4);

    if (VAR_0)
 FUNC_5("hostname: %s -> %s\n", VAR_2, VAR_4);

    VAR_3 = FUNC_3(VAR_1, VAR_2, &VAR_4, &VAR_5);
    if (VAR_3)
 FUNC_1(VAR_1, 1, VAR_3, "krb5_expand_hostname_realms(%s)", VAR_2);

    if (VAR_0) {
 int VAR_6;

 FUNC_5("hostname: %s -> %s\n", VAR_2, VAR_4);
 for (VAR_6 = 0; VAR_5[VAR_6]; VAR_6++) {
     FUNC_5("\trealm: %s\n", VAR_5[VAR_6]);
 }
    }
    FUNC_0(VAR_4);
    FUNC_4(VAR_1, VAR_5);

    return 0;
}
