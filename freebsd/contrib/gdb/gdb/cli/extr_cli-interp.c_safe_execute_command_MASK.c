
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_out {int dummy; } ;
struct captured_execute_command_args {char* command; int from_tty; } ;
typedef enum gdb_rc { ____Placeholder_gdb_rc } gdb_rc ;


 int VAR_0 ;
 int FUNC_0 (struct ui_out*,int ,struct captured_execute_command_args*,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static enum gdb_rc
FUNC_1 (struct ui_out *VAR_2, char *VAR_3, int VAR_4)
{
  struct captured_execute_command_args VAR_5;
  VAR_5.command = VAR_3;
  VAR_5.from_tty = VAR_4;
  return FUNC_0 (VAR_2, VAR_1, &VAR_5,
      ((void*)0), VAR_0);
}
