
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_sm {TYPE_1__* ctx; } ;
struct wpa_channel_info {int dummy; } ;
struct TYPE_2__ {int (* channel_info ) (int ,struct wpa_channel_info*) ;int ctx; } ;


 int FUNC_0 (int ,struct wpa_channel_info*) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_sm *VAR_0,
          struct wpa_channel_info *VAR_1)
{
 if (!VAR_0->ctx->channel_info)
  return -1;
 return VAR_0->ctx->channel_info(VAR_0->ctx->ctx, VAR_1);
}
