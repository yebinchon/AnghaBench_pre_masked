
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_context ;
typedef int PTYPE ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int,char*) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(krb5_context VAR_1, PTYPE VAR_2, const char *VAR_3, char **VAR_4)
{
    *VAR_4 = FUNC_1("");
    if (*VAR_4 == ((void*)0)) {
 if (VAR_1)
     FUNC_0(VAR_1, VAR_0, "Out of memory");
 return VAR_0;
    }
    return 0;
}
