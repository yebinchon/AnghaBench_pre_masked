
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf {int default_thread_pause_sc; scalar_t__ pause_sc; } ;


 int FUNC_0 (char*,char*) ;
 struct inf* FUNC_1 () ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_0, int VAR_1)
{
  struct inf *VAR_2 = FUNC_1 ();
  int VAR_3 = VAR_2->default_thread_pause_sc;
  FUNC_0 (VAR_0, "show thread default pause");
  FUNC_2 ("New threads %s suspended while gdb has control%s.\n",
       VAR_3 ? "are" : "aren't",
       !VAR_3 && VAR_2->pause_sc ? " (but the task is)" : "");
}
