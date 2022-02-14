
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * krb5_pac ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int hdb_entry_ex ;
struct TYPE_2__ {int (* pac_generate ) (int ,int ,int *,int **) ;} ;


 int FUNC_0 (int ,int ,int *,int **) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

krb5_error_code
FUNC_1(krb5_context VAR_2,
    hdb_entry_ex *VAR_3,
    krb5_pac *VAR_4)
{
    *VAR_4 = ((void*)0);
    if (VAR_1 == ((void*)0))
 return 0;
    return (VAR_1->pac_generate)(VAR_0, VAR_2, VAR_3, VAR_4);
}
