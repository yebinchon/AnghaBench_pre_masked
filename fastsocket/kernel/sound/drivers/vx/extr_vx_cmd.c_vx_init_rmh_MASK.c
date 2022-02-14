
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vx_rmh {int * Cmd; int DspStat; int LgStat; int LgCmd; } ;
struct TYPE_2__ {int opcode; int st_type; int st_length; int length; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;

void FUNC_1(struct vx_rmh *VAR_2, unsigned int VAR_3)
{
 if (FUNC_0(VAR_3 >= VAR_0))
  return;
 VAR_2->LgCmd = VAR_1[VAR_3].length;
 VAR_2->LgStat = VAR_1[VAR_3].st_length;
 VAR_2->DspStat = VAR_1[VAR_3].st_type;
 VAR_2->Cmd[0] = VAR_1[VAR_3].opcode;
}
