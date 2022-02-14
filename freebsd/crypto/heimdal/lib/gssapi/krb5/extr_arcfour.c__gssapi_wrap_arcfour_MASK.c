
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_13__ {int* data; int length; } ;
struct TYPE_14__ {TYPE_1__ keyvalue; int keytype; } ;
typedef TYPE_2__ krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int k6_data ;
typedef int int32_t ;
typedef TYPE_3__* gsskrb5_ctx ;
typedef int gss_qop_t ;
typedef TYPE_4__* gss_buffer_t ;
struct TYPE_16__ {size_t length; int * value; } ;
struct TYPE_15__ {int more_flags; int ctx_id_mutex; int auth_context; } ;
typedef scalar_t__ OM_uint32 ;
typedef int Klocaldata ;
typedef int EVP_CIPHER_CTX ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int*,int*,int) ;
 int FUNC_3 (int *,int ,int *,int*,int *,int) ;
 int FUNC_4 () ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_3__* const) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (size_t,size_t*,size_t*,int ) ;
 int* FUNC_9 (int *,size_t,int ) ;
 int FUNC_10 (int ,int*) ;
 int FUNC_11 (scalar_t__*,TYPE_4__*) ;
 scalar_t__ FUNC_12 (int ,TYPE_2__*,int ,int*,int,int*,int,int*,int,int*,size_t) ;
 scalar_t__ FUNC_13 (int ,TYPE_2__*,int*,int,int*,int) ;
 int FUNC_14 (int ,int ,int *) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int*,int) ;
 int * FUNC_17 (size_t) ;
 int FUNC_18 (int*,int *,size_t) ;
 int FUNC_19 (int*,int,int) ;

OM_uint32
FUNC_20(OM_uint32 * VAR_7,
       const gsskrb5_ctx VAR_8,
       krb5_context VAR_9,
       int VAR_10,
       gss_qop_t VAR_11,
       const gss_buffer_t VAR_12,
       int * VAR_13,
       gss_buffer_t VAR_14,
       krb5_keyblock *VAR_15)
{
    u_char VAR_16[16], VAR_17[16], *VAR_18, *VAR_19;
    size_t VAR_20, VAR_21, VAR_22;
    krb5_keyblock VAR_23;
    krb5_error_code VAR_24;
    int32_t VAR_25;

    if (VAR_13)
 *VAR_13 = 0;

    VAR_22 = VAR_12->length;

    if (FUNC_7(VAR_8)) {
 VAR_20 = VAR_1;
 FUNC_8(VAR_20, &VAR_20, &VAR_21, VAR_2);
 VAR_21 += VAR_22;
    } else {
 VAR_22 += 1;
 VAR_20 = VAR_22 + VAR_1;
 FUNC_8(VAR_20, &VAR_20, &VAR_21, VAR_2);
    }

    VAR_14->length = VAR_21;
    VAR_14->value = FUNC_17 (VAR_21);
    if (VAR_14->value == ((void*)0)) {
 *VAR_7 = VAR_0;
 return VAR_4;
    }

    VAR_19 = FUNC_9(VAR_14->value,
      VAR_20,
      VAR_2);
    VAR_18 = VAR_19;

    *VAR_18++ = 0x02;
    *VAR_18++ = 0x01;
    *VAR_18++ = 0x11;
    *VAR_18++ = 0x00;
    if (VAR_10) {
 *VAR_18++ = 0x10;
 *VAR_18++ = 0x00;
    } else {
 *VAR_18++ = 0xff;
 *VAR_18++ = 0xff;
    }
    *VAR_18++ = 0xff;
    *VAR_18++ = 0xff;

    VAR_18 = ((void*)0);

    FUNC_5(&VAR_8->ctx_id_mutex);
    FUNC_14 (VAR_9,
         VAR_8->auth_context,
         &VAR_25);

    FUNC_10(VAR_25, VAR_19 + 8);

    FUNC_15 (VAR_9,
         VAR_8->auth_context,
         ++VAR_25);
    FUNC_6(&VAR_8->ctx_id_mutex);

    FUNC_19 (VAR_19 + 8 + 4,
     (VAR_8->more_flags & VAR_6) ? 0 : 0xff,
     4);

    FUNC_16(VAR_19 + 24, 8);


    VAR_18 = VAR_19 + VAR_1;
    FUNC_18(VAR_18, VAR_12->value, VAR_12->length);

    if (!FUNC_7(VAR_8))
 VAR_18[VAR_12->length] = 1;

    VAR_24 = FUNC_12(VAR_9,
       VAR_15, VAR_5,
       VAR_19 + 16, 8,
       VAR_19, 8,
       VAR_19 + 24, 8,
       VAR_19 + VAR_1,
       VAR_22);
    if (VAR_24) {
 *VAR_7 = VAR_24;
 FUNC_11(VAR_7, VAR_14);
 return VAR_4;
    }

    {
 int VAR_26;

 VAR_23.keytype = VAR_15->keytype;
 VAR_23.keyvalue.data = VAR_16;
 VAR_23.keyvalue.length = sizeof(VAR_16);

 for (VAR_26 = 0; VAR_26 < 16; VAR_26++)
     VAR_16[VAR_26] = ((u_char *)VAR_15->keyvalue.data)[VAR_26] ^ 0xF0;
    }
    VAR_24 = FUNC_13(VAR_9, &VAR_23,
     VAR_19 + 8, 4,
     VAR_17, sizeof(VAR_17));
    FUNC_19(VAR_16, 0, sizeof(VAR_16));
    if (VAR_24) {
 FUNC_11(VAR_7, VAR_14);
 *VAR_7 = VAR_24;
 return VAR_4;
    }


    if(VAR_10) {
 EVP_CIPHER_CTX *VAR_27;

 VAR_27 = FUNC_1();
 if (VAR_27 == ((void*)0)) {
     FUNC_11(VAR_7, VAR_14);
     *VAR_7 = VAR_0;
     return VAR_4;
 }
 FUNC_3(VAR_27, FUNC_4(), ((void*)0), VAR_17, ((void*)0), 1);
 FUNC_2(VAR_27, VAR_19 + 24, VAR_19 + 24, 8 + VAR_22);
 FUNC_0(VAR_27);
    }
    FUNC_19(VAR_17, 0, sizeof(VAR_17));

    VAR_24 = FUNC_13(VAR_9, VAR_15,
     VAR_19 + 16, 8,
     VAR_17, sizeof(VAR_17));
    if (VAR_24) {
 FUNC_11(VAR_7, VAR_14);
 *VAR_7 = VAR_24;
 return VAR_4;
    }

    {
 EVP_CIPHER_CTX *VAR_28;

 VAR_28 = FUNC_1();
 if (VAR_28 == ((void*)0)) {
     FUNC_11(VAR_7, VAR_14);
     *VAR_7 = VAR_0;
     return VAR_4;
 }
 FUNC_3(VAR_28, FUNC_4(), ((void*)0), VAR_17, ((void*)0), 1);
 FUNC_2(VAR_28, VAR_19 + 8, VAR_19 + 8 , 8);
 FUNC_0(VAR_28);
 FUNC_19(VAR_17, 0, sizeof(VAR_17));
    }

    if (VAR_13)
 *VAR_13 = VAR_10;

    *VAR_7 = 0;
    return VAR_3;
}
