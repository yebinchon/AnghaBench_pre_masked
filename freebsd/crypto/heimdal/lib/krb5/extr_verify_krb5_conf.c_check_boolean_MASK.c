
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_context ;


 int FUNC_0 (int ,char*,char const*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 long FUNC_2 (char*,char**,int ) ;

__attribute__((used)) static int
FUNC_3(krb5_context VAR_0, const char *VAR_1, char *VAR_2)
{
    long int VAR_3;
    char *VAR_4;
    if(FUNC_1(VAR_2, "yes") == 0 ||
       FUNC_1(VAR_2, "true") == 0 ||
       FUNC_1(VAR_2, "no") == 0 ||
       FUNC_1(VAR_2, "false") == 0)
 return 0;
    VAR_3 = FUNC_2(VAR_2, &VAR_4, 0);
    if(*VAR_4 != '\0') {
 FUNC_0(VAR_0, "%s: failed to parse \"%s\" as a boolean",
     VAR_1, VAR_2);
 return 1;
    }
    if(VAR_3 != 0 && VAR_3 != 1)
 FUNC_0(VAR_0, "%s: numeric value \"%s\" is treated as \"true\"",
     VAR_1, VAR_2);
    return 0;
}
