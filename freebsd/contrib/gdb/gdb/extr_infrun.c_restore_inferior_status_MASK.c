
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inferior_status {int selected_frame_id; scalar_t__ restore_stack_info; int registers; int stop_registers; int proceed_to_finish; int breakpoint_proceeded; int stop_bpstat; int stop_soon; int stop_after_trap; int step_over_calls; int step_frame_id; int step_range_end; int step_range_start; int trap_expected; int stopped_by_random_signal; int stop_stack_dummy; int stop_step; int stop_pc; int stop_signal; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *,char*,int ) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (struct inferior_status*) ;

void
FUNC_7 (struct inferior_status *VAR_21)
{
  VAR_13 = VAR_21->stop_signal;
  VAR_11 = VAR_21->stop_pc;
  VAR_16 = VAR_21->stop_step;
  VAR_15 = VAR_21->stop_stack_dummy;
  VAR_17 = VAR_21->stopped_by_random_signal;
  VAR_20 = VAR_21->trap_expected;
  VAR_8 = VAR_21->step_range_start;
  VAR_7 = VAR_21->step_range_end;
  VAR_5 = VAR_21->step_frame_id;
  VAR_6 = VAR_21->step_over_calls;
  VAR_9 = VAR_21->stop_after_trap;
  VAR_14 = VAR_21->stop_soon;
  FUNC_0 (&VAR_10);
  VAR_10 = VAR_21->stop_bpstat;
  VAR_1 = VAR_21->breakpoint_proceeded;
  VAR_3 = VAR_21->proceed_to_finish;


  FUNC_4 (VAR_12);
  VAR_12 = VAR_21->stop_registers;



  if (VAR_18)

    FUNC_3 (VAR_2, VAR_21->registers);
  FUNC_4 (VAR_21->registers);
  if (VAR_19 && VAR_21->restore_stack_info)
    {



      if (FUNC_1
   (VAR_4, &VAR_21->selected_frame_id,
    "Unable to restore previously selected frame:\n",
    VAR_0) == 0)


 FUNC_5 (FUNC_2 ());

    }

  FUNC_6 (VAR_21);
}
