
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct constant_pool {int label; struct constant* execute; } ;
struct constant {int label; int value; struct constant* next; } ;
typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct constant*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static rtx
FUNC_5 (struct constant_pool *VAR_1, rtx VAR_2)
{
  struct constant *VAR_3;
  rtx VAR_4;

  for (VAR_3 = VAR_1->execute; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
    if (FUNC_0 (VAR_2) == FUNC_0 (VAR_3->value))
      break;

  FUNC_1 (VAR_3);

  VAR_4 = FUNC_4 (VAR_0, FUNC_3 (VAR_0, VAR_3->label),
     FUNC_3 (VAR_0, VAR_1->label));
  VAR_4 = FUNC_2 (VAR_0, VAR_4);
  return VAR_4;
}
