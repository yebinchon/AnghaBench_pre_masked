
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct trapframe {int dummy; } ;
struct reg {uintptr_t r_rip; } ;
struct TYPE_4__ {int p_flag; int p_pid; struct TYPE_4__* p_parent; } ;
typedef TYPE_1__ proc_t ;
struct TYPE_5__ {uintptr_t t_dtrace_pc; uintptr_t t_dtrace_npc; scalar_t__ t_dtrace_astpc; scalar_t__ t_dtrace_scrpc; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (struct reg*,uintptr_t,int ,uintptr_t) ;
 int FUNC_1 (struct trapframe*,struct reg*) ;

int
FUNC_2(struct trapframe *VAR_3)
{
 struct reg VAR_4, *VAR_5;
 proc_t *VAR_6 = VAR_1;
 uintptr_t VAR_7 = VAR_2->t_dtrace_pc;
 uintptr_t VAR_8 = VAR_2->t_dtrace_npc;

 FUNC_1(VAR_3, &VAR_4);
 VAR_5 = &VAR_4;

 VAR_2->t_dtrace_pc = 0;
 VAR_2->t_dtrace_npc = 0;
 VAR_2->t_dtrace_scrpc = 0;
 VAR_2->t_dtrace_astpc = 0;
 VAR_5->r_rip = VAR_7;

 FUNC_0(VAR_5, VAR_7, VAR_6->p_pid, VAR_8);

 return (0);
}
