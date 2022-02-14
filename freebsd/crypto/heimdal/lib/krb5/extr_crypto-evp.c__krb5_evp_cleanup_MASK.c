
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _krb5_key_data {TYPE_1__* schedule; } ;
struct _krb5_evp_schedule {int dctx; int ectx; } ;
typedef int krb5_context ;
struct TYPE_2__ {struct _krb5_evp_schedule* data; } ;


 int FUNC_0 (int ) ;

void
FUNC_1(krb5_context VAR_0, struct _krb5_key_data *VAR_1)
{
    struct _krb5_evp_schedule *VAR_2 = VAR_1->schedule->data;
    FUNC_0(VAR_2->ectx);
    FUNC_0(VAR_2->dctx);
}
