
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _krb5_key_usage {int key; } ;
struct _krb5_encryption_type {int dummy; } ;
typedef int krb5_context ;


 int FUNC_0 (int ,int *,struct _krb5_encryption_type*) ;

__attribute__((used)) static void
FUNC_1(krb5_context VAR_0, struct _krb5_key_usage *VAR_1,
        struct _krb5_encryption_type *VAR_2)
{
    FUNC_0(VAR_0, &VAR_1->key, VAR_2);
}
