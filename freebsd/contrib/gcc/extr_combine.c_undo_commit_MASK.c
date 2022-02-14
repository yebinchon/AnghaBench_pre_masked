
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct undo {struct undo* next; } ;
struct TYPE_2__ {struct undo* undos; struct undo* frees; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  struct undo *VAR_1, *VAR_2;

  for (VAR_1 = VAR_0.undos; VAR_1; VAR_1 = VAR_2)
    {
      VAR_2 = VAR_1->next;
      VAR_1->next = VAR_0.frees;
      VAR_0.frees = VAR_1;
    }
  VAR_0.undos = 0;
}
