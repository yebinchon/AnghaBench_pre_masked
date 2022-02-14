
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtab {char* dirname; char* filename; char* debugformat; int block_line_section; TYPE_1__* linetable; } ;
struct linetable_entry {scalar_t__ pc; scalar_t__ line; } ;
struct TYPE_2__ {int nitems; struct linetable_entry* item; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

void
FUNC_1 (struct symtab *VAR_1)
{
  int VAR_2;
  FUNC_0 (VAR_0, "New symtab: [\n");
  FUNC_0 (VAR_0, "  Name: %s/%s;\n",
    VAR_1->dirname ? VAR_1->dirname : "?", VAR_1->filename ? VAR_1->filename : "?");
  FUNC_0 (VAR_0, "  Format: %s;\n", VAR_1->debugformat);
  if (VAR_1->linetable != ((void*)0))
    {
      FUNC_0 (VAR_0, "  Line table (section %d):\n", VAR_1->block_line_section);
      for (VAR_2 = 0; VAR_2 < VAR_1->linetable->nitems; VAR_2 += 1)
 {
   struct linetable_entry *VAR_3 = VAR_1->linetable->item + VAR_2;
   FUNC_0 (VAR_0, "    %4ld: %8lx\n", (long) VAR_3->line, (long) VAR_3->pc);
 }
    }
  FUNC_0 (VAR_0, "]\n");
}
