
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* header_next; } ;
struct ui_out {TYPE_2__ table; } ;
struct TYPE_3__ {int colno; int width; int alignment; char* colhdr; struct TYPE_3__* next; } ;



__attribute__((used)) static int
FUNC_0 (struct ui_out *VAR_0,
   int *VAR_1,
   int *VAR_2,
   int *VAR_3,
   char **VAR_4)
{

  if (VAR_0->table.header_next == ((void*)0))
    return 0;
  *VAR_1 = VAR_0->table.header_next->colno;
  *VAR_2 = VAR_0->table.header_next->width;
  *VAR_3 = VAR_0->table.header_next->alignment;
  *VAR_4 = VAR_0->table.header_next->colhdr;

  VAR_0->table.header_next = VAR_0->table.header_next->next;
  return 1;
}
