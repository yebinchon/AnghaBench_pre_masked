
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct p2p_data {scalar_t__ state; scalar_t__ send_action_in_progress; int * invite_peer; int * sd_peer; TYPE_2__* go_neg_peer; int start_after_scan; scalar_t__ p2ps_seek_count; TYPE_1__* cfg; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int cb_ctx; int (* find_stopped ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,struct p2p_data*,int *) ;
 int FUNC_1 (struct p2p_data*) ;
 int FUNC_2 (struct p2p_data*,char*) ;
 int VAR_5 ;
 int FUNC_3 (struct p2p_data*) ;
 int FUNC_4 (struct p2p_data*,int ) ;
 int FUNC_5 (struct p2p_data*,int) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct p2p_data *VAR_6, int VAR_7)
{
 FUNC_2(VAR_6, "Stopping find");
 FUNC_0(VAR_5, VAR_6, ((void*)0));
 FUNC_1(VAR_6);
 if (VAR_6->state == VAR_4 || VAR_6->state == VAR_3)
  VAR_6->cfg->find_stopped(VAR_6->cfg->cb_ctx);

 VAR_6->p2ps_seek_count = 0;

 FUNC_4(VAR_6, VAR_2);
 FUNC_3(VAR_6);
 VAR_6->start_after_scan = VAR_0;
 if (VAR_6->go_neg_peer)
  VAR_6->go_neg_peer->flags &= ~VAR_1;
 VAR_6->go_neg_peer = ((void*)0);
 VAR_6->sd_peer = ((void*)0);
 VAR_6->invite_peer = ((void*)0);
 FUNC_5(VAR_6, VAR_7);
 VAR_6->send_action_in_progress = 0;
}
