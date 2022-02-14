
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct p2p_data {scalar_t__ state; scalar_t__ pending_channel_forced; scalar_t__ pending_channel; scalar_t__ pending_reg_class; TYPE_1__* cfg; } ;
struct TYPE_2__ {scalar_t__ channel_forced; scalar_t__ channel; scalar_t__ reg_class; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct p2p_data*,char*,...) ;

int FUNC_2(struct p2p_data *VAR_1, u8 VAR_2, u8 VAR_3,
      u8 VAR_4)
{
 if (FUNC_0(VAR_2, VAR_3) < 0)
  return -1;





 if (VAR_1->cfg->channel_forced && VAR_4 == 0) {
  FUNC_1(VAR_1,
   "Listen channel was previously configured - do not override based on optimization");
  return -1;
 }

 FUNC_1(VAR_1, "Set Listen channel: reg_class %u channel %u",
  VAR_2, VAR_3);

 if (VAR_1->state == VAR_0) {
  VAR_1->cfg->reg_class = VAR_2;
  VAR_1->cfg->channel = VAR_3;
  VAR_1->cfg->channel_forced = VAR_4;
 } else {
  FUNC_1(VAR_1, "Defer setting listen channel");
  VAR_1->pending_reg_class = VAR_2;
  VAR_1->pending_channel = VAR_3;
  VAR_1->pending_channel_forced = VAR_4;
 }

 return 0;
}
