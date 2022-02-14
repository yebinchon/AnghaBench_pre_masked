
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p2p_data {int state; scalar_t__ pending_channel; scalar_t__ pending_reg_class; TYPE_1__* cfg; } ;
struct TYPE_2__ {scalar_t__ channel; scalar_t__ reg_class; } ;


 int VAR_0 ;
 int FUNC_0 (struct p2p_data*,char*,...) ;
 int FUNC_1 (int) ;

void FUNC_2(struct p2p_data *VAR_1, int VAR_2)
{
 FUNC_0(VAR_1, "State %s -> %s",
  FUNC_1(VAR_1->state), FUNC_1(VAR_2));
 VAR_1->state = VAR_2;

 if (VAR_2 == VAR_0 && VAR_1->pending_channel) {
  FUNC_0(VAR_1, "Apply change in listen channel");
  VAR_1->cfg->reg_class = VAR_1->pending_reg_class;
  VAR_1->cfg->channel = VAR_1->pending_channel;
  VAR_1->pending_reg_class = 0;
  VAR_1->pending_channel = 0;
 }
}
