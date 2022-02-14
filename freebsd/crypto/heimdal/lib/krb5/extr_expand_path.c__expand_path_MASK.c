
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_context ;
typedef int PTYPE ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 char* FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(krb5_context VAR_1, PTYPE VAR_2, const char *VAR_3, char **VAR_4)
{
    *VAR_4 = FUNC_1(VAR_3);
    if (*VAR_4 == ((void*)0)) {
 FUNC_0(VAR_1, VAR_0, "malloc - out of memory");
 return VAR_0;
    }
    return 0;
}
