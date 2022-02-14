
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct gss_ctx {TYPE_2__* mech_type; scalar_t__ internal_ctx_id; } ;
struct TYPE_4__ {TYPE_1__* gm_ops; } ;
struct TYPE_3__ {int (* gss_delete_sec_context ) (scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct gss_ctx*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct gss_ctx*) ;
 int FUNC_3 (scalar_t__) ;

u32
FUNC_4(struct gss_ctx **VAR_2)
{
 FUNC_0("RPC:       gss_delete_sec_context deleting %p\n",
   *VAR_2);

 if (!*VAR_2)
  return(VAR_1);
 if ((*VAR_2)->internal_ctx_id)
  (*VAR_2)->mech_type->gm_ops
   ->gss_delete_sec_context((*VAR_2)
       ->internal_ctx_id);
 FUNC_1((*VAR_2)->mech_type);
 FUNC_2(*VAR_2);
 *VAR_2=((void*)0);
 return VAR_0;
}
