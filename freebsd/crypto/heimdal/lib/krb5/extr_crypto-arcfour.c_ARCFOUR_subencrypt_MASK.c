
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int t ;
struct _krb5_key_data {TYPE_2__* key; } ;
struct _krb5_checksum_type {int dummy; } ;
struct TYPE_5__ {int length; unsigned char* data; } ;
struct TYPE_6__ {TYPE_1__ keyvalue; } ;
typedef TYPE_2__ krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int k3_c_data ;
typedef int k2_c_data ;
typedef int k1_c_data ;
struct TYPE_7__ {TYPE_1__ checksum; } ;
typedef int EVP_CIPHER_CTX ;
typedef TYPE_3__ Checksum ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,unsigned char*,unsigned char*,size_t) ;
 int FUNC_3 (int *,int ,int *,unsigned char*,int *,int) ;
 int FUNC_4 () ;
 struct _krb5_checksum_type* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,struct _krb5_checksum_type*,void*,int,int ,struct _krb5_key_data*,TYPE_3__*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (unsigned char*,unsigned char*,int) ;
 int FUNC_9 (unsigned char*,int ,int) ;

__attribute__((used)) static krb5_error_code
FUNC_10(krb5_context VAR_1,
     struct _krb5_key_data *VAR_2,
     void *VAR_3,
     size_t VAR_4,
     unsigned VAR_5,
     void *VAR_6)
{
    EVP_CIPHER_CTX *VAR_7;
    struct _krb5_checksum_type *VAR_8 = FUNC_5 (VAR_0);
    Checksum VAR_9, VAR_10, VAR_11, VAR_12;
    struct _krb5_key_data VAR_13;
    krb5_keyblock VAR_14;
    unsigned char VAR_15[4];
    unsigned char *VAR_16 = VAR_3;
    unsigned char VAR_17[16], VAR_18[16], VAR_19[16];
    krb5_error_code VAR_20;

    VAR_15[0] = (VAR_5 >> 0) & 0xFF;
    VAR_15[1] = (VAR_5 >> 8) & 0xFF;
    VAR_15[2] = (VAR_5 >> 16) & 0xFF;
    VAR_15[3] = (VAR_5 >> 24) & 0xFF;

    VAR_9.checksum.length = sizeof(VAR_17);
    VAR_9.checksum.data = VAR_17;

    VAR_20 = FUNC_6(((void*)0), VAR_8, VAR_15, sizeof(VAR_15), 0, VAR_2, &VAR_9);
    if (VAR_20)
 FUNC_7(VAR_1, "hmac failed");

    FUNC_8 (VAR_18, VAR_17, sizeof(VAR_17));

    VAR_10.checksum.length = sizeof(VAR_18);
    VAR_10.checksum.data = VAR_18;

    VAR_13.key = &VAR_14;
    VAR_14.keyvalue = VAR_10.checksum;

    VAR_12.checksum.length = 16;
    VAR_12.checksum.data = VAR_3;

    VAR_20 = FUNC_6(((void*)0), VAR_8, VAR_16 + 16, VAR_4 - 16, 0, &VAR_13, &VAR_12);
    if (VAR_20)
 FUNC_7(VAR_1, "hmac failed");

    VAR_13.key = &VAR_14;
    VAR_14.keyvalue = VAR_9.checksum;

    VAR_11.checksum.length = sizeof(VAR_19);
    VAR_11.checksum.data = VAR_19;

    VAR_20 = FUNC_6(((void*)0), VAR_8, VAR_3, 16, 0, &VAR_13, &VAR_11);
    if (VAR_20)
 FUNC_7(VAR_1, "hmac failed");

    VAR_7 = FUNC_1();
    if (VAR_7 == ((void*)0))
 FUNC_7(VAR_1, "malloc failed");

    FUNC_3(VAR_7, FUNC_4(), ((void*)0), VAR_11.checksum.data, ((void*)0), 1);
    FUNC_2(VAR_7, VAR_16 + 16, VAR_16 + 16, VAR_4 - 16);
    FUNC_0(VAR_7);

    FUNC_9 (VAR_17, 0, sizeof(VAR_17));
    FUNC_9 (VAR_18, 0, sizeof(VAR_18));
    FUNC_9 (VAR_19, 0, sizeof(VAR_19));
    return 0;
}
