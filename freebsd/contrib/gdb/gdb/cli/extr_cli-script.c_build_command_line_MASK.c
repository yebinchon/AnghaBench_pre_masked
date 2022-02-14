
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_line {int control_type; int body_count; int line; struct command_line** body_list; int * next; } ;
typedef enum command_control_type { ____Placeholder_command_control_type } command_control_type ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct command_line**,int ,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static struct command_line *
FUNC_5 (enum command_control_type VAR_0, char *VAR_1)
{
  struct command_line *VAR_2;

  if (VAR_1 == ((void*)0))
    FUNC_0 ("if/while commands require arguments.\n");

  VAR_2 = (struct command_line *) FUNC_4 (sizeof (struct command_line));
  VAR_2->next = ((void*)0);
  VAR_2->control_type = VAR_0;

  VAR_2->body_count = 1;
  VAR_2->body_list
    = (struct command_line **) FUNC_4 (sizeof (struct command_line *)
     * VAR_2->body_count);
  FUNC_1 (VAR_2->body_list, 0, sizeof (struct command_line *) * VAR_2->body_count);
  VAR_2->line = FUNC_2 (VAR_1, FUNC_3 (VAR_1));
  return VAR_2;
}
