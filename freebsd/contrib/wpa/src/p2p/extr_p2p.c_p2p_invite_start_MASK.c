
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p2p_data {int invite_dev_pw_id; int invite_go_dev_addr; int * invite_peer; TYPE_1__* cfg; scalar_t__ pending_listen_freq; } ;
struct TYPE_2__ {int cb_ctx; int (* stop_listen ) (int ) ;} ;


 int FUNC_0 (struct p2p_data*,char*) ;
 int FUNC_1 (struct p2p_data*,int *,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, void *VAR_1)
{
 struct p2p_data *VAR_2 = VAR_0;
 if (VAR_2->invite_peer == ((void*)0))
  return;
 if (VAR_2->pending_listen_freq) {
  FUNC_0(VAR_2, "Clear pending_listen_freq for p2p_invite_start");
  VAR_2->pending_listen_freq = 0;
 }
 VAR_2->cfg->stop_listen(VAR_2->cfg->cb_ctx);
 FUNC_1(VAR_2, VAR_2->invite_peer, VAR_2->invite_go_dev_addr,
   VAR_2->invite_dev_pw_id);
}
