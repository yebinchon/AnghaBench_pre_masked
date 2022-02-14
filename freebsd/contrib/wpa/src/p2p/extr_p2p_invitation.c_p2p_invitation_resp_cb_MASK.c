
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p2p_data {int inv_op_freq; int inv_status; int inv_go_dev_addr; int inv_ssid_len; int inv_ssid; int inv_group_bssid_ptr; int inv_sa; TYPE_1__* cfg; } ;
struct TYPE_2__ {int cb_ctx; int (* invitation_received ) (int ,int ,int ,int ,int ,int ,int ,int ) ;int (* send_action_done ) (int ) ;} ;


 int FUNC_0 (struct p2p_data*,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ) ;

void FUNC_3(struct p2p_data *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0, "Invitation Response TX callback: success=%d", VAR_1);
 VAR_0->cfg->send_action_done(VAR_0->cfg->cb_ctx);

 if (!VAR_1)
  FUNC_0(VAR_0, "Assume Invitation Response was actually received by the peer even though Ack was not reported");

 if (VAR_0->cfg->invitation_received) {
  VAR_0->cfg->invitation_received(VAR_0->cfg->cb_ctx,
           VAR_0->inv_sa,
           VAR_0->inv_group_bssid_ptr,
           VAR_0->inv_ssid, VAR_0->inv_ssid_len,
           VAR_0->inv_go_dev_addr,
           VAR_0->inv_status,
           VAR_0->inv_op_freq);
 }
}
