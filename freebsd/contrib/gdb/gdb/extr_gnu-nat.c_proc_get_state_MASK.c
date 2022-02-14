
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_state_t ;
struct proc {int aborted; int state_valid; int state_changed; int state; int port; } ;
typedef int mach_msg_type_number_t ;
typedef int error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct proc*,int) ;
 int FUNC_1 (struct proc*,char*,...) ;
 int FUNC_2 (int ,int ,int ,int *) ;

thread_state_t
FUNC_3 (struct proc *VAR_2, int VAR_3)
{
  int VAR_4 = VAR_2->aborted;

  FUNC_1 (VAR_2, "updating state info%s",
       VAR_3 ? " (with intention to modify)" : "");

  FUNC_0 (VAR_2, VAR_3);

  if (!VAR_4 && VAR_2->aborted)

    VAR_2->state_valid = 0;

  if (!VAR_2->state_valid)
    {
      mach_msg_type_number_t VAR_5 = VAR_1;
      error_t VAR_6 =
      FUNC_2 (VAR_2->port, VAR_0,
   (thread_state_t) &VAR_2->state, &VAR_5);
      FUNC_1 (VAR_2, "getting thread state");
      VAR_2->state_valid = !VAR_6;
    }

  if (VAR_2->state_valid)
    {
      if (VAR_3)
 VAR_2->state_changed = 1;
      return (thread_state_t) &VAR_2->state;
    }
  else
    return 0;
}
