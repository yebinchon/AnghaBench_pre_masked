
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct p2p_data {TYPE_3__* invite_peer; TYPE_1__* cfg; int invite_dev_pw_id; int invite_go_dev_addr; } ;
struct TYPE_5__ {int p2p_device_addr; } ;
struct TYPE_6__ {int invitation_reqs; TYPE_2__ info; } ;
struct TYPE_4__ {int cb_ctx; int (* invitation_result ) (int ,int,int *,int *,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct p2p_data*,char*) ;
 int FUNC_1 (struct p2p_data*,TYPE_3__*,int ,int ) ;
 int FUNC_2 (struct p2p_data*,int ) ;
 int FUNC_3 (int ,int,int *,int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct p2p_data *VAR_2)
{
 if (VAR_2->invite_peer && VAR_2->invite_peer->invitation_reqs < 100) {
  FUNC_2(VAR_2, VAR_1);
  FUNC_1(VAR_2, VAR_2->invite_peer,
    VAR_2->invite_go_dev_addr, VAR_2->invite_dev_pw_id);
 } else {
  if (VAR_2->invite_peer) {
   FUNC_0(VAR_2, "Invitation Request retry limit reached");
   if (VAR_2->cfg->invitation_result)
    VAR_2->cfg->invitation_result(
     VAR_2->cfg->cb_ctx, -1, ((void*)0), ((void*)0),
     VAR_2->invite_peer->info.p2p_device_addr,
     0, 0);
  }
  FUNC_2(VAR_2, VAR_0);
 }
}
