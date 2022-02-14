
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ftiq_instr; int ftiq_pc; int ftiq_pid; } ;
typedef TYPE_2__ fasttrap_instr_query_t ;
struct TYPE_7__ {int* instr; int addr; TYPE_1__* dtp; int pid; } ;
typedef TYPE_3__ dtrace_dis_t ;
struct TYPE_5__ {int dt_ftfd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2)
{
 dtrace_dis_t *VAR_3 = VAR_2;
 int VAR_4 = *VAR_3->instr;

 if (VAR_4 == VAR_1) {
  fasttrap_instr_query_t VAR_5;

  VAR_5.ftiq_pid = VAR_3->pid;
  VAR_5.ftiq_pc = VAR_3->addr;
  if (FUNC_0(VAR_3->dtp->dt_ftfd, VAR_0, &VAR_5) == 0)
   VAR_4 = VAR_5.ftiq_instr;
 }

 VAR_3->addr++;
 VAR_3->instr++;

 return (VAR_4);
}
