
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int p2p_device_addr; } ;
struct p2p_device {scalar_t__ go_neg_conf_sent; scalar_t__ go_neg_conf; TYPE_1__ info; int go_neg_conf_freq; } ;
struct p2p_data {TYPE_2__* cfg; int pending_action_state; struct p2p_device* go_neg_peer; } ;
typedef enum p2p_send_action_result { ____Placeholder_p2p_send_action_result } p2p_send_action_result ;
struct TYPE_4__ {int cb_ctx; int (* send_action_done ) (int ) ;int dev_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct p2p_data*,char*,...) ;
 int FUNC_1 (struct p2p_data*,struct p2p_device*) ;
 int FUNC_2 (struct p2p_data*,int) ;
 scalar_t__ FUNC_3 (struct p2p_data*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct p2p_data *VAR_4,
          enum p2p_send_action_result VAR_5)
{
 struct p2p_device *VAR_6;

 FUNC_0(VAR_4, "GO Negotiation Confirm TX callback: result=%d", VAR_5);
 if (VAR_5 == VAR_2) {
  VAR_4->cfg->send_action_done(VAR_4->cfg->cb_ctx);
  FUNC_2(VAR_4, -1);
  return;
 }

 VAR_6 = VAR_4->go_neg_peer;

 if (VAR_5 == VAR_3) {





  if (VAR_6 && VAR_6->go_neg_conf &&
      VAR_6->go_neg_conf_sent <= VAR_0) {
   FUNC_0(VAR_4, "GO Negotiation Confirm retry %d",
    VAR_6->go_neg_conf_sent);
   VAR_4->pending_action_state = VAR_1;
   if (FUNC_3(VAR_4, VAR_6->go_neg_conf_freq,
         VAR_6->info.p2p_device_addr,
         VAR_4->cfg->dev_addr,
         VAR_6->info.p2p_device_addr,
         FUNC_6(VAR_6->go_neg_conf),
         FUNC_7(VAR_6->go_neg_conf), 0) >=
       0) {
    VAR_6->go_neg_conf_sent++;
    return;
   }
   FUNC_0(VAR_4, "Failed to re-send Action frame");





  }
  FUNC_0(VAR_4, "Assume GO Negotiation Confirm TX was actually received by the peer even though Ack was not reported");
 }

 VAR_4->cfg->send_action_done(VAR_4->cfg->cb_ctx);

 if (VAR_6 == ((void*)0))
  return;

 FUNC_1(VAR_4, VAR_6);
}
