
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_context ;


 int FUNC_0 (int ,char*,char const*,char*) ;
 int FUNC_1 (char*,int *) ;

__attribute__((used)) static int
FUNC_2(krb5_context VAR_0, const char *VAR_1, char *VAR_2)
{
    if(FUNC_1(VAR_2, ((void*)0)) == -1) {
 FUNC_0(VAR_0, "%s: failed to parse \"%s\" as size", VAR_1, VAR_2);
 return 1;
    }
    return 0;
}
