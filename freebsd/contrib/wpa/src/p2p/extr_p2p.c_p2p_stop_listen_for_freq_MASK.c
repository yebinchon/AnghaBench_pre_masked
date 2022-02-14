
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p2p_data {int drv_in_listen; TYPE_1__* cfg; scalar_t__ in_listen; } ;
struct TYPE_2__ {int cb_ctx; int (* stop_listen ) (int ) ;} ;


 int FUNC_0 (struct p2p_data*) ;
 int FUNC_1 (struct p2p_data*,char*,...) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct p2p_data *VAR_0, int VAR_1)
{
 if (VAR_1 > 0 && VAR_0->drv_in_listen == VAR_1 && VAR_0->in_listen) {
  FUNC_1(VAR_0, "Skip stop_listen since we are on correct channel for response");
  return;
 }
 if (VAR_0->in_listen) {
  VAR_0->in_listen = 0;
  FUNC_0(VAR_0);
 }
 if (VAR_0->drv_in_listen) {





  FUNC_1(VAR_0, "Clear drv_in_listen (%d)", VAR_0->drv_in_listen);
  VAR_0->drv_in_listen = 0;
 }
 VAR_0->cfg->stop_listen(VAR_0->cfg->cb_ctx);
}
