
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct gss_cl_ctx* data; } ;
struct gss_cl_ctx {TYPE_1__ gc_wire_ctx; int gc_gss_ctx; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct gss_cl_ctx*) ;

__attribute__((used)) static void
FUNC_3(struct gss_cl_ctx *VAR_0)
{
 FUNC_0("RPC:       gss_free_ctx\n");

 FUNC_1(&VAR_0->gc_gss_ctx);
 FUNC_2(VAR_0->gc_wire_ctx.data);
 FUNC_2(VAR_0);
}
