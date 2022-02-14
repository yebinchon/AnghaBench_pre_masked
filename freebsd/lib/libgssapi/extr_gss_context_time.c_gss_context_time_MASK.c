
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _gss_mech_switch {int (* gm_context_time ) (int *,int ,int *) ;} ;
struct _gss_context {int gc_ctx; struct _gss_mech_switch* gc_mech; } ;
typedef scalar_t__ gss_ctx_id_t ;
typedef int OM_uint32 ;


 int FUNC_0 (int *,int ,int *) ;

OM_uint32
FUNC_1(OM_uint32 *VAR_0,
    const gss_ctx_id_t VAR_1,
    OM_uint32 *VAR_2)
{
 struct _gss_context *VAR_3 = (struct _gss_context *) VAR_1;
 struct _gss_mech_switch *VAR_4 = VAR_3->gc_mech;

 return (VAR_4->gm_context_time(VAR_0, VAR_3->gc_ctx, VAR_2));
}
