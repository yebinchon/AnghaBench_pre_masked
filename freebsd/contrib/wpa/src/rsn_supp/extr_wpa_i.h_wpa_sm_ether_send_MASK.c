
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wpa_sm {TYPE_1__* ctx; } ;
struct TYPE_2__ {int (* ether_send ) (int ,int const*,int ,int const*,size_t) ;int ctx; } ;


 int FUNC_0 (int (*) (int ,int const*,int ,int const*,size_t)) ;
 int FUNC_1 (int ,int const*,int ,int const*,size_t) ;

__attribute__((used)) static inline int FUNC_2(struct wpa_sm *VAR_0, const u8 *VAR_1,
        u16 VAR_2, const u8 *VAR_3, size_t VAR_4)
{
 FUNC_0(VAR_0->ctx->ether_send);
 return VAR_0->ctx->ether_send(VAR_0->ctx->ctx, VAR_1, VAR_2, VAR_3, VAR_4);
}
