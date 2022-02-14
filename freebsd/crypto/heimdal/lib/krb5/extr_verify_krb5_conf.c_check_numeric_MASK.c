
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_context ;


 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,char const*,char*) ;
 long FUNC_1 (char*,char**,int ) ;

__attribute__((used)) static int
FUNC_2(krb5_context VAR_3, const char *VAR_4, char *VAR_5)
{
    long VAR_6;
    char *VAR_7;
    VAR_6 = FUNC_1(VAR_5, &VAR_7, 0);

    if ((VAR_6 == VAR_1 || VAR_6 == VAR_0) && VAR_2 != 0) {
 FUNC_0(VAR_3, "%s: over/under flow for \"%s\"",
     VAR_4, VAR_5);
 return 1;
    }
    if(*VAR_7 != '\0') {
 FUNC_0(VAR_3, "%s: failed to parse \"%s\" as a number",
     VAR_4, VAR_5);
 return 1;
    }
    return 0;
}
