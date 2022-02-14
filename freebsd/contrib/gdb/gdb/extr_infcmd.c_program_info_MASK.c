
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bpstat ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 () ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void
FUNC_6 (char *VAR_6, int VAR_7)
{
  bpstat VAR_8 = VAR_1;
  int VAR_9 = FUNC_0 (&VAR_8);

  if (!VAR_5)
    {
      FUNC_2 ("The program being debugged is not being run.\n");
      return;
    }

  FUNC_3 ();
  FUNC_2 ("Program stopped at %s.\n",
     FUNC_1 ((unsigned long) VAR_2));
  if (VAR_4)
    FUNC_2 ("It stopped after being stepped.\n");
  else if (VAR_9 != 0)
    {


      while (VAR_9 != 0)
 {
   if (VAR_9 < 0)
     {
       FUNC_2 ("It stopped at a breakpoint that has ");
       FUNC_2 ("since been deleted.\n");
     }
   else
     FUNC_2 ("It stopped at breakpoint %d.\n", VAR_9);
   VAR_9 = FUNC_0 (&VAR_8);
 }
    }
  else if (VAR_3 != VAR_0)
    {
      FUNC_2 ("It stopped with signal %s, %s.\n",
         FUNC_4 (VAR_3),
         FUNC_5 (VAR_3));
    }

  if (!VAR_7)
    {
      FUNC_2 ("Type \"info stack\" or \"info registers\" ");
      FUNC_2 ("for more information.\n");
    }
}
