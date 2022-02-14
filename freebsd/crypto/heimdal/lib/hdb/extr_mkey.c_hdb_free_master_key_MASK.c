
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdb_master_key_data {struct hdb_master_key_data* next; scalar_t__ crypto; int keytab; } ;
typedef int krb5_context ;
typedef struct hdb_master_key_data* hdb_master_key ;


 int FUNC_0 (struct hdb_master_key_data*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int *) ;

void
FUNC_3(krb5_context VAR_0, hdb_master_key VAR_1)
{
    struct hdb_master_key_data *VAR_2;
    while(VAR_1) {
 FUNC_2(VAR_0, &VAR_1->keytab);
 if (VAR_1->crypto)
     FUNC_1(VAR_0, VAR_1->crypto);
 VAR_2 = VAR_1;
 VAR_1 = VAR_1->next;
 FUNC_0(VAR_2);
    }
}
