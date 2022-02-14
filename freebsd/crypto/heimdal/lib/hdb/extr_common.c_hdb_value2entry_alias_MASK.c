
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
typedef int hdb_entry_alias ;


 int FUNC_0 (int ,int ,int *,int *) ;

int
FUNC_1(krb5_context VAR_0, krb5_data *VAR_1,
        hdb_entry_alias *VAR_2)
{
    return FUNC_0(VAR_1->data, VAR_1->length, VAR_2, ((void*)0));
}
