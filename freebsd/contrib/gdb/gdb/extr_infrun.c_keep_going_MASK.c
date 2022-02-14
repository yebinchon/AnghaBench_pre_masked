
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct execution_control_state {scalar_t__ another_trap; scalar_t__ remove_breakpoints_on_following_step; scalar_t__ update_step_sp; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct execution_control_state*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct execution_control_state*) ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,size_t) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_7 (struct execution_control_state*) ;
 int * VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_8 (struct execution_control_state *VAR_11)
{

  VAR_4 = FUNC_3 ();

  if (VAR_11->update_step_sp)
    VAR_7 = FUNC_4 ();
  VAR_11->update_step_sp = 0;




  if (VAR_10 && VAR_8 != VAR_1)
    {



      FUNC_6 (FUNC_0 (VAR_11), VAR_8);
    }
  else
    {
      if (VAR_6 == ((void*)0)
   && VAR_9 == ((void*)0)
   && VAR_11->remove_breakpoints_on_following_step)
 {
   VAR_11->remove_breakpoints_on_following_step = 0;
   FUNC_5 ();
   VAR_3 = 0;
 }
      else if (!VAR_3 &&
        (VAR_9 != ((void*)0) || !VAR_11->another_trap))
 {
   VAR_2 = FUNC_1 ();
   if (VAR_2)
     {
       FUNC_7 (VAR_11);
       return;
     }
   VAR_3 = 1;
 }

      VAR_10 = VAR_11->another_trap;
      if (VAR_8 == VAR_1 && !VAR_5[VAR_8])
 VAR_8 = VAR_0;


      FUNC_6 (FUNC_0 (VAR_11), VAR_8);
    }

  FUNC_2 (VAR_11);
}
