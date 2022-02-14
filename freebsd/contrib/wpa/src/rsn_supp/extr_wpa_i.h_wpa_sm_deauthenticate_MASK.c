
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wpa_sm {TYPE_1__* ctx; } ;
struct TYPE_2__ {int ctx; int (* deauthenticate ) (int ,int ) ;} ;


 int FUNC_0 (int (*) (int ,int )) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct wpa_sm *VAR_0, u16 VAR_1)
{
 FUNC_0(VAR_0->ctx->deauthenticate);
 VAR_0->ctx->deauthenticate(VAR_0->ctx->ctx, VAR_1);
}
