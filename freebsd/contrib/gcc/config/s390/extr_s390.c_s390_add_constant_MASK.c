
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct constant_pool {int size; struct constant** constants; } ;
struct constant {struct constant* next; int label; int value; } ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5 (struct constant_pool *VAR_2, rtx VAR_3, enum machine_mode VAR_4)
{
  struct constant *VAR_5;
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
    if (VAR_1[VAR_6] == VAR_4)
      break;
  FUNC_1 (VAR_6 != VAR_0);

  for (VAR_5 = VAR_2->constants[VAR_6]; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    if (FUNC_3 (VAR_3, VAR_5->value))
      break;

  if (VAR_5 == ((void*)0))
    {
      VAR_5 = (struct constant *) FUNC_4 (sizeof *VAR_5);
      VAR_5->value = VAR_3;
      VAR_5->label = FUNC_2 ();
      VAR_5->next = VAR_2->constants[VAR_6];
      VAR_2->constants[VAR_6] = VAR_5;
      VAR_2->size += FUNC_0 (VAR_4);
    }
}
