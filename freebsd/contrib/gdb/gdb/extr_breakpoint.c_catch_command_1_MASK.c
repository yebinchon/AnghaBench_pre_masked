
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,int,int) ;
 int VAR_3 ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_8 (char *VAR_4, int VAR_5, int VAR_6)
{







  char *VAR_7 = VAR_4;
  char *VAR_8;
  int VAR_9;

  if (VAR_7 == ((void*)0))
    {




      FUNC_6 ("Catch requires an event name.");

    }
  VAR_8 = FUNC_5 (VAR_7);
  if (VAR_8 == ((void*)0))
    FUNC_6 ("catch requires an event");
  VAR_9 = VAR_8 + 1 - VAR_7;


  if (FUNC_7 (VAR_7, "signal", VAR_9) == 0)
    {
      FUNC_6 ("Catch of signal not yet implemented");
    }
  else if (FUNC_7 (VAR_7, "catch", VAR_9) == 0)
    {
      FUNC_0 (VAR_0, VAR_8 + 1,
     VAR_5, VAR_6);
    }
  else if (FUNC_7 (VAR_7, "throw", VAR_9) == 0)
    {
      FUNC_0 (VAR_1, VAR_8 + 1,
     VAR_5, VAR_6);
    }
  else if (FUNC_7 (VAR_7, "thread_start", VAR_9) == 0)
    {
      FUNC_6 ("Catch of thread_start not yet implemented");
    }
  else if (FUNC_7 (VAR_7, "thread_exit", VAR_9) == 0)
    {
      FUNC_6 ("Catch of thread_exit not yet implemented");
    }
  else if (FUNC_7 (VAR_7, "thread_join", VAR_9) == 0)
    {
      FUNC_6 ("Catch of thread_join not yet implemented");
    }
  else if (FUNC_7 (VAR_7, "start", VAR_9) == 0)
    {
      FUNC_6 ("Catch of start not yet implemented");
    }
  else if (FUNC_7 (VAR_7, "exit", VAR_9) == 0)
    {
      FUNC_6 ("Catch of exit not yet implemented");
    }
  else if (FUNC_7 (VAR_7, "fork", VAR_9) == 0)
    {
      FUNC_2 (VAR_2, VAR_8 + 1, VAR_5, VAR_6);
    }
  else if (FUNC_7 (VAR_7, "vfork", VAR_9) == 0)
    {
      FUNC_2 (VAR_3, VAR_8 + 1, VAR_5, VAR_6);
    }
  else if (FUNC_7 (VAR_7, "exec", VAR_9) == 0)
    {
      FUNC_1 (VAR_8 + 1, VAR_5, VAR_6);
    }
  else if (FUNC_7 (VAR_7, "load", VAR_9) == 0)
    {
      FUNC_3 (VAR_8 + 1, VAR_5, VAR_6);
    }
  else if (FUNC_7 (VAR_7, "unload", VAR_9) == 0)
    {
      FUNC_4 (VAR_8 + 1, VAR_5, VAR_6);
    }
  else if (FUNC_7 (VAR_7, "stop", VAR_9) == 0)
    {
      FUNC_6 ("Catch of stop not yet implemented");
    }



  else
    {




      FUNC_6 ("Unknown event kind specified for catch");

    }
}
