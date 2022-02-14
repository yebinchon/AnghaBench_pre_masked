
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf {scalar_t__ signal_thread; } ;


 struct inf* FUNC_0 () ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_0, int VAR_1)
{
  struct inf *VAR_2 = FUNC_0 ();
  FUNC_1 (VAR_0, "show signal-thread");
  if (VAR_2->signal_thread)
    FUNC_2 ("The signal thread is %s.\n",
         FUNC_3 (VAR_2->signal_thread));
  else
    FUNC_2 ("There is no signal thread.\n");
}
