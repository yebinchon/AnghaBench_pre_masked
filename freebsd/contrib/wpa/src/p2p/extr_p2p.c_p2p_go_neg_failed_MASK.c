
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct p2p_go_neg_results {int status; int peer_interface_addr; int peer_device_addr; } ;
struct TYPE_3__ {int p2p_device_addr; } ;
struct p2p_device {int intended_addr; TYPE_1__ info; int * go_neg_conf; scalar_t__ oob_pw_id; int wps_method; int flags; } ;
struct p2p_data {scalar_t__ state; TYPE_2__* cfg; struct p2p_device* go_neg_peer; } ;
typedef int res ;
struct TYPE_4__ {int cb_ctx; int (* go_neg_completed ) (int ,struct p2p_go_neg_results*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct p2p_data*,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct p2p_go_neg_results*,int ,int) ;
 int FUNC_3 (struct p2p_data*) ;
 int VAR_5 ;
 int FUNC_4 (struct p2p_data*,int ) ;
 int FUNC_5 (int ,struct p2p_go_neg_results*) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct p2p_data *VAR_6, int VAR_7)
{
 struct p2p_go_neg_results VAR_8;
 struct p2p_device *VAR_9 = VAR_6->go_neg_peer;

 if (!VAR_9)
  return;

 FUNC_0(VAR_5, VAR_6, ((void*)0));
 if (VAR_6->state != VAR_3) {




  FUNC_3(VAR_6);
  FUNC_4(VAR_6, VAR_2);
 }

 VAR_9->flags &= ~VAR_1;
 VAR_9->wps_method = VAR_4;
 VAR_9->oob_pw_id = 0;
 FUNC_6(VAR_9->go_neg_conf);
 VAR_9->go_neg_conf = ((void*)0);
 VAR_6->go_neg_peer = ((void*)0);

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.status = VAR_7;
 FUNC_1(VAR_8.peer_device_addr, VAR_9->info.p2p_device_addr, VAR_0);
 FUNC_1(VAR_8.peer_interface_addr, VAR_9->intended_addr, VAR_0);
 VAR_6->cfg->go_neg_completed(VAR_6->cfg->cb_ctx, &VAR_8);
}
