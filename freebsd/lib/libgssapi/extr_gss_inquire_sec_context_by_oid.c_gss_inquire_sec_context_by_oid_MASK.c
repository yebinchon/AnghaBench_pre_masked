
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _gss_mech_switch {scalar_t__ (* gm_inquire_sec_context_by_oid ) (scalar_t__*,int ,int const,int *) ;} ;
struct _gss_context {int gc_ctx; struct _gss_mech_switch* gc_mech; } ;
typedef scalar_t__ gss_ctx_id_t ;
typedef int gss_buffer_set_t ;
typedef int gss_OID ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct _gss_mech_switch*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,int const,int *) ;

OM_uint32
FUNC_2(OM_uint32 *VAR_4,
    const gss_ctx_id_t VAR_5,
    const gss_OID VAR_6,
    gss_buffer_set_t *VAR_7)
{
 OM_uint32 VAR_8;
 struct _gss_context *VAR_9 = (struct _gss_context *) VAR_5;
 struct _gss_mech_switch *VAR_10;

 *VAR_4 = 0;
 *VAR_7 = VAR_0;
 if (!VAR_9)
  return (VAR_3);

 VAR_10 = VAR_9->gc_mech;
 if (VAR_10->gm_inquire_sec_context_by_oid) {
  VAR_8 = VAR_10->gm_inquire_sec_context_by_oid(
   VAR_4, VAR_9->gc_ctx, VAR_6, VAR_7);
  if (VAR_8 != VAR_2)
   FUNC_0(VAR_10, VAR_8, *VAR_4);
 } else {
  VAR_8 = VAR_1;
 }

 return (VAR_8);
}
