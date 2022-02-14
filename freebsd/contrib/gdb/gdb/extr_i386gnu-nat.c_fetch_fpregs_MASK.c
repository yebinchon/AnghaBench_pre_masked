
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_state_t ;
struct proc {int port; } ;
struct i386_float_state {int hw_state; int initialized; } ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void
FUNC_5 (struct proc *VAR_5)
{
  mach_msg_type_number_t VAR_6 = VAR_4;
  struct i386_float_state VAR_7;
  error_t VAR_8;

  VAR_8 = FUNC_3 (VAR_5->port, VAR_3,
     (thread_state_t) &VAR_7, &VAR_6);
  if (VAR_8)
    {
      FUNC_4 ("Couldn't fetch floating-point state from %s",
        FUNC_1 (VAR_5));
      return;
    }

  if (!VAR_7.initialized)

    {
      int VAR_9;

      for (VAR_9 = VAR_1; VAR_9 <= VAR_0; VAR_9++)
 FUNC_2 (VAR_9, ((void*)0));

      return;
    }


  FUNC_0 (VAR_2, -1, VAR_7.hw_state);
}
