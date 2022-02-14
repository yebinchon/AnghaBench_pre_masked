
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct captured_command_args {char* arg; int from_tty; int * command; } ;
typedef int return_mask ;
typedef int catch_command_errors_ftype ;


 int FUNC_0 (int ,struct captured_command_args*,char*,int ) ;
 int VAR_0 ;

int
FUNC_1 (catch_command_errors_ftype * VAR_1,
        char *VAR_2, int VAR_3, return_mask VAR_4)
{
  struct captured_command_args VAR_5;
  VAR_5.command = VAR_1;
  VAR_5.arg = VAR_2;
  VAR_5.from_tty = VAR_3;
  return FUNC_0 (VAR_0, &VAR_5, "", VAR_4);
}
