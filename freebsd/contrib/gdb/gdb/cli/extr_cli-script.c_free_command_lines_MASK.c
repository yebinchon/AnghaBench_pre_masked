
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_line {int body_count; struct command_line* line; struct command_line* next; struct command_line** body_list; } ;


 int FUNC_0 (struct command_line*) ;

void
FUNC_1 (struct command_line **VAR_0)
{
  struct command_line *VAR_1 = *VAR_0;
  struct command_line *VAR_2;
  struct command_line **VAR_3;
  int VAR_4;

  while (VAR_1)
    {
      if (VAR_1->body_count > 0)
 {
   VAR_3 = VAR_1->body_list;
   for (VAR_4 = 0; VAR_4 < VAR_1->body_count; VAR_4++, VAR_3++)
     FUNC_1 (VAR_3);
 }
      VAR_2 = VAR_1->next;
      FUNC_0 (VAR_1->line);
      FUNC_0 (VAR_1);
      VAR_1 = VAR_2;
    }
  *VAR_0 = ((void*)0);
}
