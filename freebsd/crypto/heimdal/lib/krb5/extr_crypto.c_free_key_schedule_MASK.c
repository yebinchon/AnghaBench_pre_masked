
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct _krb5_key_data {TYPE_2__* schedule; } ;
struct _krb5_encryption_type {TYPE_1__* keytype; } ;
typedef int krb5_context ;
struct TYPE_4__ {int length; int data; } ;
struct TYPE_3__ {int (* cleanup ) (int ,struct _krb5_key_data*) ;} ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,struct _krb5_key_data*) ;

__attribute__((used)) static void
FUNC_3(krb5_context VAR_0,
    struct _krb5_key_data *VAR_1,
    struct _krb5_encryption_type *VAR_2)
{
    if (VAR_2->keytype->cleanup)
 (*VAR_2->keytype->cleanup)(VAR_0, VAR_1);
    FUNC_1(VAR_1->schedule->data, 0, VAR_1->schedule->length);
    FUNC_0(VAR_0, VAR_1->schedule);
}
