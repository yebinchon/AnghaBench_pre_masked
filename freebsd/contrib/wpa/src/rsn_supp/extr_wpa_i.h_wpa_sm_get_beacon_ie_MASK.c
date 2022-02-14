
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_sm {TYPE_1__* ctx; } ;
struct TYPE_2__ {int (* get_beacon_ie ) (int ) ;int ctx; } ;


 int FUNC_0 (int (*) (int )) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct wpa_sm *VAR_0)
{
 FUNC_0(VAR_0->ctx->get_beacon_ie);
 return VAR_0->ctx->get_beacon_ie(VAR_0->ctx->ctx);
}
