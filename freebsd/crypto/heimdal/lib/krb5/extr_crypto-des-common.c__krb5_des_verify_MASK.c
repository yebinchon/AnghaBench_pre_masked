
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmp ;
struct _krb5_key_data {TYPE_1__* schedule; } ;
struct _krb5_evp_schedule {int dctx; } ;
typedef int res ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int ivec ;
struct TYPE_6__ {int data; } ;
struct TYPE_7__ {TYPE_2__ checksum; } ;
struct TYPE_5__ {struct _krb5_evp_schedule* data; } ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef unsigned char DES_cblock ;
typedef TYPE_3__ Checksum ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char*,int ,int) ;
 int FUNC_1 (int ,int *,int *,int *,void*,int) ;
 int FUNC_2 (int *,unsigned char*,int *) ;
 int FUNC_3 (int *,int const*,int *) ;
 int FUNC_4 (int *,void const*,size_t) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (unsigned char*,unsigned char*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (unsigned char*,int ,int) ;

krb5_error_code
FUNC_12(krb5_context VAR_2,
   const EVP_MD *VAR_3,
   struct _krb5_key_data *VAR_4,
   const void *VAR_5,
   size_t VAR_6,
   Checksum *VAR_7)
{
    struct _krb5_evp_schedule *VAR_8 = VAR_4->schedule->data;
    EVP_MD_CTX *VAR_9;
    unsigned char VAR_10[24];
    unsigned char VAR_11[16];
    DES_cblock VAR_12;
    krb5_error_code VAR_13 = 0;

    VAR_9 = FUNC_5();
    if (VAR_9 == ((void*)0)) {
 FUNC_10(VAR_2, VAR_0, FUNC_7("malloc: out of memory", ""));
 return VAR_0;
    }

    FUNC_11(&VAR_12, 0, sizeof(VAR_12));
    FUNC_1(VAR_8->dctx, ((void*)0), ((void*)0), ((void*)0), (void *)&VAR_12, -1);
    FUNC_0(VAR_8->dctx, VAR_10, VAR_7->checksum.data, 24);

    FUNC_3(VAR_9, VAR_3, ((void*)0));
    FUNC_4(VAR_9, VAR_10, 8);
    FUNC_4(VAR_9, VAR_5, VAR_6);
    FUNC_2 (VAR_9, VAR_11, ((void*)0));
    FUNC_6(VAR_9);
    if(FUNC_8(VAR_11, VAR_10 + 8, sizeof(VAR_11)) != 0) {
 FUNC_9 (VAR_2);
 VAR_13 = VAR_1;
    }
    FUNC_11(VAR_10, 0, sizeof(VAR_10));
    FUNC_11(VAR_11, 0, sizeof(VAR_11));
    return VAR_13;
}
