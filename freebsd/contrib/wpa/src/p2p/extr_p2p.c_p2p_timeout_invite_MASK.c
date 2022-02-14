
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p2p_data {scalar_t__ inv_role; TYPE_1__* cfg; } ;
struct TYPE_2__ {int cb_ctx; int (* send_action_done ) (int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct p2p_data*,char*) ;
 int FUNC_1 (struct p2p_data*,int ) ;
 int FUNC_2 (struct p2p_data*,int ) ;
 int FUNC_3 (struct p2p_data*,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct p2p_data *VAR_2)
{
 VAR_2->cfg->send_action_done(VAR_2->cfg->cb_ctx);
 FUNC_2(VAR_2, VAR_0);
 if (VAR_2->inv_role == VAR_1) {




  FUNC_0(VAR_2, "Inviting in active GO role - wait on operating channel");
  FUNC_3(VAR_2, 0, 100000);
  return;
 }
 FUNC_1(VAR_2, 0);
}
