
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct trapframe {int dummy; } ;
struct reg {uintptr_t pc; } ;
struct TYPE_5__ {int p_pid; } ;
typedef TYPE_1__ proc_t ;
struct TYPE_6__ {uintptr_t t_dtrace_pc; uintptr_t t_dtrace_npc; scalar_t__ t_dtrace_astpc; scalar_t__ t_dtrace_scrpc; } ;


 TYPE_1__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct reg*,uintptr_t,int ,uintptr_t) ;
 int FUNC_1 (TYPE_2__*,struct reg*) ;

int
FUNC_2(struct trapframe *VAR_2)
{
 struct reg VAR_3, *VAR_4;
 proc_t *VAR_5 = VAR_0;
 uintptr_t VAR_6 = VAR_1->t_dtrace_pc;
 uintptr_t VAR_7 = VAR_1->t_dtrace_npc;

 VAR_1->t_dtrace_pc = 0;
 VAR_1->t_dtrace_npc = 0;
 VAR_1->t_dtrace_scrpc = 0;
 VAR_1->t_dtrace_astpc = 0;

 FUNC_1(VAR_1, &VAR_3);
 VAR_4 = &VAR_3;






 VAR_4->pc = VAR_6;

 FUNC_0(VAR_4, VAR_6, VAR_5->p_pid, VAR_7);

 return (0);
}
