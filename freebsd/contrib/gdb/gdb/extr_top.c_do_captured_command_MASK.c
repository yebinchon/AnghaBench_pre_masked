
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct captured_command_args {int from_tty; int arg; int (* command ) (int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2 (void *VAR_1)
{
  struct captured_command_args *VAR_2 = VAR_1;
  VAR_2->command (VAR_2->arg, VAR_2->from_tty);







  FUNC_0 (VAR_0);
  return 1;
}
