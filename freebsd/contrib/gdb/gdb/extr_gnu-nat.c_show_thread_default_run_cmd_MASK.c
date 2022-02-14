
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf {scalar_t__ default_thread_run_sc; } ;


 int FUNC_0 (char*,char*) ;
 struct inf* FUNC_1 () ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_0, int VAR_1)
{
  struct inf *VAR_2 = FUNC_1 ();
  FUNC_0 (VAR_0, "show thread default run");
  FUNC_2 ("New threads %s allowed to run.\n",
       VAR_2->default_thread_run_sc == 0 ? "are" : "aren't");
}
