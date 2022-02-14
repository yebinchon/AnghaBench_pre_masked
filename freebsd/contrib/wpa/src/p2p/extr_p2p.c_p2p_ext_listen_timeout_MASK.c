
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p2p_data {scalar_t__ pending_action_state; scalar_t__ pd_retries; scalar_t__ state; int ext_listen_only; int ext_listen_period; TYPE_1__* cfg; int ext_listen_interval_usec; int ext_listen_interval_sec; scalar_t__ ext_listen_interval; } ;
struct TYPE_2__ {int cb_ctx; scalar_t__ (* is_p2p_in_progress ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,void (*) (void*,void*),struct p2p_data*,int *) ;
 int FUNC_1 (struct p2p_data*,char*,...) ;
 scalar_t__ FUNC_2 (struct p2p_data*,int ) ;
 int FUNC_3 (struct p2p_data*,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_3, void *VAR_4)
{
 struct p2p_data *VAR_5 = VAR_3;

 if (VAR_5->ext_listen_interval) {

  FUNC_0(VAR_5->ext_listen_interval_sec,
           VAR_5->ext_listen_interval_usec,
           FUNC_6, VAR_5, ((void*)0));
 }

 if ((VAR_5->cfg->is_p2p_in_progress &&
      VAR_5->cfg->is_p2p_in_progress(VAR_5->cfg->cb_ctx)) ||
     (VAR_5->pending_action_state == VAR_2 &&
      VAR_5->pd_retries > 0)) {
  FUNC_1(VAR_5, "Operation in progress - skip Extended Listen timeout (%s)",
   FUNC_4(VAR_5->state));
  return;
 }

 if (VAR_5->state == VAR_1 && VAR_5->ext_listen_only) {






  FUNC_1(VAR_5, "Previous Extended Listen operation had not been completed - try again");
  VAR_5->ext_listen_only = 0;
  FUNC_3(VAR_5, VAR_0);
 }

 if (VAR_5->state != VAR_0) {
  FUNC_1(VAR_5, "Skip Extended Listen timeout in active state (%s)", FUNC_4(VAR_5->state));
  return;
 }

 FUNC_1(VAR_5, "Extended Listen timeout");
 VAR_5->ext_listen_only = 1;
 if (FUNC_2(VAR_5, VAR_5->ext_listen_period) < 0) {
  FUNC_1(VAR_5, "Failed to start Listen state for Extended Listen Timing");
  VAR_5->ext_listen_only = 0;
 }
}
