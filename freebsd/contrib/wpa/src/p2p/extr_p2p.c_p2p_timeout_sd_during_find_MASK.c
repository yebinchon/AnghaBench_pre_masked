
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p2p_data {int * sd_peer; TYPE_1__* cfg; } ;
struct TYPE_2__ {int cb_ctx; int (* send_action_done ) (int ) ;} ;


 int FUNC_0 (struct p2p_data*) ;
 int FUNC_1 (struct p2p_data*,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct p2p_data *VAR_0)
{
 FUNC_1(VAR_0, "Service Discovery Query timeout");
 if (VAR_0->sd_peer) {
  VAR_0->cfg->send_action_done(VAR_0->cfg->cb_ctx);
  VAR_0->sd_peer = ((void*)0);
 }
 FUNC_0(VAR_0);
}
