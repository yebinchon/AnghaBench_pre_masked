
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_3__ {char* data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
typedef int hdb_entry ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,scalar_t__,char*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,char*,int) ;

krb5_error_code
FUNC_6 (krb5_context VAR_1, hdb_entry *VAR_2, char **VAR_3)
{
    krb5_error_code VAR_4;
    krb5_data VAR_5;
    krb5_storage *VAR_6;

    VAR_6 = FUNC_2();
    if(VAR_6 == ((void*)0)) {
 FUNC_1(VAR_1, VAR_0, "malloc: out of memory");
 return VAR_0;
    }

    VAR_4 = FUNC_0(VAR_1, VAR_6, VAR_2);
    if(VAR_4) {
 FUNC_3(VAR_6);
 return VAR_4;
    }

    FUNC_5(VAR_6, "\0", 1);
    FUNC_4(VAR_6, &VAR_5);
    FUNC_3(VAR_6);
    *VAR_3 = VAR_5.data;
    return 0;
}
