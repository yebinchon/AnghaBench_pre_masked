
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_sm {TYPE_1__* ctx; } ;
struct TYPE_2__ {int ctx; int (* fils_hlp_rx ) (int ,int const*,int const*,int const*,size_t) ;} ;


 int FUNC_0 (int ,int const*,int const*,int const*,size_t) ;

__attribute__((used)) static inline void FUNC_1(struct wpa_sm *VAR_0,
          const u8 *VAR_1, const u8 *VAR_2,
          const u8 *VAR_3, size_t VAR_4)
{
 if (VAR_0->ctx->fils_hlp_rx)
  VAR_0->ctx->fils_hlp_rx(VAR_0->ctx->ctx, VAR_1, VAR_2, VAR_3, VAR_4);
}
