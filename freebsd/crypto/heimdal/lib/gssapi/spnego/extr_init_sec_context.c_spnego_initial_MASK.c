
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;
typedef struct TYPE_15__ TYPE_13__ ;


typedef int u_char ;
typedef TYPE_2__* spnego_name ;
typedef int ni ;
typedef TYPE_3__* gssspnego_ctx ;
typedef scalar_t__ gss_name_t ;
typedef scalar_t__ gss_ctx_id_t ;
typedef int gss_cred_id_t ;
typedef int gss_channel_bindings_t ;
typedef int gss_buffer_t ;
struct TYPE_20__ {scalar_t__ length; int * value; } ;
typedef TYPE_4__ gss_buffer_desc ;
typedef int gss_OID ;
struct TYPE_15__ {int * val; scalar_t__ len; } ;
struct TYPE_21__ {TYPE_13__ mechTypes; int * mechListMIC; TYPE_14__* mechToken; int * reqFlags; } ;
struct TYPE_17__ {int * val; scalar_t__ len; } ;
struct TYPE_19__ {int local; scalar_t__ mech_flags; scalar_t__ mech_time_rec; int maybe_open; int ctx_id_mutex; int negotiated_mech_type; TYPE_1__ initiator_mech_types; int preferred_mech_type; int target_name; int negotiated_ctx_id; } ;
struct TYPE_18__ {int type; int value; } ;
struct TYPE_16__ {scalar_t__ length; int * data; } ;
typedef scalar_t__ OM_uint32 ;
typedef TYPE_5__ NegTokenInit ;


 int FUNC_0 (TYPE_14__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ const VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_5 (scalar_t__*,int ,int ,int ,int ,TYPE_13__*,int *) ;
 int FUNC_6 (scalar_t__*,scalar_t__*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (size_t) ;
 int FUNC_9 (int *,size_t,size_t,int ,int ,int ,size_t*) ;
 int FUNC_10 (int *,size_t,TYPE_5__*,size_t*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_5__*) ;
 scalar_t__ FUNC_13 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_14 (scalar_t__*,int *,int *,int *) ;
 scalar_t__ FUNC_15 (scalar_t__*,int ,int *,int ,int ,scalar_t__,scalar_t__,int const,int const,int *,TYPE_4__*,scalar_t__*,scalar_t__*) ;
 int FUNC_16 (int ,scalar_t__,scalar_t__) ;
 int FUNC_17 (scalar_t__*,TYPE_4__*) ;
 int VAR_11 ;
 size_t FUNC_18 (TYPE_5__*) ;
 void* FUNC_19 (size_t) ;
 int FUNC_20 (int *,int *,scalar_t__) ;
 int FUNC_21 (TYPE_5__*,int ,int) ;

__attribute__((used)) static OM_uint32
FUNC_22
           (OM_uint32 * VAR_12,
     gss_cred_id_t VAR_13,
            gss_ctx_id_t * VAR_14,
            const gss_name_t VAR_15,
            const gss_OID VAR_16,
            OM_uint32 VAR_17,
            OM_uint32 VAR_18,
            const gss_channel_bindings_t VAR_19,
            const gss_buffer_t VAR_20,
            gss_OID * VAR_21,
            gss_buffer_t VAR_22,
            OM_uint32 * VAR_23,
            OM_uint32 * VAR_24
    )
{
    NegTokenInit VAR_25;
    int VAR_26;
    OM_uint32 VAR_27, VAR_28;
    gss_buffer_desc VAR_29;
    u_char *VAR_30;
    size_t VAR_31, VAR_32;
    gss_buffer_desc VAR_33;
    size_t VAR_34;
    gss_ctx_id_t VAR_35;
    gssspnego_ctx VAR_36;
    spnego_name VAR_37 = (spnego_name)VAR_15;

    *VAR_12 = 0;

    FUNC_21 (&VAR_25, 0, sizeof(VAR_25));

    *VAR_14 = VAR_4;

    if (VAR_15 == VAR_5)
 return VAR_7;

    VAR_27 = FUNC_4(&VAR_28, &VAR_35);
    if (FUNC_1(VAR_27)) {
 *VAR_12 = VAR_28;
 return VAR_27;
    }
    VAR_36 = (gssspnego_ctx)VAR_35;

    FUNC_2(&VAR_36->ctx_id_mutex);

    VAR_36->local = 1;

    VAR_27 = FUNC_14(&VAR_28, &VAR_37->value, &VAR_37->type, &VAR_36->target_name);
    if (FUNC_1(VAR_27)) {
 *VAR_12 = VAR_28;
 FUNC_6(&VAR_28, &VAR_35, VAR_3);
 return VAR_27;
    }

    VAR_27 = FUNC_5(&VAR_28,
         VAR_36->target_name,
         VAR_11,
         0,
         VAR_13,
         &VAR_25.mechTypes,
         &VAR_36->preferred_mech_type);
    if (FUNC_1(VAR_27)) {
 *VAR_12 = VAR_28;
 FUNC_6(&VAR_28, &VAR_35, VAR_3);
 return VAR_27;
    }

    VAR_25.reqFlags = ((void*)0);







    VAR_27 = FUNC_15(&VAR_28,
          VAR_13,
          &VAR_36->negotiated_ctx_id,
          VAR_36->target_name,
          VAR_36->preferred_mech_type,
          VAR_17,
          VAR_18,
          VAR_19,
          VAR_20,
          &VAR_36->negotiated_mech_type,
          &VAR_29,
          &VAR_36->mech_flags,
          &VAR_36->mech_time_rec);
    if (FUNC_1(VAR_27)) {
 FUNC_12(&VAR_25);
 *VAR_12 = VAR_28;
 FUNC_16(VAR_36->preferred_mech_type, VAR_27, VAR_28);
 FUNC_6(&VAR_28, &VAR_35, VAR_3);
 return VAR_27;
    }
    if (VAR_27 == VAR_8)
 VAR_36->maybe_open = 1;

    if (VAR_29.length != 0) {
 FUNC_0(VAR_25.mechToken, 1);
 if (VAR_25.mechToken == ((void*)0)) {
     FUNC_12(&VAR_25);
     FUNC_17(&VAR_28, &VAR_29);
     FUNC_6(&VAR_28, &VAR_35, VAR_3);
     *VAR_12 = VAR_2;
     return VAR_10;
 }
 VAR_25.mechToken->length = VAR_29.length;
 VAR_25.mechToken->data = FUNC_19(VAR_29.length);
 if (VAR_25.mechToken->data == ((void*)0) && VAR_29.length != 0) {
     FUNC_12(&VAR_25);
     FUNC_17(&VAR_28, &VAR_29);
     *VAR_12 = VAR_2;
     FUNC_6(&VAR_28, &VAR_35, VAR_3);
     return VAR_10;
 }
 FUNC_20(VAR_25.mechToken->data, VAR_29.value, VAR_29.length);
 FUNC_17(&VAR_28, &VAR_29);
    } else
 VAR_25.mechToken = ((void*)0);

    VAR_25.mechListMIC = ((void*)0);

    VAR_34 = FUNC_18(&VAR_25);
    VAR_31 = 1 + FUNC_8(VAR_34) + VAR_34;

    VAR_30 = FUNC_19(VAR_31);
    if (VAR_30 == ((void*)0)) {
 FUNC_12(&VAR_25);
 *VAR_12 = VAR_2;
 FUNC_6(&VAR_28, &VAR_35, VAR_3);
 return VAR_10;
    }

    VAR_26 = FUNC_10(VAR_30 + VAR_31 - 1,
         VAR_34,
         &VAR_25, &VAR_32);
    if (VAR_26 == 0 && VAR_34 != VAR_32)
 FUNC_7();

    if (VAR_26 == 0) {
 size_t VAR_38;

 VAR_26 = FUNC_9(VAR_30 + VAR_31 - VAR_32 - 1,
         VAR_31 - VAR_32,
         VAR_32,
         VAR_0,
         VAR_1,
         0,
         &VAR_38);
 if (VAR_26 == 0 && VAR_38 + VAR_32 != VAR_31)
     FUNC_7();
    }
    if (VAR_26) {
 *VAR_12 = VAR_26;
 FUNC_11(VAR_30);
 FUNC_12(&VAR_25);
 FUNC_6(&VAR_28, &VAR_35, VAR_3);
 return VAR_10;
    }

    VAR_33.value = VAR_30;
    VAR_33.length = VAR_31;

    VAR_36->initiator_mech_types.len = VAR_25.mechTypes.len;
    VAR_36->initiator_mech_types.val = VAR_25.mechTypes.val;
    VAR_25.mechTypes.len = 0;
    VAR_25.mechTypes.val = ((void*)0);

    FUNC_12(&VAR_25);

    VAR_27 = FUNC_13(&VAR_33,
    VAR_6,
    VAR_22);
    FUNC_11 (VAR_30);

    if (VAR_27) {
 FUNC_6(&VAR_28, &VAR_35, VAR_3);
 return VAR_27;
    }

    if (VAR_21)
 *VAR_21 = VAR_36->negotiated_mech_type;
    if (VAR_23)
 *VAR_23 = VAR_36->mech_flags;
    if (VAR_24)
 *VAR_24 = VAR_36->mech_time_rec;

    FUNC_3(&VAR_36->ctx_id_mutex);

    *VAR_14 = VAR_35;

    return VAR_9;
}
