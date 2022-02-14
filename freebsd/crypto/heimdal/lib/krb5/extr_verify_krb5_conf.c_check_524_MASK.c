
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_context ;


 int FUNC_0 (int ,char*,char const*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2(krb5_context VAR_0, const char *VAR_1, char *VAR_2)
{
    if(FUNC_1(VAR_2, "yes") == 0 ||
       FUNC_1(VAR_2, "no") == 0 ||
       FUNC_1(VAR_2, "2b") == 0 ||
       FUNC_1(VAR_2, "local") == 0)
 return 0;

    FUNC_0(VAR_0, "%s: didn't contain a valid option `%s'",
        VAR_1, VAR_2);
    return 1;
}
