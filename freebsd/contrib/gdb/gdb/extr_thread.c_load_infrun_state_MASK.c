
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_id {int dummy; } ;
struct thread_info {int trap_expected; int handling_longjmp; int another_trap; int stepping_through_solib_after_catch; int stepping_through_sigtramp; int current_line; int step_sp; struct symtab* current_symtab; int stepping_through_solib_catchpoints; struct frame_id step_frame_id; int step_range_end; int step_range_start; struct breakpoint* through_sigtramp_breakpoint; struct breakpoint* step_resume_breakpoint; int prev_pc; } ;
struct symtab {int dummy; } ;
struct breakpoint {int dummy; } ;
typedef int ptid_t ;
typedef int bpstat ;
typedef int CORE_ADDR ;


 struct thread_info* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2 (ptid_t VAR_0,
     CORE_ADDR *VAR_1,
     int *VAR_2,
     struct breakpoint **VAR_3,
     struct breakpoint **VAR_4,
     CORE_ADDR *VAR_5,
     CORE_ADDR *VAR_6,
     struct frame_id *VAR_7,
     int *VAR_8,
     int *VAR_9,
     int *VAR_10,
     bpstat *VAR_11,
     int *VAR_12,
     int *VAR_13,
     struct symtab **VAR_14, CORE_ADDR *VAR_15)
{
  struct thread_info *VAR_16;



  VAR_16 = FUNC_0 (FUNC_1 (VAR_0));
  if (VAR_16 == ((void*)0))
    return;

  *VAR_1 = VAR_16->prev_pc;
  *VAR_2 = VAR_16->trap_expected;
  *VAR_3 = VAR_16->step_resume_breakpoint;
  *VAR_4 = VAR_16->through_sigtramp_breakpoint;
  *VAR_5 = VAR_16->step_range_start;
  *VAR_6 = VAR_16->step_range_end;
  *VAR_7 = VAR_16->step_frame_id;
  *VAR_8 = VAR_16->handling_longjmp;
  *VAR_9 = VAR_16->another_trap;
  *VAR_10 =
    VAR_16->stepping_through_solib_after_catch;
  *VAR_11 =
    VAR_16->stepping_through_solib_catchpoints;
  *VAR_12 = VAR_16->stepping_through_sigtramp;
  *VAR_13 = VAR_16->current_line;
  *VAR_14 = VAR_16->current_symtab;
  *VAR_15 = VAR_16->step_sp;
}
