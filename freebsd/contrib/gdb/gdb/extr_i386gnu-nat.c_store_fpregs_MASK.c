
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_state_t ;
struct proc {int port; } ;
struct i386_float_state {int hw_state; } ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct proc*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void
FUNC_5 (struct proc *VAR_2, int VAR_3)
{
  mach_msg_type_number_t VAR_4 = VAR_1;
  struct i386_float_state VAR_5;
  error_t VAR_6;

  VAR_6 = FUNC_2 (VAR_2->port, VAR_0,
     (thread_state_t) &VAR_5, &VAR_4);
  if (VAR_6)
    {
      FUNC_4 ("Couldn't fetch floating-point state from %s",
        FUNC_1 (VAR_2));
      return;
    }



  FUNC_0 (VAR_5.hw_state, VAR_3);

  VAR_6 = FUNC_3 (VAR_2->port, VAR_0,
     (thread_state_t) &VAR_5, VAR_1);
  if (VAR_6)
    {
      FUNC_4 ("Couldn't store floating-point state into %s",
        FUNC_1 (VAR_2));
      return;
    }
}
