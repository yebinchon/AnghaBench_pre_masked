
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct p2p_data {TYPE_2__* go_neg_peer; TYPE_1__* cfg; scalar_t__ pending_listen_freq; } ;
struct TYPE_4__ {int status; } ;
struct TYPE_3__ {int cb_ctx; int (* stop_listen ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct p2p_data*,TYPE_2__*) ;
 int FUNC_1 (struct p2p_data*,char*) ;
 int FUNC_2 (struct p2p_data*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_1, void *VAR_2)
{
 struct p2p_data *VAR_3 = VAR_1;
 if (VAR_3->go_neg_peer == ((void*)0))
  return;
 if (VAR_3->pending_listen_freq) {
  FUNC_1(VAR_3, "Clear pending_listen_freq for p2p_go_neg_start");
  VAR_3->pending_listen_freq = 0;
 }
 VAR_3->cfg->stop_listen(VAR_3->cfg->cb_ctx);
 VAR_3->go_neg_peer->status = VAR_0;




 FUNC_2(VAR_3, 0, 500000);
 FUNC_0(VAR_3, VAR_3->go_neg_peer);
}
