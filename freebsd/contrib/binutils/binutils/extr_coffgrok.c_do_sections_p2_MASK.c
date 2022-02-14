
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct coff_reloc {int symbol; int addend; int offset; } ;
struct coff_ofile {TYPE_1__* sections; } ;
struct TYPE_7__ {int native; } ;
typedef TYPE_2__ coff_symbol_type ;
struct TYPE_8__ {unsigned int reloc_count; int target_index; TYPE_4__* relocation; struct TYPE_8__* next; } ;
typedef TYPE_3__ asection ;
struct TYPE_9__ {scalar_t__* sym_ptr_ptr; int addend; int address; } ;
typedef TYPE_4__ arelent ;
struct TYPE_10__ {TYPE_3__* sections; } ;
struct TYPE_6__ {struct coff_reloc* relocs; } ;


 TYPE_5__* VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void
FUNC_0 (struct coff_ofile *VAR_3)
{
  asection *VAR_4;
  for (VAR_4 = VAR_0->sections; VAR_4; VAR_4 = VAR_4->next)
    {
      unsigned int VAR_5;

      for (VAR_5 = 0; VAR_5 < VAR_4->reloc_count; VAR_5++)
 {
   int VAR_6;
   int VAR_7 = VAR_4->target_index;
   struct coff_reloc *VAR_8 = VAR_3->sections[VAR_7].relocs + VAR_5;
   arelent *VAR_9 = VAR_4->relocation + VAR_5;
   VAR_8->offset = VAR_9->address;
   VAR_8->addend = VAR_9->addend;
   VAR_6 = ((coff_symbol_type *) (VAR_9->sym_ptr_ptr[0]))->native - VAR_1;
   VAR_8->symbol = VAR_2[VAR_6];
 }
    }
}
