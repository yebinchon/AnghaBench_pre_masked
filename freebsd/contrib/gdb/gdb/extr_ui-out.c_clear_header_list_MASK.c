
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* header_next; int * header_last; TYPE_2__* header_first; } ;
struct ui_out {TYPE_1__ table; } ;
struct TYPE_4__ {struct TYPE_4__* colhdr; struct TYPE_4__* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2 (struct ui_out *VAR_0)
{
  while (VAR_0->table.header_first != ((void*)0))
    {
      VAR_0->table.header_next = VAR_0->table.header_first;
      VAR_0->table.header_first = VAR_0->table.header_first->next;
      if (VAR_0->table.header_next->colhdr != ((void*)0))
 FUNC_1 (VAR_0->table.header_next->colhdr);
      FUNC_1 (VAR_0->table.header_next);
    }
  FUNC_0 (VAR_0->table.header_first == ((void*)0));
  VAR_0->table.header_last = ((void*)0);
  VAR_0->table.header_next = ((void*)0);
}
