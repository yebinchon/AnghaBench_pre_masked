
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _gss_mech_switch {scalar_t__ (* gm_wrap_size_limit ) (scalar_t__*,int ,int,int ,scalar_t__,scalar_t__*) ;} ;
struct _gss_context {int gc_ctx; struct _gss_mech_switch* gc_mech; } ;
typedef int gss_qop_t ;
typedef scalar_t__ gss_ctx_id_t ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int,int ,scalar_t__,scalar_t__*) ;

OM_uint32
FUNC_1(OM_uint32 *VAR_1,
    const gss_ctx_id_t VAR_2,
    int VAR_3,
    gss_qop_t VAR_4,
    OM_uint32 VAR_5,
    OM_uint32 *VAR_6)
{
 struct _gss_context *VAR_7 = (struct _gss_context *) VAR_2;
 struct _gss_mech_switch *VAR_8;

 *VAR_6 = 0;
 if (VAR_7 == ((void*)0)) {
  *VAR_1 = 0;
  return (VAR_0);
 }
 VAR_8 = VAR_7->gc_mech;

 return (VAR_8->gm_wrap_size_limit(VAR_1, VAR_7->gc_ctx,
      VAR_3, VAR_4, VAR_5, VAR_6));
}
