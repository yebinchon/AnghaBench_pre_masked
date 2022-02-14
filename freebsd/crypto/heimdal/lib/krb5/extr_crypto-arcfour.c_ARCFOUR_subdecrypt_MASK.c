
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
 int FUNC_3 (int *,int ,int *,unsigned char*,int *,int ) ;
 int FUNC_4 () ;
 scalar_t__ VAR_1 ;
 struct _krb5_checksum_type* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,struct _krb5_checksum_type*,unsigned char*,size_t,int ,struct _krb5_key_data*,TYPE_3__*) ;
 scalar_t__ FUNC_7 (unsigned char*,void*,int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (unsigned char*,unsigned char*,int) ;
 int FUNC_11 (unsigned char*,int ,int) ;

__attribute__((used)) static krb5_error_code
FUNC_12(krb5_context VAR_2,
     struct _krb5_key_data *VAR_3,
     void *VAR_4,
     size_t VAR_5,
     unsigned VAR_6,
     void *VAR_7)
{
    EVP_CIPHER_CTX *VAR_8;
    struct _krb5_checksum_type *VAR_9 = FUNC_5 (VAR_0);
    Checksum VAR_10, VAR_11, VAR_12, VAR_13;
    struct _krb5_key_data VAR_14;
    krb5_keyblock VAR_15;
    unsigned char VAR_16[4];
    unsigned char *VAR_17 = VAR_4;
    unsigned char VAR_18[16], VAR_19[16], VAR_20[16];
    unsigned char VAR_21[16];
    krb5_error_code VAR_22;

    VAR_16[0] = (VAR_6 >> 0) & 0xFF;
    VAR_16[1] = (VAR_6 >> 8) & 0xFF;
    VAR_16[2] = (VAR_6 >> 16) & 0xFF;
    VAR_16[3] = (VAR_6 >> 24) & 0xFF;

    VAR_10.checksum.length = sizeof(VAR_18);
    VAR_10.checksum.data = VAR_18;

    VAR_22 = FUNC_6(((void*)0), VAR_9, VAR_16, sizeof(VAR_16), 0, VAR_3, &VAR_10);
    if (VAR_22)
 FUNC_8(VAR_2, "hmac failed");

    FUNC_10 (VAR_19, VAR_18, sizeof(VAR_18));

    VAR_11.checksum.length = sizeof(VAR_19);
    VAR_11.checksum.data = VAR_19;

    VAR_14.key = &VAR_15;
    VAR_15.keyvalue = VAR_10.checksum;

    VAR_12.checksum.length = sizeof(VAR_20);
    VAR_12.checksum.data = VAR_20;

    VAR_22 = FUNC_6(((void*)0), VAR_9, VAR_17, 16, 0, &VAR_14, &VAR_12);
    if (VAR_22)
 FUNC_8(VAR_2, "hmac failed");

    VAR_8 = FUNC_1();
    if (VAR_8 == ((void*)0))
 FUNC_8(VAR_2, "malloc failed");
    FUNC_3(VAR_8, FUNC_4(), ((void*)0), VAR_12.checksum.data, ((void*)0), 0);
    FUNC_2(VAR_8, VAR_17 + 16, VAR_17 + 16, VAR_5 - 16);
    FUNC_0(VAR_8);

    VAR_14.key = &VAR_15;
    VAR_15.keyvalue = VAR_11.checksum;

    VAR_13.checksum.length = 16;
    VAR_13.checksum.data = VAR_21;

    VAR_22 = FUNC_6(((void*)0), VAR_9, VAR_17 + 16, VAR_5 - 16, 0, &VAR_14, &VAR_13);
    if (VAR_22)
 FUNC_8(VAR_2, "hmac failed");

    FUNC_11 (VAR_18, 0, sizeof(VAR_18));
    FUNC_11 (VAR_19, 0, sizeof(VAR_19));
    FUNC_11 (VAR_20, 0, sizeof(VAR_20));

    if (FUNC_7 (VAR_13.checksum.data, VAR_4, 16) != 0) {
 FUNC_9 (VAR_2);
 return VAR_1;
    } else {
 return 0;
    }
}
