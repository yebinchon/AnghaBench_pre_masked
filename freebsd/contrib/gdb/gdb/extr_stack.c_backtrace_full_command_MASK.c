
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backtrace_command_args {char* count_exp; int show_locals; int from_tty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,int ) ;

__attribute__((used)) static void
FUNC_1 (char *VAR_2, int VAR_3)
{
  struct backtrace_command_args VAR_4;
  VAR_4.count_exp = VAR_2;
  VAR_4.show_locals = 1;
  VAR_4.from_tty = VAR_3;
  FUNC_0 (VAR_1, (char *)&VAR_4, "", VAR_0);
}
