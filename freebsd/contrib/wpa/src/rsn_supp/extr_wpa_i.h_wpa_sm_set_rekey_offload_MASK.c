
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int kck_len; int kck; int kek_len; int kek; } ;
struct wpa_sm {int rx_replay_counter; TYPE_2__ ptk; TYPE_1__* ctx; } ;
struct TYPE_3__ {int ctx; int (* set_rekey_offload ) (int ,int ,int ,int ,int ,int ) ;} ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct wpa_sm *VAR_0)
{
 if (!VAR_0->ctx->set_rekey_offload)
  return;
 VAR_0->ctx->set_rekey_offload(VAR_0->ctx->ctx, VAR_0->ptk.kek, VAR_0->ptk.kek_len,
       VAR_0->ptk.kck, VAR_0->ptk.kck_len,
       VAR_0->rx_replay_counter);
}
