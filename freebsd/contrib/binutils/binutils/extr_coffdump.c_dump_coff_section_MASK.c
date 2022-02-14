
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct coff_section {char* name; int code; int data; int address; int size; int number; int nrelocs; TYPE_2__* relocs; } ;
struct TYPE_4__ {int offset; int addend; TYPE_1__* symbol; } ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3 (struct coff_section *VAR_0)
{
  int VAR_1;

  FUNC_2 (1);
  FUNC_1 ("section %s %d %d address %x size %x number %d nrelocs %d",
   VAR_0->name, VAR_0->code, VAR_0->data, VAR_0->address,VAR_0->size,
   VAR_0->number, VAR_0->nrelocs);
  FUNC_0 ();

  for (VAR_1 = 0; VAR_1 < VAR_0->nrelocs; VAR_1++)
    {
      FUNC_2 (0);
      FUNC_1 ("(%x %s %x)",
       VAR_0->relocs[VAR_1].offset,
       VAR_0->relocs[VAR_1].symbol->name,
       VAR_0->relocs[VAR_1].addend);
      FUNC_0 ();
    }

  FUNC_2 (-1);
}
