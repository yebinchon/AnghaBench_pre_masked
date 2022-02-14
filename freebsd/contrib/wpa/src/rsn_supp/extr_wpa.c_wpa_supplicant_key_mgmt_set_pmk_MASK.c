
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_sm {scalar_t__ key_mgmt; TYPE_1__* ctx; int pmk_len; int pmk; int xxkey_len; int xxkey; } ;
struct TYPE_2__ {int msg_ctx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ FUNC_1 (struct wpa_sm*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct wpa_sm *VAR_2)
{







  if (FUNC_1(VAR_2, VAR_2->pmk, VAR_2->pmk_len))
   FUNC_0(VAR_2->ctx->msg_ctx, VAR_0,
    "RSN: Cannot set PMK for key management offload");



}
