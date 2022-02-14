
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_context ;
typedef int PTYPE ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(krb5_context VAR_1, PTYPE VAR_2, const char *VAR_3, char **VAR_4)
{
    const char *VAR_5 = ((void*)0);

    if (FUNC_1())
 VAR_5 = FUNC_0("TEMP");
    if (VAR_5)
 *VAR_4 = FUNC_2(VAR_5);
    else
 *VAR_4 = FUNC_2("/tmp");
    if (*VAR_4 == ((void*)0))
 return VAR_0;
    return 0;
}
