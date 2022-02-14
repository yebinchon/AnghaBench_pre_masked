
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_line {int body_count; struct command_line** body_list; int control_type; int line; struct command_line* next; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;

struct command_line *
FUNC_2 (struct command_line *VAR_0)
{
  struct command_line *VAR_1 = ((void*)0);

  if (VAR_0)
    {
      VAR_1 = (struct command_line *) FUNC_0 (sizeof (struct command_line));

      VAR_1->next = FUNC_2 (VAR_0->next);
      VAR_1->line = FUNC_1 (VAR_0->line);
      VAR_1->control_type = VAR_0->control_type;
      VAR_1->body_count = VAR_0->body_count;
      if (VAR_0->body_count > 0)
        {
          int VAR_2;

          VAR_1->body_list = (struct command_line **)
            FUNC_0 (sizeof (struct command_line *) * VAR_0->body_count);

          for (VAR_2 = 0; VAR_2 < VAR_0->body_count; VAR_2++)
            VAR_1->body_list[VAR_2] = FUNC_2 (VAR_0->body_list[VAR_2]);
        }
      else
        VAR_1->body_list = ((void*)0);
    }

  return VAR_1;
}
