
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_out {int dummy; } ;
struct captured_execute_command_args {int from_tty; int command; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1 (struct ui_out *VAR_1, void *VAR_2)
{
  struct captured_execute_command_args *VAR_3 =
    (struct captured_execute_command_args *) VAR_2;
  FUNC_0 (VAR_3->command, VAR_3->from_tty);
  return VAR_0;
}
