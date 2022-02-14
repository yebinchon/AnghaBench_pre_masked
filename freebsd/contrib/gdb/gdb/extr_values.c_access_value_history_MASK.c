
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value_history_chunk {int * values; struct value_history_chunk* next; } ;
struct value {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 struct value* FUNC_1 (int ) ;
 struct value_history_chunk* VAR_1 ;
 int VAR_2 ;

struct value *
FUNC_2 (int VAR_3)
{
  struct value_history_chunk *VAR_4;
  int VAR_5;
  int VAR_6 = VAR_3;

  if (VAR_6 <= 0)
    VAR_6 += VAR_2;

  if (VAR_6 <= 0)
    {
      if (VAR_3 == 0)
 FUNC_0 ("The history is empty.");
      else if (VAR_3 == 1)
 FUNC_0 ("There is only one value in the history.");
      else
 FUNC_0 ("History does not go back to $$%d.", -VAR_3);
    }
  if (VAR_6 > VAR_2)
    FUNC_0 ("History has not yet reached $%d.", VAR_6);

  VAR_6--;



  VAR_4 = VAR_1;
  for (VAR_5 = (VAR_2 - 1) / VAR_0 - VAR_6 / VAR_0;
       VAR_5 > 0; VAR_5--)
    VAR_4 = VAR_4->next;

  return FUNC_1 (VAR_4->values[VAR_6 % VAR_0]);
}
