
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct TYPE_14__ {int* data; int length; } ;
struct TYPE_15__ {TYPE_1__ keyvalue; int keytype; } ;
typedef TYPE_2__ krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int k6_data ;
typedef TYPE_3__* gsskrb5_ctx ;
typedef scalar_t__ gss_qop_t ;
typedef TYPE_4__* gss_buffer_t ;
typedef int cksum_data ;
struct TYPE_17__ {int* value; size_t length; } ;
struct TYPE_16__ {int more_flags; int ctx_id_mutex; int order; } ;
typedef scalar_t__ OM_uint32 ;
typedef int Klocaldata ;
typedef int EVP_CIPHER_CTX ;
typedef int Confounder ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int*,int*,size_t) ;
 int FUNC_3 (int *,int ,int *,int*,int *,int) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_3__* const) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int**,size_t,int ) ;
 scalar_t__ FUNC_10 (TYPE_4__*,size_t,size_t*) ;
 int FUNC_11 (int*,int *) ;
 int FUNC_12 (scalar_t__*,TYPE_4__*) ;
 scalar_t__ FUNC_13 (int ,TYPE_2__*,int ,int*,int,int*,int,int*,int,int*,size_t) ;
 scalar_t__ FUNC_14 (int ,TYPE_2__*,int*,int,int*,int) ;
 int FUNC_15 (int*,int*,int) ;
 int* FUNC_16 (size_t) ;
 int FUNC_17 (int*,char*,int) ;
 int FUNC_18 (int*,int*,size_t) ;
 int FUNC_19 (int*,int ,int) ;

