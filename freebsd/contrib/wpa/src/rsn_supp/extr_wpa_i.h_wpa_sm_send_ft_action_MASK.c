
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_sm {TYPE_1__* ctx; } ;
struct TYPE_2__ {int (* send_ft_action ) (int ,int ,int const*,int const*,size_t) ;int ctx; } ;


 int FUNC_0 (int ,int ,int const*,int const*,size_t) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_sm *VAR_0, u8 VAR_1,
     const u8 *VAR_2,
     const u8 *VAR_3, size_t VAR_4)
{
 if (VAR_0->ctx->send_ft_action)
  return VAR_0->ctx->send_ft_action(VAR_0->ctx->ctx, VAR_1, VAR_2,
            VAR_3, VAR_4);
 return -1;
}
