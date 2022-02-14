
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * krb5_keytab ;
typedef scalar_t__ krb5_error_code ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,scalar_t__,char*) ;
 int * FUNC_2 () ;

int
FUNC_3 (void *VAR_1, int VAR_2, char **VAR_3)
{
    krb5_error_code VAR_4;
    krb5_keytab VAR_5;

    if((VAR_5 = FUNC_2()) == ((void*)0))
 return 1;

    VAR_4 = FUNC_0 (VAR_0, VAR_5);
    if (VAR_4) {
 FUNC_1 (VAR_0, VAR_4, "destroy keytab failed");
 return 1;
    }

    return 0;
}
