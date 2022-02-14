
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lx_rmh {int cmd_idx; int * stat; int * cmd; int dsp_stat; int stat_len; int cmd_len; } ;
typedef enum cmd_mb_opcodes { ____Placeholder_cmd_mb_opcodes } cmd_mb_opcodes ;
struct TYPE_2__ {int dcStatusType; int dcStatusLength; int dcCmdLength; int dcCodeOp; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct lx_rmh *VAR_3, enum cmd_mb_opcodes VAR_4)
{
 FUNC_1(VAR_4 >= VAR_0);

 VAR_3->cmd[0] = VAR_2[VAR_4].dcCodeOp;
 VAR_3->cmd_len = VAR_2[VAR_4].dcCmdLength;
 VAR_3->stat_len = VAR_2[VAR_4].dcStatusLength;
 VAR_3->dsp_stat = VAR_2[VAR_4].dcStatusType;
 VAR_3->cmd_idx = VAR_4;
 FUNC_0(&VAR_3->cmd[1], 0, (VAR_1 - 1) * sizeof(u32));







}
