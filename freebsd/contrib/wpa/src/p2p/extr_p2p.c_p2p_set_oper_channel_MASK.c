
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct p2p_data {TYPE_1__* cfg; } ;
struct TYPE_2__ {int cfg_op_channel; void* op_channel; void* op_reg_class; } ;


 scalar_t__ FUNC_0 (void*,void*) ;
 int FUNC_1 (struct p2p_data*,char*,void*,void*) ;

int FUNC_2(struct p2p_data *VAR_0, u8 VAR_1, u8 VAR_2,
    int VAR_3)
{
 if (FUNC_0(VAR_1, VAR_2) < 0)
  return -1;

 FUNC_1(VAR_0, "Set Operating channel: reg_class %u channel %u",
  VAR_1, VAR_2);
 VAR_0->cfg->op_reg_class = VAR_1;
 VAR_0->cfg->op_channel = VAR_2;
 VAR_0->cfg->cfg_op_channel = VAR_3;
 return 0;
}
