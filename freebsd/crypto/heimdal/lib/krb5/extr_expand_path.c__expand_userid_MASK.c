
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_context ;
typedef int PTYPE ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,unsigned long) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(krb5_context VAR_1, PTYPE VAR_2, const char *VAR_3, char **VAR_4)
{
    int VAR_5 = FUNC_0(VAR_4, "%ld", (unsigned long)FUNC_1());
    if (VAR_5 < 0 || *VAR_4 == ((void*)0))
 return VAR_0;
    return 0;
}
