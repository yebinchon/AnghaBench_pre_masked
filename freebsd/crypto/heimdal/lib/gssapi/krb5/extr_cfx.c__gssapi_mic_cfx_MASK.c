
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int* TOK_ID; int * SND_SEQ; int Filler; int Flags; } ;
typedef TYPE_2__ u_char ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int int32_t ;
typedef TYPE_3__* gsskrb5_ctx ;
typedef int gss_qop_t ;
typedef TYPE_2__* gss_cfx_mic_token ;
typedef TYPE_5__* gss_buffer_t ;
struct TYPE_16__ {int length; TYPE_2__* data; } ;
struct TYPE_20__ {TYPE_1__ checksum; } ;
struct TYPE_19__ {int length; TYPE_2__* value; } ;
struct TYPE_18__ {int more_flags; int crypto; int ctx_id_mutex; int auth_context; } ;
typedef scalar_t__ OM_uint32 ;
typedef TYPE_6__ Checksum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,unsigned int,int ,TYPE_2__*,size_t,TYPE_6__*) ;
 void* FUNC_8 (size_t) ;
 int FUNC_9 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_10 (int ,int,int) ;

OM_uint32 FUNC_11(OM_uint32 *VAR_9,
     const gsskrb5_ctx VAR_10,
     krb5_context VAR_11,
     gss_qop_t VAR_12,
     const gss_buffer_t VAR_13,
     gss_buffer_t VAR_14)
{
    gss_cfx_mic_token VAR_15;
    krb5_error_code VAR_16;
    unsigned VAR_17;
    Checksum VAR_18;
    u_char *VAR_19;
    size_t VAR_20;
    int32_t VAR_21;

    VAR_20 = VAR_13->length + sizeof(*VAR_15);
    VAR_19 = FUNC_8(VAR_20);
    if (VAR_19 == ((void*)0)) {
 *VAR_9 = VAR_3;
 return VAR_5;
    }

    FUNC_9(VAR_19, VAR_13->value, VAR_13->length);

    VAR_15 = (gss_cfx_mic_token)(VAR_19 + VAR_13->length);
    VAR_15->TOK_ID[0] = 0x04;
    VAR_15->TOK_ID[1] = 0x04;
    VAR_15->Flags = 0;
    if ((VAR_10->more_flags & VAR_8) == 0)
 VAR_15->Flags |= VAR_2;
    if (VAR_10->more_flags & VAR_0)
 VAR_15->Flags |= VAR_1;
    FUNC_10(VAR_15->Filler, 0xFF, 5);

    FUNC_0(&VAR_10->ctx_id_mutex);
    FUNC_5(VAR_11,
        VAR_10->auth_context,
        &VAR_21);
    FUNC_2(0, &VAR_15->SND_SEQ[0]);
    FUNC_2(VAR_21, &VAR_15->SND_SEQ[4]);
    FUNC_6(VAR_11,
        VAR_10->auth_context,
        ++VAR_21);
    FUNC_1(&VAR_10->ctx_id_mutex);

    if (VAR_10->more_flags & VAR_8) {
 VAR_17 = VAR_7;
    } else {
 VAR_17 = VAR_6;
    }

    VAR_16 = FUNC_7(VAR_11, VAR_10->crypto,
 VAR_17, 0, VAR_19, VAR_20, &VAR_18);
    if (VAR_16 != 0) {
 *VAR_9 = VAR_16;
 FUNC_3(VAR_19);
 return VAR_5;
    }


    VAR_14->length = sizeof(*VAR_15) + VAR_18.checksum.length;
    VAR_14->value = FUNC_8(VAR_14->length);
    if (VAR_14->value == ((void*)0)) {
 *VAR_9 = VAR_3;
 FUNC_4(&VAR_18);
 FUNC_3(VAR_19);
 return VAR_5;
    }


    FUNC_9(VAR_14->value, VAR_15, sizeof(*VAR_15));
    FUNC_9((u_char *)VAR_14->value + sizeof(*VAR_15),
    VAR_18.checksum.data, VAR_18.checksum.length);

    FUNC_4(&VAR_18);
    FUNC_3(VAR_19);

    *VAR_9 = 0;
    return VAR_4;
}
