
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcxhr_rmh {int cmd_len; int cmd_idx; int dsp_stat; int stat_len; int * cmd; } ;
struct TYPE_2__ {int st_type; int st_length; int opcode; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

void FUNC_1(struct pcxhr_rmh *VAR_2, int VAR_3)
{
 if (FUNC_0(VAR_3 >= VAR_0))
  return;
 VAR_2->cmd[0] = VAR_1[VAR_3].opcode;
 VAR_2->cmd_len = 1;
 VAR_2->stat_len = VAR_1[VAR_3].st_length;
 VAR_2->dsp_stat = VAR_1[VAR_3].st_type;
 VAR_2->cmd_idx = VAR_3;
}
