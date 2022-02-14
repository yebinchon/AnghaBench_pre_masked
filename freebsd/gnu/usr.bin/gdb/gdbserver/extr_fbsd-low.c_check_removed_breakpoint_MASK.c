
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {int dummy; } ;
struct process_info {scalar_t__ pending_is_breakpoint; scalar_t__ pending_stop_pc; scalar_t__ status_pending; scalar_t__ status_pending_p; } ;
struct TYPE_2__ {int (* set_pc ) (scalar_t__) ;scalar_t__ (* breakpoint_at ) (scalar_t__) ;} ;
typedef scalar_t__ CORE_ADDR ;


 struct thread_info* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct thread_info* FUNC_1 (struct process_info*) ;
 scalar_t__ FUNC_2 () ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int
FUNC_5 (struct process_info *VAR_4)
{
  CORE_ADDR VAR_5;
  struct thread_info *VAR_6;

  if (VAR_4->pending_is_breakpoint == 0)
    return 0;

  if (VAR_1)
    FUNC_0 (VAR_2, "Checking for breakpoint.\n");

  VAR_6 = VAR_0;
  VAR_0 = FUNC_1 (VAR_4);

  VAR_5 = FUNC_2 ();




  if (VAR_5 != VAR_4->pending_stop_pc)
    {
      if (VAR_1)
 FUNC_0 (VAR_2, "Ignoring, PC was changed.\n");

      VAR_4->pending_is_breakpoint = 0;
      VAR_0 = VAR_6;
      return 0;
    }


  if ((*VAR_3.breakpoint_at) (VAR_5))
    {
      if (VAR_1)
 FUNC_0 (VAR_2, "Ignoring, breakpoint is still present.\n");
      VAR_0 = VAR_6;
      return 0;
    }

  if (VAR_1)
    FUNC_0 (VAR_2, "Removed breakpoint.\n");




  if (VAR_3.set_pc != ((void*)0))
    (*VAR_3.set_pc) (VAR_5);


  VAR_4->pending_is_breakpoint = 0;
  VAR_4->status_pending_p = 0;
  VAR_4->status_pending = 0;

  VAR_0 = VAR_6;
  return 1;
}
