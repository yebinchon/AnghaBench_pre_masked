
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct _krb5_key_data {TYPE_1__* schedule; } ;
struct _krb5_evp_schedule {int ectx; } ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int ivec ;
struct TYPE_6__ {unsigned char* data; } ;
struct TYPE_7__ {TYPE_2__ checksum; } ;
struct TYPE_5__ {struct _krb5_evp_schedule* data; } ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int DES_cblock ;
typedef TYPE_3__ Checksum ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char*,unsigned char*,int) ;
 int FUNC_1 (int ,int *,int *,int *,void*,int) ;
 int FUNC_2 (int *,unsigned char*,int *) ;
 int FUNC_3 (int *,int const*,int *) ;
 int FUNC_4 (int *,void const*,size_t) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (unsigned char*,int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int *,int ,int) ;

krb5_error_code
FUNC_11(krb5_context VAR_1,
     const EVP_MD *VAR_2,
     struct _krb5_key_data *VAR_3,
     const void *VAR_4,
     size_t VAR_5,
     Checksum *VAR_6)
{
    struct _krb5_evp_schedule *VAR_7 = VAR_3->schedule->data;
    EVP_MD_CTX *VAR_8;
    DES_cblock VAR_9;
    unsigned char *VAR_10 = VAR_6->checksum.data;

    FUNC_8(VAR_10, 8);

    VAR_8 = FUNC_5();
    if (VAR_8 == ((void*)0)) {
 FUNC_9(VAR_1, VAR_0, FUNC_7("malloc: out of memory", ""));
 return VAR_0;
    }

    FUNC_3(VAR_8, VAR_2, ((void*)0));
    FUNC_4(VAR_8, VAR_10, 8);
    FUNC_4(VAR_8, VAR_4, VAR_5);
    FUNC_2 (VAR_8, VAR_10 + 8, ((void*)0));
    FUNC_6(VAR_8);
    FUNC_10 (&VAR_9, 0, sizeof(VAR_9));
    FUNC_1(VAR_7->ectx, ((void*)0), ((void*)0), ((void*)0), (void *)&VAR_9, -1);
    FUNC_0(VAR_7->ectx, VAR_10, VAR_10, 24);

    return 0;
}
