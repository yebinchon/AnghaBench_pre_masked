
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backtrace_command_args {int from_tty; int show_locals; int count_exp; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1 (void *VAR_0)
{
  struct backtrace_command_args *VAR_1 = (struct backtrace_command_args *)VAR_0;
  FUNC_0 (VAR_1->count_exp, VAR_1->show_locals, VAR_1->from_tty);
  return 0;
}
