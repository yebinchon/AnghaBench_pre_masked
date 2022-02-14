
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct _krb5_key_type {int * (* evp ) () ;} ;
struct _krb5_key_data {TYPE_3__* key; TYPE_1__* schedule; } ;
struct _krb5_evp_schedule {int * dctx; int * ectx; } ;
typedef int krb5_context ;
struct TYPE_5__ {int data; } ;
struct TYPE_6__ {TYPE_2__ keyvalue; } ;
struct TYPE_4__ {struct _krb5_evp_schedule* data; } ;
typedef int EVP_CIPHER ;


 int VAR_0 ;
 void* FUNC_0 () ;
 int FUNC_1 (int *,int const*,int *,int ,int *,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int * FUNC_3 () ;

void
FUNC_4(krb5_context VAR_1,
     struct _krb5_key_type *VAR_2,
     struct _krb5_key_data *VAR_3)
{
    struct _krb5_evp_schedule *VAR_4 = VAR_3->schedule->data;
    const EVP_CIPHER *VAR_5 = (*VAR_2->evp)();

    VAR_4->ectx = FUNC_0();
    VAR_4->dctx = FUNC_0();
    if (VAR_4->ectx == ((void*)0) || VAR_4->dctx == ((void*)0))
 FUNC_2(VAR_1, VAR_0, "malloc failed");

    FUNC_1(VAR_4->ectx, VAR_5, ((void*)0), VAR_3->key->keyvalue.data, ((void*)0), 1);
    FUNC_1(VAR_4->dctx, VAR_5, ((void*)0), VAR_3->key->keyvalue.data, ((void*)0), 0);
}
