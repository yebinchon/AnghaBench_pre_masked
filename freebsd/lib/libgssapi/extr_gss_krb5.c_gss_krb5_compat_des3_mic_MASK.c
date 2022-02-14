
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _gss_mech_switch {scalar_t__ (* gm_krb5_compat_des3_mic ) (scalar_t__*,int ,int) ;} ;
struct _gss_context {int gc_ctx; struct _gss_mech_switch* gc_mech; } ;
typedef scalar_t__ gss_ctx_id_t ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int) ;

OM_uint32
FUNC_1(OM_uint32 *VAR_1,
    gss_ctx_id_t VAR_2, int VAR_3)
{
 struct _gss_context *VAR_4 = (struct _gss_context *) VAR_2;
 struct _gss_mech_switch *VAR_5 = VAR_4->gc_mech;

 *VAR_1 = 0;

 if (VAR_5->gm_krb5_compat_des3_mic)
  return (VAR_5->gm_krb5_compat_des3_mic(VAR_1,
   VAR_4->gc_ctx, VAR_3));

 return (VAR_0);
}
