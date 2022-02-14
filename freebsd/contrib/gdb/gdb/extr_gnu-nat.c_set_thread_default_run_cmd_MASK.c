
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf {int default_thread_run_sc; } ;


 struct inf* FUNC_0 () ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_0, int VAR_1)
{
  struct inf *VAR_2 = FUNC_0 ();
  VAR_2->default_thread_run_sc =
    FUNC_1 (VAR_0, "set thread default run") ? 0 : 1;
}