OM_uint32 FUNC_20(OM_uint32 *VAR_11,
     const gsskrb5_ctx VAR_12,
     krb5_context VAR_13,
     const gss_buffer_t VAR_14,
     gss_buffer_t VAR_15,
     int *VAR_16,
     gss_qop_t *VAR_17,
     krb5_keyblock *VAR_18)
{
    u_char VAR_19[16];
    krb5_keyblock VAR_20;
    krb5_error_code VAR_21;
    uint32_t VAR_22;
    size_t VAR_23;
    OM_uint32 VAR_24;
    u_char VAR_25[16], VAR_26[8], VAR_27[8];
    u_char VAR_28[8];
    u_char *VAR_29, *VAR_30;
    int VAR_31;
    int VAR_32;
    size_t VAR_33 = 0, VAR_34;

    if (VAR_16)
 *VAR_16 = 0;
    if (VAR_17)
 *VAR_17 = 0;

    VAR_30 = VAR_14->value;

    if (FUNC_7(VAR_12)) {
 VAR_34 = VAR_2 +
     VAR_1;
 if (VAR_14->length < VAR_34)
     return VAR_4;
    } else {
 VAR_34 = VAR_14->length;
    }

    VAR_24 = FUNC_9(&VAR_30,
           VAR_34,
           VAR_3);
    if (VAR_24)
 return VAR_24;


    VAR_34 = (VAR_30 - (u_char *)VAR_14->value) +
 VAR_2;

    if (VAR_34 > VAR_14->length)
 return VAR_4;


    VAR_23 = VAR_14->length - VAR_34;

    VAR_29 = VAR_30;

    if (FUNC_17(VAR_29, "\x02\x01", 2) != 0)
 return VAR_6;
    VAR_29 += 2;
    if (FUNC_17(VAR_29, "\x11\x00", 2) != 0)
 return VAR_6;
    VAR_29 += 2;

    if (FUNC_17 (VAR_29, "\x10\x00", 2) == 0)
 VAR_32 = 1;
    else if (FUNC_17 (VAR_29, "\xff\xff", 2) == 0)
 VAR_32 = 0;
    else
 return VAR_6;

    VAR_29 += 2;
    if (FUNC_17 (VAR_29, "\xff\xff", 2) != 0)
 return VAR_5;
    VAR_29 = ((void*)0);

    VAR_21 = FUNC_14(VAR_13, VAR_18,
     VAR_30 + 16, 8,
     VAR_25, sizeof(VAR_25));
    if (VAR_21) {
 *VAR_11 = VAR_21;
 return VAR_8;
    }

    {
 EVP_CIPHER_CTX *VAR_35;

 VAR_35 = FUNC_1();
 if (VAR_35 == ((void*)0)) {
     *VAR_11 = VAR_0;
     return VAR_8;
 }
 FUNC_3(VAR_35, FUNC_4(), ((void*)0), VAR_25, ((void*)0), 1);
 FUNC_2(VAR_35, VAR_26, VAR_30 + 8, 8);
 FUNC_0(VAR_35);
 FUNC_19(VAR_25, 0, sizeof(VAR_25));
    }

    FUNC_11(VAR_26, &VAR_22);

    if (VAR_12->more_flags & VAR_10)
 VAR_31 = FUNC_17(&VAR_26[4], "\xff\xff\xff\xff", 4);
    else
 VAR_31 = FUNC_17(&VAR_26[4], "\x00\x00\x00\x00", 4);

    if (VAR_31 != 0) {
 *VAR_11 = 0;
 return VAR_5;
    }

    {
 int VAR_36;

 VAR_20.keytype = VAR_18->keytype;
 VAR_20.keyvalue.data = VAR_19;
 VAR_20.keyvalue.length = sizeof(VAR_19);

 for (VAR_36 = 0; VAR_36 < 16; VAR_36++)
     VAR_19[VAR_36] = ((u_char *)VAR_18->keyvalue.data)[VAR_36] ^ 0xF0;
    }
    VAR_21 = FUNC_14(VAR_13, &VAR_20,
     VAR_26, 4,
     VAR_25, sizeof(VAR_25));
    FUNC_19(VAR_19, 0, sizeof(VAR_19));
    if (VAR_21) {
 *VAR_11 = VAR_21;
 return VAR_8;
    }

    VAR_15->value = FUNC_16(VAR_23);
    if (VAR_15->value == ((void*)0)) {
 *VAR_11 = VAR_0;
 return VAR_8;
    }
    VAR_15->length = VAR_23;

    if(VAR_32) {
 EVP_CIPHER_CTX *VAR_37;

 VAR_37 = FUNC_1();
 if (VAR_37 == ((void*)0)) {
     FUNC_12(VAR_11, VAR_15);
     *VAR_11 = VAR_0;
     return VAR_8;
 }
 FUNC_3(VAR_37, FUNC_4(), ((void*)0), VAR_25, ((void*)0), 1);
 FUNC_2(VAR_37, VAR_27, VAR_30 + 24, 8);
 FUNC_2(VAR_37, VAR_15->value, VAR_30 + VAR_2, VAR_23);
 FUNC_0(VAR_37);
    } else {
 FUNC_18(VAR_27, VAR_30 + 24, 8);
 FUNC_18(VAR_15->value,
        VAR_30 + VAR_2,
        VAR_23);
    }
    FUNC_19(VAR_25, 0, sizeof(VAR_25));

    if (!FUNC_7(VAR_12)) {
 VAR_21 = FUNC_10(VAR_15, VAR_23, &VAR_33);
 if (VAR_21) {
     FUNC_12(VAR_11, VAR_15);
     *VAR_11 = 0;
     return VAR_21;
 }
 VAR_15->length -= VAR_33;
    }

    VAR_21 = FUNC_13(VAR_13,
       VAR_18, VAR_9,
       VAR_28, sizeof(VAR_28),
       VAR_30, 8,
       VAR_27, sizeof(VAR_27),
       VAR_15->value,
       VAR_15->length + VAR_33);
    if (VAR_21) {
 FUNC_12(VAR_11, VAR_15);
 *VAR_11 = VAR_21;
 return VAR_8;
    }

    VAR_31 = FUNC_15(VAR_28, VAR_30 + 16, 8);
    if (VAR_31) {
 FUNC_12(VAR_11, VAR_15);
 *VAR_11 = 0;
 return VAR_5;
    }

    FUNC_5(&VAR_12->ctx_id_mutex);
    VAR_24 = FUNC_8(VAR_12->order, VAR_22);
    FUNC_6(&VAR_12->ctx_id_mutex);
    if (VAR_24)
 return VAR_24;

    if (VAR_16)
 *VAR_16 = VAR_32;

    *VAR_11 = 0;
    return VAR_7;
}
