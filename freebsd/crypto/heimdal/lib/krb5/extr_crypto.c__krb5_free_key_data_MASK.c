
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _krb5_key_data {int * schedule; int key; } ;
struct _krb5_encryption_type {int dummy; } ;
typedef int krb5_context ;


 int FUNC_0 (int ,struct _krb5_key_data*,struct _krb5_encryption_type*) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(krb5_context VAR_0, struct _krb5_key_data *VAR_1,
       struct _krb5_encryption_type *VAR_2)
{
    FUNC_1(VAR_0, VAR_1->key);
    if(VAR_1->schedule) {
 FUNC_0(VAR_0, VAR_1, VAR_2);
 VAR_1->schedule = ((void*)0);
    }
}
