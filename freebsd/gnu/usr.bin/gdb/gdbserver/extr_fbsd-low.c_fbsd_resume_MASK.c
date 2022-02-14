
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_resume {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ,int*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*) ;
 struct thread_resume* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_5 (struct thread_resume *VAR_9)
{
  int VAR_10;


  VAR_6 = VAR_9;

  FUNC_3 (&VAR_1, VAR_5);





  VAR_10 = 0;
  FUNC_2 (&VAR_0, VAR_7, &VAR_10);

  if (VAR_2)
    {
      if (VAR_10)
 FUNC_4 (VAR_8, "Not resuming, pending status\n");
      else
 FUNC_4 (VAR_8, "Resuming, no pending status\n");
    }

  if (VAR_10)
    FUNC_3 (&VAR_1, VAR_4);
  else
    {
      FUNC_0 ();
      FUNC_1 ();
      FUNC_3 (&VAR_1, VAR_3);
    }
}
