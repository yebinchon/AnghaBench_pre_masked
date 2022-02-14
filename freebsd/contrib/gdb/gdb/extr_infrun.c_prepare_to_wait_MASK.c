
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct execution_control_state {scalar_t__ infwait_state; int wait_some_more; int ws; int * wp; int waiton_ptid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2 (struct execution_control_state *VAR_2)
{
  if (VAR_2->infwait_state == VAR_0)
    {
      VAR_1 = 1;







      FUNC_1 ();
      VAR_2->waiton_ptid = FUNC_0 (-1);
      VAR_2->wp = &(VAR_2->ws);
    }



  VAR_2->wait_some_more = 1;
}
