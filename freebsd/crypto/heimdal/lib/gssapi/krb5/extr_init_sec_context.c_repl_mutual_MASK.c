
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
struct TYPE_15__ {int * data; scalar_t__ length; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
typedef int krb5_ap_rep_enc_part ;
typedef int int32_t ;
typedef TYPE_2__* gsskrb5_ctx ;
typedef int gss_channel_bindings_t ;
typedef TYPE_3__* gss_buffer_t ;
typedef int gss_OID ;
struct TYPE_17__ {int * value; scalar_t__ length; } ;
struct TYPE_16__ {scalar_t__ flags; int auth_context; int lifetime; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (scalar_t__*,TYPE_3__* const,TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__*,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*,TYPE_1__) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_10 (int ,int ,TYPE_1__*,int **) ;

__attribute__((used)) static OM_uint32
FUNC_11
(OM_uint32 * VAR_5,
 gsskrb5_ctx VAR_6,
 krb5_context VAR_7,
 const gss_OID VAR_8,
 OM_uint32 VAR_9,
 OM_uint32 VAR_10,
 const gss_channel_bindings_t VAR_11,
 const gss_buffer_t VAR_12,
 gss_OID * VAR_13,
 gss_buffer_t VAR_14,
 OM_uint32 * VAR_15,
 OM_uint32 * VAR_16
    )
{
    OM_uint32 VAR_17;
    krb5_error_code VAR_18;
    krb5_data VAR_19;
    krb5_ap_rep_enc_part *VAR_20;

    VAR_14->length = 0;
    VAR_14->value = ((void*)0);

    if (VAR_13)
 *VAR_13 = VAR_1;

    if (FUNC_0(VAR_6)) {

 VAR_19.length = VAR_12->length;
 VAR_19.data = VAR_12->value;
 VAR_18 = FUNC_10(VAR_7,
      VAR_6->auth_context,
      &VAR_19,
      &VAR_20);
 if (VAR_18) {
     VAR_17 = FUNC_1(VAR_5,
           VAR_12,
           &VAR_19,
           "\x03\x00",
           VAR_1);
     if (VAR_17 == VAR_2) {
  *VAR_5 = FUNC_4(VAR_7, VAR_6, VAR_19);
     } else {
  *VAR_5 = VAR_18;
     }
     return VAR_4;
 }
    } else {
 VAR_17 = FUNC_1 (VAR_5,
        VAR_12,
        &VAR_19,
        "\x02\x00",
        VAR_1);
 if (VAR_17 == VAR_3) {

     VAR_17 = FUNC_1 (VAR_5,
     VAR_12,
     &VAR_19,
     "\x03\x00",
     VAR_1);
     if (VAR_17 == VAR_2) {
  *VAR_5 = FUNC_4(VAR_7, VAR_6, VAR_19);
  return VAR_4;
     }
 }
 VAR_18 = FUNC_10 (VAR_7,
       VAR_6->auth_context,
       &VAR_19,
       &VAR_20);
 if (VAR_18) {
     *VAR_5 = VAR_18;
     return VAR_4;
 }
    }

    FUNC_8 (VAR_7,
          VAR_20);

    *VAR_5 = 0;
    if (VAR_16) {
 VAR_17 = FUNC_2(VAR_5,
         VAR_7,
         VAR_6->lifetime,
         VAR_16);
    } else {
 VAR_17 = VAR_2;
    }
    if (VAR_15)
 *VAR_15 = VAR_6->flags;

    if (VAR_9 & VAR_0) {
 int32_t VAR_21, VAR_22;
 krb5_data VAR_23;
 FUNC_6(VAR_7, VAR_6->auth_context, &VAR_22);
 FUNC_5(VAR_7, VAR_6->auth_context, &VAR_21);
 FUNC_7(VAR_7, VAR_6->auth_context, VAR_22);

 VAR_18 = FUNC_9(VAR_7, VAR_6->auth_context, &VAR_23);
 if (VAR_18) {
     *VAR_5 = VAR_18;
     return VAR_4;
 }


 FUNC_7(VAR_7, VAR_6->auth_context, VAR_21);

 VAR_14->length = VAR_23.length;
 VAR_14->value = VAR_23.data;
    }

    return FUNC_3(VAR_5, VAR_6, VAR_7);
}
