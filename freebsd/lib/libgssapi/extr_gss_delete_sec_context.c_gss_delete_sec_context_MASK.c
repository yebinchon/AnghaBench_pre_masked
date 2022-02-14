
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _gss_context {scalar_t__ gc_ctx; TYPE_1__* gc_mech; } ;
typedef scalar_t__ gss_ctx_id_t ;
typedef scalar_t__ gss_buffer_t ;
struct TYPE_2__ {scalar_t__ (* gm_delete_sec_context ) (scalar_t__*,scalar_t__*,scalar_t__) ;} ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct _gss_context*) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__*,scalar_t__) ;

OM_uint32
FUNC_3(OM_uint32 *VAR_2,
    gss_ctx_id_t *VAR_3,
    gss_buffer_t VAR_4)
{
 OM_uint32 VAR_5;
 struct _gss_context *VAR_6 = (struct _gss_context *) *VAR_3;

 if (VAR_4)
  FUNC_0(VAR_4);

 *VAR_2 = 0;
 if (VAR_6) {




  if (VAR_6->gc_ctx) {
   VAR_5 = VAR_6->gc_mech->gm_delete_sec_context(
    VAR_2, &VAR_6->gc_ctx, VAR_4);
  }
  FUNC_1(VAR_6);
  *VAR_3 = VAR_0;
 }

 return (VAR_1);
}
