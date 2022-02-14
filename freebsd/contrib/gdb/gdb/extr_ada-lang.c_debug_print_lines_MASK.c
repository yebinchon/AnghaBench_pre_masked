
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct linetable {int nitems; TYPE_1__* item; } ;
struct TYPE_2__ {int line; scalar_t__ pc; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1 (struct linetable *VAR_1)
{
  int VAR_2;

  if (VAR_1 == ((void*)0))
    return;

  FUNC_0 (VAR_0, "\t");
  for (VAR_2 = 0; VAR_2 < VAR_1->nitems; VAR_2 += 1)
    FUNC_0 (VAR_0, "(%d->%p) ", VAR_1->item[VAR_2].line, (void *) VAR_1->item[VAR_2].pc);
  FUNC_0 (VAR_0, "\n");
}
