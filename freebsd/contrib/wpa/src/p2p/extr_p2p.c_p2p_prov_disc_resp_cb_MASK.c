
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p2p_data {TYPE_1__* cfg; int pending_action_state; scalar_t__ send_action_in_progress; } ;
struct TYPE_2__ {int (* prov_disc_resp_cb ) (int ) ;int cb_ctx; int (* send_action_done ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct p2p_data*,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct p2p_data *VAR_1, int VAR_2)
{
 FUNC_0(VAR_1, "Provision Discovery Response TX callback: success=%d",
  VAR_2);

 if (VAR_1->send_action_in_progress) {
  VAR_1->send_action_in_progress = 0;
  VAR_1->cfg->send_action_done(VAR_1->cfg->cb_ctx);
 }

 VAR_1->pending_action_state = VAR_0;

 if (!VAR_2)
  return;

 if (!VAR_1->cfg->prov_disc_resp_cb ||
     VAR_1->cfg->prov_disc_resp_cb(VAR_1->cfg->cb_ctx) < 1)
  return;

 FUNC_0(VAR_1,
  "Post-Provision Discovery operations started - do not try to continue other P2P operations");
}
