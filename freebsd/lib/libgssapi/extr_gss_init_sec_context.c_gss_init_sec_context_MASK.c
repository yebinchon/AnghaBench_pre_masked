
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _gss_name {int dummy; } ;
struct _gss_mechanism_name {int gmn_name; } ;
struct _gss_mech_switch {scalar_t__ (* gm_init_sec_context ) (scalar_t__*,int ,int *,int ,int *,scalar_t__,scalar_t__,int const,int const,int **,int ,scalar_t__*,scalar_t__*) ;int gm_mech_oid; } ;
struct _gss_context {int gc_ctx; struct _gss_mech_switch* gc_mech; } ;
typedef scalar_t__ gss_name_t ;
typedef scalar_t__ gss_ctx_id_t ;
typedef int gss_cred_id_t ;
typedef int gss_channel_bindings_t ;
typedef int gss_buffer_t ;
typedef int * gss_OID ;
struct TYPE_3__ {scalar_t__ count; int * elements; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 struct _gss_mech_switch* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__*,struct _gss_name*,int *,struct _gss_mechanism_name**) ;
 int FUNC_3 () ;
 int FUNC_4 (int const,int *) ;
 TYPE_1__* VAR_7 ;
 int FUNC_5 (struct _gss_mech_switch*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct _gss_context*) ;
 struct _gss_context* FUNC_7 (int) ;
 int FUNC_8 (struct _gss_context*,int ,int) ;
 scalar_t__ FUNC_9 (scalar_t__*,int ,int *,int ,int *,scalar_t__,scalar_t__,int const,int const,int **,int ,scalar_t__*,scalar_t__*) ;

OM_uint32
FUNC_10(OM_uint32 * VAR_8,
    const gss_cred_id_t VAR_9,
    gss_ctx_id_t * VAR_10,
    const gss_name_t VAR_11,
    const gss_OID VAR_12,
    OM_uint32 VAR_13,
    OM_uint32 VAR_14,
    const gss_channel_bindings_t VAR_15,
    const gss_buffer_t VAR_16,
    gss_OID * VAR_17,
    gss_buffer_t VAR_18,
    OM_uint32 * VAR_19,
    OM_uint32 * VAR_20)
{
 OM_uint32 VAR_21;
 struct _gss_mech_switch *VAR_22;
 struct _gss_name *VAR_23 = (struct _gss_name *) VAR_11;
 struct _gss_mechanism_name *VAR_24;
 struct _gss_context *VAR_25 = (struct _gss_context *) *VAR_10;
 gss_cred_id_t VAR_26;
 int VAR_27;
 gss_OID VAR_28 = VAR_12;

 *VAR_8 = 0;

 FUNC_0(VAR_18);
 if (VAR_17)
  *VAR_17 = VAR_1;
 if (VAR_19)
  *VAR_19 = 0;
 if (VAR_20)
  *VAR_20 = 0;






 if (!VAR_25) {
  if (VAR_28 == VAR_1) {
   FUNC_3();
   if (VAR_7 == VAR_2
       || VAR_7->count == 0)
    return (VAR_3);
   VAR_28 = &VAR_7->elements[0];
  }

  VAR_25 = FUNC_7(sizeof(struct _gss_context));
  if (!VAR_25) {
   *VAR_8 = VAR_0;
   return (VAR_6);
  }
  FUNC_8(VAR_25, 0, sizeof(struct _gss_context));
  VAR_22 = VAR_25->gc_mech = FUNC_1(VAR_28);
  if (!VAR_22) {
   FUNC_6(VAR_25);
   return (VAR_3);
  }
  VAR_27 = 1;
 } else {
  VAR_22 = VAR_25->gc_mech;
  VAR_28 = &VAR_25->gc_mech->gm_mech_oid;
  VAR_27 = 0;
 }




 VAR_21 = FUNC_2(VAR_8, VAR_23, VAR_28, &VAR_24);
 if (VAR_21 != VAR_4) {
  if (VAR_27)
   FUNC_6(VAR_25);
  return (VAR_21);
 }




 VAR_26 = FUNC_4(VAR_9, VAR_28);

 VAR_21 = VAR_22->gm_init_sec_context(VAR_8,
     VAR_26,
     &VAR_25->gc_ctx,
     VAR_24->gmn_name,
     VAR_28,
     VAR_13,
     VAR_14,
     VAR_15,
     VAR_16,
     VAR_17,
     VAR_18,
     VAR_19,
     VAR_20);

 if (VAR_21 != VAR_4
     && VAR_21 != VAR_5) {
  if (VAR_27)
   FUNC_6(VAR_25);
  FUNC_0(VAR_18);
  FUNC_5(VAR_22, VAR_21, *VAR_8);
 } else {
  *VAR_10 = (gss_ctx_id_t) VAR_25;
 }

 return (VAR_21);
}
