
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _krb5_key_data {TYPE_1__* schedule; } ;
struct _krb5_evp_schedule {int * dctx; int * ectx; } ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef scalar_t__ krb5_boolean ;
struct TYPE_2__ {struct _krb5_evp_schedule* data; } ;
typedef int EVP_CIPHER_CTX ;


 int VAR_0 ;
 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *,void*,void*,size_t) ;
 int FUNC_2 (int *,int *,int *,int *,void*,int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (size_t) ;
 int FUNC_6 (void*,int ,size_t) ;

krb5_error_code
FUNC_7(krb5_context VAR_1,
  struct _krb5_key_data *VAR_2,
  void *VAR_3,
  size_t VAR_4,
  krb5_boolean VAR_5,
  int VAR_6,
  void *VAR_7)
{
    struct _krb5_evp_schedule *VAR_8 = VAR_2->schedule->data;
    EVP_CIPHER_CTX *VAR_9;
    VAR_9 = VAR_5 ? VAR_8->ectx : VAR_8->dctx;
    if (VAR_7 == ((void*)0)) {

 size_t VAR_10 = FUNC_0(VAR_9);
 void *VAR_11 = FUNC_5(VAR_10);
 if (VAR_11 == ((void*)0)) {
     FUNC_4(VAR_1);
     return VAR_0;
 }
 FUNC_6(VAR_11, 0, VAR_10);
 FUNC_2(VAR_9, ((void*)0), ((void*)0), ((void*)0), VAR_11, -1);
 FUNC_3(VAR_11);
    } else
 FUNC_2(VAR_9, ((void*)0), ((void*)0), ((void*)0), VAR_7, -1);
    FUNC_1(VAR_9, VAR_3, VAR_3, VAR_4);
    return 0;
}
