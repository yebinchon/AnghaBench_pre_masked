
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct p2p_data {scalar_t__ state; void* pending_action_state; scalar_t__ user_initiated_pd; TYPE_2__* p2ps_prov; TYPE_1__* cfg; scalar_t__ send_action_in_progress; } ;
struct TYPE_4__ {scalar_t__ status; int session_id; int adv_id; int session_mac; int adv_mac; int pd_seeker; } ;
struct TYPE_3__ {int cb_ctx; int (* p2ps_prov_complete ) (int ,scalar_t__,int ,int ,int ,int *,int ,int ,int ,int ,int *,int ,int ,int ,int *,int *,int ,int ,int *,int ) ;int (* send_action_done ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct p2p_data*) ;
 int FUNC_1 (struct p2p_data*,char*,...) ;
 int FUNC_2 (struct p2p_data*) ;
 int FUNC_3 (struct p2p_data*,int ) ;
 int FUNC_4 (struct p2p_data*,int ,int) ;
 int FUNC_5 (struct p2p_data*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__,int ,int ,int ,int *,int ,int ,int ,int ,int *,int ,int ,int ,int *,int *,int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_8(struct p2p_data *VAR_7, int VAR_8)
{
 FUNC_1(VAR_7, "Provision Discovery Request TX callback: success=%d",
  VAR_8);
 if (!VAR_8) {
  VAR_7->pending_action_state = VAR_2;

  if (VAR_7->user_initiated_pd &&
      (VAR_7->state == VAR_6 || VAR_7->state == VAR_1))
  {

   VAR_7->pending_action_state = VAR_4;
   FUNC_4(VAR_7, 0, 50000);
  } else if (VAR_7->state != VAR_0)
   FUNC_0(VAR_7);
  else if (VAR_7->user_initiated_pd) {
   VAR_7->pending_action_state = VAR_4;
   FUNC_4(VAR_7, 0, 300000);
  }
  return;
 }







 if (VAR_7->p2ps_prov && !VAR_7->p2ps_prov->pd_seeker &&
     VAR_7->p2ps_prov->status != VAR_5) {
  FUNC_1(VAR_7, "P2PS PD completion on Follow-on PD Request ACK");

  if (VAR_7->send_action_in_progress) {
   VAR_7->send_action_in_progress = 0;
   VAR_7->cfg->send_action_done(VAR_7->cfg->cb_ctx);
  }

  VAR_7->pending_action_state = VAR_2;

  if (VAR_7->cfg->p2ps_prov_complete) {
   VAR_7->cfg->p2ps_prov_complete(
    VAR_7->cfg->cb_ctx,
    VAR_7->p2ps_prov->status,
    VAR_7->p2ps_prov->adv_mac,
    VAR_7->p2ps_prov->adv_mac,
    VAR_7->p2ps_prov->session_mac,
    ((void*)0), VAR_7->p2ps_prov->adv_id,
    VAR_7->p2ps_prov->session_id,
    0, 0, ((void*)0), 0, 0, 0,
    ((void*)0), ((void*)0), 0, 0, ((void*)0), 0);
  }

  if (VAR_7->user_initiated_pd)
   FUNC_2(VAR_7);

  FUNC_5(VAR_7);
  return;
 }





 if (VAR_7->user_initiated_pd)
  VAR_7->pending_action_state = VAR_4;
 else
  VAR_7->pending_action_state = VAR_2;


 if (VAR_7->state == VAR_6)
  FUNC_3(VAR_7, VAR_3);
 FUNC_4(VAR_7, 0, 200000);
}
