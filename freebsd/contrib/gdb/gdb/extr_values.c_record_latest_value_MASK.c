
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value_history_chunk {struct value** values; struct value_history_chunk* next; } ;
struct value {scalar_t__ modifiable; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct value*) ;
 int FUNC_1 (struct value**,int ,int) ;
 int FUNC_2 (struct value*) ;
 int FUNC_3 (struct value*) ;
 struct value_history_chunk* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int) ;

int
FUNC_5 (struct value *VAR_3)
{
  int VAR_4;





  if (FUNC_0 (VAR_3))
    FUNC_3 (VAR_3);



  VAR_3->modifiable = 0;
  FUNC_2 (VAR_3);




  VAR_4 = VAR_2 % VAR_0;
  if (VAR_4 == 0)
    {
      struct value_history_chunk *VAR_5
      = (struct value_history_chunk *)
      FUNC_4 (sizeof (struct value_history_chunk));
      FUNC_1 (VAR_5->values, 0, sizeof VAR_5->values);
      VAR_5->next = VAR_1;
      VAR_1 = VAR_5;
    }

  VAR_1->values[VAR_4] = VAR_3;




  return ++VAR_2;
}
