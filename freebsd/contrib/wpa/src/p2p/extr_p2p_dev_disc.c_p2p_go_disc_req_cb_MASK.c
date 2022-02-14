
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p2p_data {scalar_t__ pending_dev_disc_dialog_token; int pending_dev_disc_freq; int pending_dev_disc_addr; TYPE_1__* cfg; } ;
struct TYPE_2__ {int cb_ctx; int (* send_action_done ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct p2p_data*,char*,...) ;
 int FUNC_1 (struct p2p_data*,scalar_t__,int ,int ,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct p2p_data *VAR_2, int VAR_3)
{
 FUNC_0(VAR_2, "GO Discoverability Request TX callback: success=%d",
  VAR_3);
 VAR_2->cfg->send_action_done(VAR_2->cfg->cb_ctx);

 if (VAR_2->pending_dev_disc_dialog_token == 0) {
  FUNC_0(VAR_2, "No pending Device Discoverability Request");
  return;
 }

 FUNC_1(VAR_2, VAR_2->pending_dev_disc_dialog_token,
          VAR_2->pending_dev_disc_addr,
          VAR_2->pending_dev_disc_freq,
          VAR_3 ? VAR_1 :
          VAR_0);

 VAR_2->pending_dev_disc_dialog_token = 0;
}
