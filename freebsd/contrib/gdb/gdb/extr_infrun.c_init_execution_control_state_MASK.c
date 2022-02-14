
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int symtab; int line; } ;
struct execution_control_state {int ws; int * wp; int waiton_ptid; int infwait_state; TYPE_1__ sal; int current_symtab; int current_line; scalar_t__ stepping_through_sigtramp; scalar_t__ enable_hw_watchpoints_after_wait; int * stepping_through_solib_catchpoints; scalar_t__ stepping_through_solib_after_catch; scalar_t__ update_step_sp; scalar_t__ handling_longjmp; scalar_t__ remove_breakpoints_on_following_step; scalar_t__ random_signal; } ;


 TYPE_1__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;

void
FUNC_2 (struct execution_control_state *VAR_2)
{

  VAR_2->random_signal = 0;
  VAR_2->remove_breakpoints_on_following_step = 0;
  VAR_2->handling_longjmp = 0;
  VAR_2->update_step_sp = 0;
  VAR_2->stepping_through_solib_after_catch = 0;
  VAR_2->stepping_through_solib_catchpoints = ((void*)0);
  VAR_2->enable_hw_watchpoints_after_wait = 0;
  VAR_2->stepping_through_sigtramp = 0;
  VAR_2->sal = FUNC_0 (VAR_1, 0);
  VAR_2->current_line = VAR_2->sal.line;
  VAR_2->current_symtab = VAR_2->sal.symtab;
  VAR_2->infwait_state = VAR_0;
  VAR_2->waiton_ptid = FUNC_1 (-1);
  VAR_2->wp = &(VAR_2->ws);
}
