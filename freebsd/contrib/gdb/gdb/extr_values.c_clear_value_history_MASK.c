
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value_history_chunk {struct value_history_chunk* next; struct value_history_chunk** values; } ;
struct value {struct value* next; struct value** values; } ;


 int VAR_0 ;
 struct value_history_chunk* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct value_history_chunk*) ;

void
FUNC_1 (void)
{
  struct value_history_chunk *VAR_3;
  int VAR_4;
  struct value *VAR_5;

  while (VAR_1)
    {
      for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
 if ((VAR_5 = VAR_1->values[VAR_4]) != ((void*)0))
   FUNC_0 (VAR_5);
      VAR_3 = VAR_1->next;
      FUNC_0 (VAR_1);
      VAR_1 = VAR_3;
    }
  VAR_2 = 0;
}
