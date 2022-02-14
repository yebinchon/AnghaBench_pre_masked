
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _gss_mech_switch {scalar_t__ (* gm_wrap ) (scalar_t__*,int ,int,int ,int const,int*,int ) ;} ;
struct _gss_context {int gc_ctx; struct _gss_mech_switch* gc_mech; } ;
typedef int gss_qop_t ;
typedef scalar_t__ gss_ctx_id_t ;
typedef int gss_buffer_t ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,int,int ,int const,int*,int ) ;

OM_uint32
FUNC_2(OM_uint32 *VAR_1,
    const gss_ctx_id_t VAR_2,
    int VAR_3,
    gss_qop_t VAR_4,
    const gss_buffer_t VAR_5,
    int *VAR_6,
    gss_buffer_t VAR_7)
{
 struct _gss_context *VAR_8 = (struct _gss_context *) VAR_2;
 struct _gss_mech_switch *VAR_9;

 if (VAR_6)
  *VAR_6 = 0;
 FUNC_0(VAR_7);
 if (VAR_8 == ((void*)0)) {
  *VAR_1 = 0;
  return (VAR_0);
 }
 VAR_9 = VAR_8->gc_mech;

 return (VAR_9->gm_wrap(VAR_1, VAR_8->gc_ctx,
      VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7));
}
