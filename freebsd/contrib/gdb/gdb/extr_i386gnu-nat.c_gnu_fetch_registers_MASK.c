
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_state_t ;
struct proc {int fetched_regs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct proc*) ;
 struct proc* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (struct proc*,char*,...) ;
 int FUNC_8 (struct proc*,int ) ;
 int FUNC_9 (struct proc*) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (char*,int ) ;

void
FUNC_12 (int VAR_3)
{
  struct proc *VAR_4;


  FUNC_6 (VAR_1);

  VAR_4 = FUNC_5 (VAR_1, FUNC_0 (VAR_2));
  if (!VAR_4)
    FUNC_3 ("Can't fetch registers from thread %d: No such thread",
    FUNC_0 (VAR_2));

  if (VAR_3 < VAR_0 || VAR_3 == -1)
    {
      thread_state_t VAR_5;


      VAR_5 = FUNC_8 (VAR_4, 0);
      if (!VAR_5)
 {
   FUNC_11 ("Couldn't fetch registers from %s",
     FUNC_9 (VAR_4));
   return;
 }

      if (VAR_3 == -1)
 {
   int VAR_6;

   FUNC_7 (VAR_4, "fetching all register");

   for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
     FUNC_10 (VAR_6, FUNC_2 (VAR_5, VAR_6));
   VAR_4->fetched_regs = ~0;
 }
      else
 {
   FUNC_7 (VAR_4, "fetching register %s", FUNC_1 (VAR_3));

   FUNC_10 (VAR_3, FUNC_2 (VAR_5, VAR_3));
   VAR_4->fetched_regs |= (1 << VAR_3);
 }
    }

  if (VAR_3 >= VAR_0 || VAR_3 == -1)
    {
      FUNC_7 (VAR_4, "fetching floating-point registers");

      FUNC_4 (VAR_4);
    }
}
