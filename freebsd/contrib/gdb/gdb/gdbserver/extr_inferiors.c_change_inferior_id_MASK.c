
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inferior_list {TYPE_1__* head; TYPE_1__* tail; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (char*) ;

void
FUNC_1 (struct inferior_list *VAR_0,
      int VAR_1)
{
  if (VAR_0->head != VAR_0->tail)
    FUNC_0 ("tried to change thread ID after multiple threads are created");

  VAR_0->head->id = VAR_1;
}
