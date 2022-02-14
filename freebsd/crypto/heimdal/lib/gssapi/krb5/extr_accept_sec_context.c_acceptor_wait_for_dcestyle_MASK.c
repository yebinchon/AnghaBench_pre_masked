
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
struct TYPE_9__ {int data; int length; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
typedef int krb5_ap_rep_enc_part ;
typedef scalar_t__ int32_t ;
typedef int gsskrb5_name ;
typedef TYPE_2__* gsskrb5_ctx ;
typedef int gss_name_t ;
typedef int gss_cred_id_t ;
typedef int gss_channel_bindings_t ;
typedef TYPE_3__* gss_buffer_t ;
typedef int gss_OID ;
struct TYPE_11__ {int value; int length; } ;
struct TYPE_10__ {scalar_t__ flags; int auth_context; int source; int lifetime; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__*,TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__*) ;
 int FUNC_4 (int ,int ,int ,scalar_t__*) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int ,TYPE_1__*,int **) ;

__attribute__((used)) static OM_uint32
FUNC_10(OM_uint32 * VAR_4,
      gsskrb5_ctx VAR_5,
      krb5_context VAR_6,
      const gss_cred_id_t VAR_7,
      const gss_buffer_t VAR_8,
      const gss_channel_bindings_t VAR_9,
      gss_name_t * VAR_10,
      gss_OID * VAR_11,
      gss_buffer_t VAR_12,
      OM_uint32 * VAR_13,
      OM_uint32 * VAR_14,
      gss_cred_id_t * VAR_15)
{
    OM_uint32 VAR_16;
    krb5_error_code VAR_17;
    krb5_data VAR_18;
    int32_t VAR_19, VAR_20;





    VAR_18.length = VAR_8->length;
    VAR_18.data = VAR_8->value;






    {
 VAR_17 = FUNC_2(VAR_6,
            VAR_5->auth_context,
            &VAR_20);
 if (VAR_17) {
     *VAR_4 = VAR_17;
     return VAR_1;
 }

 VAR_17 = FUNC_3(VAR_6,
      VAR_5->auth_context,
      &VAR_19);
 if (VAR_17) {
     *VAR_4 = VAR_17;
     return VAR_1;
 }

 VAR_17 = FUNC_6(VAR_6,
      VAR_5->auth_context,
      VAR_20);
 if (VAR_17) {
     *VAR_4 = VAR_17;
     return VAR_1;
 }
    }






    {
 krb5_ap_rep_enc_part *VAR_21;
 int32_t VAR_22;

 FUNC_4(VAR_6,
      VAR_5->auth_context,
      VAR_3,
      &VAR_22);

 VAR_17 = FUNC_9(VAR_6, VAR_5->auth_context, &VAR_18, &VAR_21);
 if (VAR_17) {
     *VAR_4 = VAR_17;
     return VAR_1;
 }
 FUNC_8(VAR_6, VAR_21);
 FUNC_5(VAR_6, VAR_5->auth_context, VAR_22);
    }


    {
 OM_uint32 VAR_23;

 VAR_16 = FUNC_0(VAR_4,
         VAR_6,
         VAR_5->lifetime,
         &VAR_23);
 if (VAR_16) {
     return VAR_16;
 }
 if (VAR_23 == 0) {
     return VAR_0;
 }

 if (VAR_14) *VAR_14 = VAR_23;
    }


    if (VAR_13) *VAR_13 = VAR_5->flags;

    if (VAR_10) {
 VAR_17 = FUNC_7(VAR_6,
       VAR_5->source,
       (gsskrb5_name*)VAR_10);
 if (VAR_17) {
     *VAR_4 = VAR_17;
     return VAR_1;
 }
    }







    {
 int32_t VAR_24, VAR_25;

 VAR_17 = FUNC_3(VAR_6,
      VAR_5->auth_context,
      &VAR_24);
 if (VAR_17) {
     *VAR_4 = VAR_17;
     return VAR_1;
 }

 VAR_17 = FUNC_2(VAR_6,
            VAR_5->auth_context,
            &VAR_25);
 if (VAR_17) {

     *VAR_4 = VAR_17;
     return VAR_1;
 }




 if (VAR_24 != VAR_25) {
     return VAR_2;
 }
    }





    {
 VAR_17 = FUNC_6(VAR_6,
      VAR_5->auth_context,
      VAR_19);
 if (VAR_17) {
     *VAR_4 = VAR_17;
     return VAR_1;
 }
    }

    return FUNC_1(VAR_4, VAR_5, VAR_6,
      VAR_15);
}
