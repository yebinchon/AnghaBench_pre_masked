
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int k6_data ;
typedef int int32_t ;
typedef TYPE_1__* gsskrb5_ctx ;
typedef int gss_qop_t ;
typedef TYPE_2__* gss_buffer_t ;
struct TYPE_8__ {size_t length; int * value; } ;
struct TYPE_7__ {int more_flags; int ctx_id_mutex; int auth_context; } ;
typedef scalar_t__ OM_uint32 ;
typedef int EVP_CIPHER_CTX ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *,int *,int) ;
 int FUNC_3 (int *,int ,int *,int *,int *,int) ;
 int FUNC_4 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_7 (int *,size_t,int ) ;
 int FUNC_8 (int,size_t*,size_t*,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (scalar_t__*,TYPE_2__*) ;
 scalar_t__ FUNC_11 (int ,int *,int ,int *,int,int *,int,int *,size_t,int *,int ) ;
 scalar_t__ FUNC_12 (int ,int *,int *,int,int *,int) ;
 int FUNC_13 (int ,int ,int *) ;
 int FUNC_14 (int ,int ,int ) ;
 int * FUNC_15 (size_t) ;
 int FUNC_16 (int *,int,int) ;

OM_uint32
FUNC_17(OM_uint32 * VAR_6,
   const gsskrb5_ctx VAR_7,
   krb5_context VAR_8,
   gss_qop_t VAR_9,
   const gss_buffer_t VAR_10,
   gss_buffer_t VAR_11,
   krb5_keyblock *VAR_12)
{
    krb5_error_code VAR_13;
    int32_t VAR_14;
    size_t VAR_15, VAR_16;
    u_char VAR_17[16], *VAR_18, *VAR_19;
    EVP_CIPHER_CTX *VAR_20;

    FUNC_8 (22, &VAR_15, &VAR_16, VAR_1);

    VAR_11->length = VAR_16;
    VAR_11->value = FUNC_15 (VAR_16);
    if (VAR_11->value == ((void*)0)) {
 *VAR_6 = VAR_0;
 return VAR_3;
    }

    VAR_18 = FUNC_7(VAR_11->value,
      VAR_15,
      VAR_1);
    VAR_19 = VAR_18;

    *VAR_19++ = 0x01;
    *VAR_19++ = 0x01;
    *VAR_19++ = 0x11;
    *VAR_19++ = 0x00;
    *VAR_19++ = 0xff;
    *VAR_19++ = 0xff;
    *VAR_19++ = 0xff;
    *VAR_19++ = 0xff;

    VAR_19 = ((void*)0);

    VAR_13 = FUNC_11(VAR_8,
       VAR_12, VAR_4,
       VAR_18 + 16, 8,
       VAR_18, 8,
       VAR_10->value, VAR_10->length,
       ((void*)0), 0);
    if (VAR_13) {
 FUNC_10(VAR_6, VAR_11);
 *VAR_6 = VAR_13;
 return VAR_3;
    }

    VAR_13 = FUNC_12(VAR_8, VAR_12,
     VAR_18 + 16, 8,
     VAR_17, sizeof(VAR_17));
    if (VAR_13) {
 FUNC_10(VAR_6, VAR_11);
 *VAR_6 = VAR_13;
 return VAR_3;
    }

    FUNC_5(&VAR_7->ctx_id_mutex);
    FUNC_13 (VAR_8,
         VAR_7->auth_context,
         &VAR_14);
    VAR_19 = VAR_18 + 8;
    FUNC_9(VAR_14, VAR_19);

    FUNC_14 (VAR_8,
         VAR_7->auth_context,
         ++VAR_14);
    FUNC_6(&VAR_7->ctx_id_mutex);

    FUNC_16 (VAR_19 + 4, (VAR_7->more_flags & VAR_5) ? 0 : 0xff, 4);

    VAR_20 = FUNC_1();
    if (VAR_20 == ((void*)0)) {
 FUNC_10(VAR_6, VAR_11);
 *VAR_6 = VAR_0;
 return VAR_3;
    }

    FUNC_3(VAR_20, FUNC_4(), ((void*)0), VAR_17, ((void*)0), 1);
    FUNC_2(VAR_20, VAR_19, VAR_19, 8);
    FUNC_0(VAR_20);

    FUNC_16(VAR_17, 0, sizeof(VAR_17));

    *VAR_6 = 0;
    return VAR_2;
}
