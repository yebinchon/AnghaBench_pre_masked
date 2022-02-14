
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef char u_char ;
typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int k6_data ;
typedef TYPE_1__* gsskrb5_ctx ;
typedef scalar_t__ gss_qop_t ;
typedef TYPE_2__* gss_buffer_t ;
typedef int cksum_data ;
struct TYPE_7__ {char* value; int length; } ;
struct TYPE_6__ {int more_flags; int ctx_id_mutex; int order; } ;
typedef int SND_SEQ ;
typedef scalar_t__ OM_uint32 ;
typedef int EVP_CIPHER_CTX ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*,char*,int) ;
 int FUNC_3 (int *,int ,int *,void*,int *,int ) ;
 int FUNC_4 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int *) ;
 scalar_t__ FUNC_9 (char**,int ,char const*,int ) ;
 scalar_t__ FUNC_10 (int ,int *,int ,char*,int,char*,int,char*,int ,int *,int ) ;
 scalar_t__ FUNC_11 (int ,int *,char*,int,char*,int) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*,int ,int) ;

OM_uint32
FUNC_15(OM_uint32 * VAR_8,
      const gsskrb5_ctx VAR_9,
      krb5_context VAR_10,
      const gss_buffer_t VAR_11,
      const gss_buffer_t VAR_12,
      gss_qop_t * VAR_13,
      krb5_keyblock *VAR_14,
      const char *VAR_15)
{
    krb5_error_code VAR_16;
    uint32_t VAR_17;
    OM_uint32 VAR_18;
    u_char VAR_19[8], VAR_20[8], *VAR_21;
    char VAR_22[16];
    int VAR_23;

    if (VAR_13)
 *VAR_13 = 0;

    VAR_21 = VAR_12->value;
    VAR_18 = FUNC_9 (&VAR_21,
           VAR_12->length,
           VAR_15,
           VAR_1);
    if (VAR_18)
 return VAR_18;

    if (FUNC_13(VAR_21, "\x11\x00", 2) != 0)
 return VAR_3;
    VAR_21 += 2;
    if (FUNC_13 (VAR_21, "\xff\xff\xff\xff", 4) != 0)
 return VAR_2;
    VAR_21 += 4;

    VAR_16 = FUNC_10(VAR_10,
       VAR_14, VAR_6,
       VAR_20, sizeof(VAR_20),
       VAR_21 - 8, 8,
       VAR_11->value, VAR_11->length,
       ((void*)0), 0);
    if (VAR_16) {
 *VAR_8 = VAR_16;
 return VAR_5;
    }

    VAR_16 = FUNC_11(VAR_10, VAR_14,
     VAR_20, sizeof(VAR_20),
     VAR_22, sizeof(VAR_22));
    if (VAR_16) {
 *VAR_8 = VAR_16;
 return VAR_5;
    }

    VAR_23 = FUNC_12(VAR_20, VAR_21 + 8, 8);
    if (VAR_23) {
 *VAR_8 = 0;
 return VAR_2;
    }

    {
 EVP_CIPHER_CTX *VAR_24;

 VAR_24 = FUNC_1();
 if (VAR_24 == ((void*)0)) {
     *VAR_8 = VAR_0;
     return VAR_5;
 }
 FUNC_3(VAR_24, FUNC_4(), ((void*)0), (void *)VAR_22, ((void*)0), 0);
 FUNC_2(VAR_24, VAR_19, VAR_21, 8);
 FUNC_0(VAR_24);

 FUNC_14(VAR_22, 0, sizeof(VAR_22));
    }

    FUNC_8(VAR_19, &VAR_17);

    if (VAR_9->more_flags & VAR_7)
 VAR_23 = FUNC_13(&VAR_19[4], "\xff\xff\xff\xff", 4);
    else
 VAR_23 = FUNC_13(&VAR_19[4], "\x00\x00\x00\x00", 4);

    FUNC_14(VAR_19, 0, sizeof(VAR_19));
    if (VAR_23 != 0) {
 *VAR_8 = 0;
 return VAR_2;
    }

    FUNC_5(&VAR_9->ctx_id_mutex);
    VAR_18 = FUNC_7(VAR_9->order, VAR_17);
    FUNC_6(&VAR_9->ctx_id_mutex);
    if (VAR_18)
 return VAR_18;

    *VAR_8 = 0;
    return VAR_4;
}
