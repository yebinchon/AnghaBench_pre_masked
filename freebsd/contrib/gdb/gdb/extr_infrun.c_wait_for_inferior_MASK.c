
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct execution_control_state {int wait_some_more; int wp; int waiton_ptid; int ptid; } ;
struct cleanup {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (struct execution_control_state*) ;
 int VAR_2 ;
 int FUNC_2 (struct execution_control_state*) ;
 struct cleanup* FUNC_3 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_6 ;

void
FUNC_7 (void)
{
  struct cleanup *VAR_7;
  struct execution_control_state VAR_8;
  struct execution_control_state *VAR_9;

  VAR_7 = FUNC_3 (VAR_1,
          &VAR_5);
  FUNC_3 (VAR_0,
  &VAR_6);



  VAR_9 = &VAR_8;


  FUNC_2 (VAR_9);


  VAR_4 = VAR_2;

  VAR_3 = 1;







  FUNC_4 ();

  while (1)
    {
      if (&FUNC_6)
 VAR_9->ptid = FUNC_6 (VAR_9->waiton_ptid, VAR_9->wp);
      else
 VAR_9->ptid = FUNC_5 (VAR_9->waiton_ptid, VAR_9->wp);


      FUNC_1 (VAR_9);

      if (!VAR_9->wait_some_more)
 break;
    }
  FUNC_0 (VAR_7);
}
