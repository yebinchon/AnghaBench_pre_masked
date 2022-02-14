
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct captured_main_args {int argc; char** argv; int interpreter_p; scalar_t__ use_windows; } ;


 int VAR_0 ;
 int FUNC_0 (struct captured_main_args*) ;
 int FUNC_1 (struct captured_main_args*,int ,int) ;

int
FUNC_2 (int VAR_1, char **VAR_2)
{
  struct captured_main_args VAR_3;
  FUNC_1 (&VAR_3, 0, sizeof VAR_3);
  VAR_3.argc = VAR_1;
  VAR_3.argv = VAR_2;
  VAR_3.use_windows = 0;
  VAR_3.interpreter_p = VAR_0;
  return FUNC_0 (&VAR_3);
}
