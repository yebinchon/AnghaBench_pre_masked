
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_sm {TYPE_1__* ctx; } ;
struct TYPE_2__ {int (* get_bssid ) (int ,int *) ;int ctx; } ;


 int FUNC_0 (int (*) (int ,int *)) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline int FUNC_2(struct wpa_sm *VAR_0, u8 *VAR_1)
{
 FUNC_0(VAR_0->ctx->get_bssid);
 return VAR_0->ctx->get_bssid(VAR_0->ctx->ctx, VAR_1);
}
