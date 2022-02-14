
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfd_link_hash_table {int dummy; } ;
struct TYPE_6__ {int * glist; scalar_t__ offset; } ;
struct TYPE_5__ {int * glist; scalar_t__ refcount; } ;
struct TYPE_8__ {struct bfd_link_hash_table root; TYPE_2__ init_plt_offset; TYPE_1__ init_plt_refcount; } ;
struct ppc_elf_link_hash_table {int plt_entry_size; int plt_slot_size; int plt_initial_entry_size; TYPE_4__ elf; TYPE_3__* sdata; } ;
struct ppc_elf_link_hash_entry {int dummy; } ;
typedef int bfd ;
struct TYPE_7__ {char* name; char* sym_name; char* bss_name; } ;


 int FUNC_0 (TYPE_4__*,int *,int ,int) ;
 struct ppc_elf_link_hash_table* FUNC_1 (int) ;
 int FUNC_2 (struct ppc_elf_link_hash_table*) ;
 int VAR_0 ;

__attribute__((used)) static struct bfd_link_hash_table *
FUNC_3 (bfd *VAR_1)
{
  struct ppc_elf_link_hash_table *VAR_2;

  VAR_2 = FUNC_1 (sizeof (struct ppc_elf_link_hash_table));
  if (VAR_2 == ((void*)0))
    return ((void*)0);

  if (!FUNC_0 (&VAR_2->elf, VAR_1,
          VAR_0,
          sizeof (struct ppc_elf_link_hash_entry)))
    {
      FUNC_2 (VAR_2);
      return ((void*)0);
    }

  VAR_2->elf.init_plt_refcount.refcount = 0;
  VAR_2->elf.init_plt_refcount.glist = ((void*)0);
  VAR_2->elf.init_plt_offset.offset = 0;
  VAR_2->elf.init_plt_offset.glist = ((void*)0);

  VAR_2->sdata[0].name = ".sdata";
  VAR_2->sdata[0].sym_name = "_SDA_BASE_";
  VAR_2->sdata[0].bss_name = ".sbss";

  VAR_2->sdata[1].name = ".sdata2";
  VAR_2->sdata[1].sym_name = "_SDA2_BASE_";
  VAR_2->sdata[1].bss_name = ".sbss2";

  VAR_2->plt_entry_size = 12;
  VAR_2->plt_slot_size = 8;
  VAR_2->plt_initial_entry_size = 72;

  return &VAR_2->elf.root;
}
