
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf {int task; } ;


 struct inf* FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_0, int VAR_1)
{
  struct inf *VAR_2 = FUNC_0 ();
  if (!VAR_0)
    FUNC_1 ("No argument to \"set task exception-port\" command.");
  FUNC_3 (VAR_2->task, FUNC_2 (VAR_0));
}
