
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct operand_data {scalar_t__ index; struct operand_data* next; } ;
struct data {int n_operands; scalar_t__ operand_number; struct operand_data* operand; } ;


 scalar_t__ FUNC_0 (struct operand_data*,struct operand_data*) ;
 scalar_t__ VAR_0 ;
 struct operand_data* VAR_1 ;
 struct operand_data** VAR_2 ;

__attribute__((used)) static void
FUNC_1 (struct data *VAR_3)
{
  struct operand_data *VAR_4, *VAR_5;
  int VAR_6;

  if (VAR_3->n_operands == 0)
    {
      VAR_3->operand_number = 0;
      return;
    }


  for (VAR_4 = VAR_1, VAR_6 = 0; VAR_4; VAR_4 = VAR_4->next, VAR_6 = 0)
    if (FUNC_0 (VAR_4, &VAR_3->operand[0]))
      {
 VAR_5 = VAR_4->next;
 VAR_6 = 1;
 while (1)
   {
     if (VAR_6 == VAR_3->n_operands)
       goto full_match;
     if (VAR_5 == ((void*)0))
       goto partial_match;
     if (! FUNC_0 (VAR_5, &VAR_3->operand[VAR_6]))
       break;
     ++VAR_6, VAR_5 = VAR_5->next;
   }
      }



 partial_match:
  VAR_3->operand_number = VAR_0 - VAR_6;
  for (; VAR_6 < VAR_3->n_operands; ++VAR_6)
    {
      VAR_5 = &VAR_3->operand[VAR_6];
      *VAR_2 = VAR_5;
      VAR_2 = &VAR_5->next;
      VAR_5->index = VAR_0++;
    }
  *VAR_2 = ((void*)0);
  return;

 full_match:
  VAR_3->operand_number = VAR_4->index;
  return;
}
