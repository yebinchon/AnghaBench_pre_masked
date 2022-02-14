
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmbus_xact {void* x_priv; TYPE_1__* x_ctx; } ;
struct TYPE_2__ {size_t xc_priv_size; } ;


 int FUNC_0 (char*,size_t) ;

void *
FUNC_1(const struct vmbus_xact *VAR_0, size_t VAR_1)
{

 if (VAR_1 > VAR_0->x_ctx->xc_priv_size)
  FUNC_0("invalid priv size %zu", VAR_1);
 return (VAR_0->x_priv);
}
