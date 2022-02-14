
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct p2p_data {TYPE_2__* go_neg_peer; TYPE_1__* cfg; } ;
struct TYPE_4__ {int flags; int connect_reqs; scalar_t__ oob_go_neg_freq; } ;
struct TYPE_3__ {int cb_ctx; int (* send_action_done ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct p2p_data*,TYPE_2__*) ;
 int FUNC_1 (struct p2p_data*,char*) ;
 int FUNC_2 (struct p2p_data*,int) ;
 int FUNC_3 (struct p2p_data*,int ) ;
 int FUNC_4 (struct p2p_data*,int ) ;
 int FUNC_5 (struct p2p_data*,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct p2p_data *VAR_3)
{
 VAR_3->cfg->send_action_done(VAR_3->cfg->cb_ctx);
 if (VAR_3->go_neg_peer &&
     (VAR_3->go_neg_peer->flags & VAR_2)) {
  FUNC_1(VAR_3, "Wait for GO Negotiation Confirm timed out - assume GO Negotiation failed");
  FUNC_2(VAR_3, -1);
  return;
 }
 if (VAR_3->go_neg_peer &&
     (VAR_3->go_neg_peer->flags & VAR_1) &&
     VAR_3->go_neg_peer->connect_reqs < 120) {
  FUNC_1(VAR_3, "Peer expected to wait our response - skip listen");
  FUNC_0(VAR_3, VAR_3->go_neg_peer);
  return;
 }
 if (VAR_3->go_neg_peer && VAR_3->go_neg_peer->oob_go_neg_freq > 0) {
  FUNC_1(VAR_3, "Skip connect-listen since GO Neg channel known (OOB)");
  FUNC_4(VAR_3, VAR_0);
  FUNC_5(VAR_3, 0, 30000);
  return;
 }
 FUNC_4(VAR_3, VAR_0);
 FUNC_3(VAR_3, 0);
}
