
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_sm {TYPE_1__* ctx; } ;
struct TYPE_2__ {void* (* get_network_ctx ) (int ) ;int ctx; } ;


 int FUNC_0 (void* (*) (int )) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static inline void * FUNC_2(struct wpa_sm *VAR_0)
{
 FUNC_0(VAR_0->ctx->get_network_ctx);
 return VAR_0->ctx->get_network_ctx(VAR_0->ctx->ctx);
}
