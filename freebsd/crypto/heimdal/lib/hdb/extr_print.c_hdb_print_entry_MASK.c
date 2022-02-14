
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_3__ {int entry; } ;
typedef TYPE_1__ hdb_entry_ex ;
typedef int HDB ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__,char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,int) ;

krb5_error_code
FUNC_7(krb5_context VAR_1, HDB *VAR_2, hdb_entry_ex *VAR_3, void *VAR_4)
{
    krb5_error_code VAR_5;
    krb5_storage *VAR_6;

    FILE *VAR_7 = VAR_4;

    FUNC_1(VAR_7);
    VAR_6 = FUNC_5(FUNC_2(VAR_7));
    if(VAR_6 == ((void*)0)) {
 FUNC_3(VAR_1, VAR_0, "malloc: out of memory");
 return VAR_0;
    }

    VAR_5 = FUNC_0(VAR_1, VAR_6, &VAR_3->entry);
    if(VAR_5) {
 FUNC_4(VAR_6);
 return VAR_5;
    }

    FUNC_6(VAR_6, "\n", 1);
    FUNC_4(VAR_6);
    return 0;
}
