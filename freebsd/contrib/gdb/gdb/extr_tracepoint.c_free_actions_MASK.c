
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint {struct action_line* actions; } ;
struct action_line {struct action_line* action; struct action_line* next; } ;


 int FUNC_0 (struct action_line*) ;

void
FUNC_1 (struct tracepoint *VAR_0)
{
  struct action_line *VAR_1, *VAR_2;

  for (VAR_1 = VAR_0->actions; VAR_1; VAR_1 = VAR_2)
    {
      VAR_2 = VAR_1->next;
      if (VAR_1->action)
 FUNC_0 (VAR_1->action);
      FUNC_0 (VAR_1);
    }
  VAR_0->actions = ((void*)0);
}
