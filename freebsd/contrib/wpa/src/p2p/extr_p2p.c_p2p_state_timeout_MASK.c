
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p2p_data {int state; int search_delay; int in_search_delay; int ext_listen_only; int pending_action_state; TYPE_1__* cfg; scalar_t__ drv_in_listen; scalar_t__ in_listen; } ;
struct TYPE_2__ {int cb_ctx; int (* stop_listen ) (int ) ;} ;
 int VAR_0 ;





 int FUNC_0 (struct p2p_data*,char*,...) ;
 int FUNC_1 (struct p2p_data*) ;
 int FUNC_2 (struct p2p_data*,int const) ;
 int FUNC_3 (struct p2p_data*,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct p2p_data*) ;
 int FUNC_6 (struct p2p_data*) ;
 int FUNC_7 (struct p2p_data*) ;
 int FUNC_8 (struct p2p_data*) ;
 int FUNC_9 (struct p2p_data*) ;
 int FUNC_10 (struct p2p_data*) ;
 int FUNC_11 (struct p2p_data*) ;
 int FUNC_12 (struct p2p_data*) ;
 int FUNC_13 (struct p2p_data*) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(void *VAR_1, void *VAR_2)
{
 struct p2p_data *VAR_3 = VAR_1;

 FUNC_0(VAR_3, "Timeout (state=%s)", FUNC_4(VAR_3->state));

 VAR_3->in_listen = 0;
 if (VAR_3->drv_in_listen) {
  FUNC_0(VAR_3, "Driver is still in listen state - stop it");
  VAR_3->cfg->stop_listen(VAR_3->cfg->cb_ctx);
 }

 switch (VAR_3->state) {
 case 137:

  if (VAR_3->pending_action_state == VAR_0)
   FUNC_10(VAR_3);
  break;
 case 130:

  if (VAR_3->pending_action_state == VAR_0)
   FUNC_10(VAR_3);
  if (VAR_3->search_delay && !VAR_3->in_search_delay) {
   FUNC_0(VAR_3, "Delay search operation by %u ms",
    VAR_3->search_delay);
   VAR_3->in_search_delay = 1;
   FUNC_3(VAR_3, VAR_3->search_delay / 1000,
     (VAR_3->search_delay % 1000) * 1000);
   break;
  }
  VAR_3->in_search_delay = 0;
  FUNC_1(VAR_3);
  break;
 case 140:
  FUNC_5(VAR_3);
  break;
 case 139:
  FUNC_6(VAR_3);
  break;
 case 138:
  break;
 case 134:

  if (VAR_3->pending_action_state == VAR_0)
   FUNC_10(VAR_3);

  if (VAR_3->ext_listen_only) {
   FUNC_0(VAR_3, "Extended Listen Timing - Listen State completed");
   VAR_3->ext_listen_only = 0;
   FUNC_2(VAR_3, 137);
  }
  break;
 case 129:
  FUNC_12(VAR_3);
  break;
 case 128:
  FUNC_13(VAR_3);
  break;
 case 131:
  FUNC_11(VAR_3);
  break;
 case 132:
  break;
 case 133:
  FUNC_9(VAR_3);
  break;
 case 136:
  FUNC_7(VAR_3);
  break;
 case 135:
  FUNC_8(VAR_3);
  break;
 }
}
