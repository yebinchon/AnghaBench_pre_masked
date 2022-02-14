
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _gss_mech_switch {int (* gm_unwrap ) (int *,int ,int const,int ,int*,int *) ;} ;
struct _gss_context {int gc_ctx; struct _gss_mech_switch* gc_mech; } ;
typedef int gss_qop_t ;
typedef scalar_t__ gss_ctx_id_t ;
typedef int gss_buffer_t ;
typedef int OM_uint32 ;


 int FUNC_0 (int *,int ,int const,int ,int*,int *) ;

OM_uint32
FUNC_1(OM_uint32 *VAR_0,
    const gss_ctx_id_t VAR_1,
    const gss_buffer_t VAR_2,
    gss_buffer_t VAR_3,
    int *VAR_4,
    gss_qop_t *VAR_5)
{
 struct _gss_context *VAR_6 = (struct _gss_context *) VAR_1;
 struct _gss_mech_switch *VAR_7 = VAR_6->gc_mech;

 return (VAR_7->gm_unwrap(VAR_0, VAR_6->gc_ctx,
      VAR_2, VAR_3,
      VAR_4, VAR_5));
}
