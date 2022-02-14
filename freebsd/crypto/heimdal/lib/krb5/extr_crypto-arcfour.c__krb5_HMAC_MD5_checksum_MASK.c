
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmp ;
struct _krb5_key_data {TYPE_2__* key; } ;
struct _krb5_checksum_type {int dummy; } ;
typedef int signature ;
typedef int ksign_c_data ;
struct TYPE_5__ {int length; unsigned char* data; } ;
struct TYPE_6__ {TYPE_1__ keyvalue; } ;
typedef TYPE_2__ krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_7__ {TYPE_1__ checksum; } ;
typedef int EVP_MD_CTX ;
typedef TYPE_3__ Checksum ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,unsigned char*,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,void const*,size_t) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*) ;
 struct _krb5_checksum_type* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,struct _krb5_checksum_type*,...) ;
 int FUNC_9 (int ,scalar_t__,int ) ;

krb5_error_code
FUNC_10(krb5_context VAR_2,
   struct _krb5_key_data *VAR_3,
   const void *VAR_4,
   size_t VAR_5,
   unsigned VAR_6,
   Checksum *VAR_7)
{
    EVP_MD_CTX *VAR_8;
    struct _krb5_checksum_type *VAR_9 = FUNC_7 (VAR_0);
    const char VAR_10[] = "signaturekey";
    Checksum VAR_11;
    struct _krb5_key_data VAR_12;
    krb5_keyblock VAR_13;
    unsigned char VAR_14[4];
    unsigned char VAR_15[16];
    unsigned char VAR_16[16];
    krb5_error_code VAR_17;

    VAR_8 = FUNC_3();
    if (VAR_8 == ((void*)0)) {
 FUNC_9(VAR_2, VAR_1, FUNC_6("malloc: out of memory", ""));
 return VAR_1;
    }
    VAR_11.checksum.length = sizeof(VAR_16);
    VAR_11.checksum.data = VAR_16;
    VAR_17 = FUNC_8(VAR_2, VAR_9, VAR_10, sizeof(VAR_10),
         0, VAR_3, &VAR_11);
    if (VAR_17) {
 FUNC_4(VAR_8);
 return VAR_17;
    }
    VAR_12.key = &VAR_13;
    VAR_13.keyvalue = VAR_11.checksum;
    FUNC_1(VAR_8, FUNC_5(), ((void*)0));
    VAR_14[0] = (VAR_6 >> 0) & 0xFF;
    VAR_14[1] = (VAR_6 >> 8) & 0xFF;
    VAR_14[2] = (VAR_6 >> 16) & 0xFF;
    VAR_14[3] = (VAR_6 >> 24) & 0xFF;
    FUNC_2(VAR_8, VAR_14, 4);
    FUNC_2(VAR_8, VAR_4, VAR_5);
    FUNC_0 (VAR_8, VAR_15, ((void*)0));
    FUNC_4(VAR_8);

    VAR_17 = FUNC_8(VAR_2, VAR_9, VAR_15, sizeof(VAR_15), 0, &VAR_12, VAR_7);
    if (VAR_17)
 return VAR_17;
    return 0;
}
