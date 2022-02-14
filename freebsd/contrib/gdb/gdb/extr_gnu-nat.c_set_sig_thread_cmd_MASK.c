
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf {scalar_t__ signal_thread; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 struct inf* FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (struct inf*,int) ;
 int FUNC_5 (char) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8 (char *VAR_0, int VAR_1)
{
  struct inf *VAR_2 = FUNC_2 ();

  if (!VAR_0 || (!FUNC_5 (*VAR_0) && FUNC_6 (VAR_0, "none") != 0))
    FUNC_3 ("Illegal argument to \"set signal-thread\" command.\n"
    "Should be an integer thread ID, or `none'.");

  if (FUNC_6 (VAR_0, "none") == 0)
    VAR_2->signal_thread = 0;
  else
    {
      int VAR_3 = FUNC_0 (FUNC_7 (FUNC_1 (VAR_0)));
      if (VAR_3 < 0)
 FUNC_3 ("Thread ID %s not known.  Use the \"info threads\" command to\n"
        "see the IDs of currently known threads.", VAR_0);
      VAR_2->signal_thread = FUNC_4 (VAR_2, VAR_3);
    }
}
