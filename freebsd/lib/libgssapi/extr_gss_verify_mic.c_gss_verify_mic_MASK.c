
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _gss_mech_switch {scalar_t__ (* gm_verify_mic ) (scalar_t__*,int ,int const,int const,scalar_t__*) ;} ;
struct _gss_context {int gc_ctx; struct _gss_mech_switch* gc_mech; } ;
typedef scalar_t__ gss_qop_t ;
typedef scalar_t__ gss_ctx_id_t ;
typedef int gss_buffer_t ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int const,int const,scalar_t__*) ;

OM_uint32
FUNC_1(OM_uint32 *VAR_1,
    const gss_ctx_id_t VAR_2,
    const gss_buffer_t VAR_3,
    const gss_buffer_t VAR_4,
    gss_qop_t *VAR_5)
{
 struct _gss_context *VAR_6 = (struct _gss_context *) VAR_2;
 struct _gss_mech_switch *VAR_7;

 if (VAR_5)
  *VAR_5 = 0;
 if (VAR_6 == ((void*)0)) {
  *VAR_1 = 0;
  return (VAR_0);
 }
 VAR_7 = VAR_6->gc_mech;

 return (VAR_7->gm_verify_mic(VAR_1, VAR_6->gc_ctx,
      VAR_3, VAR_4, VAR_5));
}
