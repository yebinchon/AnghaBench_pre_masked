
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ppc_stub_hash_entry {int dummy; } ;
struct bfd_link_hash_table {int dummy; } ;
struct TYPE_9__ {int * glist; scalar_t__ offset; } ;
struct TYPE_8__ {int * glist; scalar_t__ offset; } ;
struct TYPE_7__ {int * glist; scalar_t__ refcount; } ;
struct TYPE_6__ {int * glist; scalar_t__ refcount; } ;
struct TYPE_10__ {struct bfd_link_hash_table root; TYPE_4__ init_plt_offset; TYPE_3__ init_got_offset; TYPE_2__ init_plt_refcount; TYPE_1__ init_got_refcount; } ;
struct ppc_link_hash_table {TYPE_5__ elf; int branch_hash_table; int stub_hash_table; } ;
struct ppc_link_hash_entry {int dummy; } ;
struct ppc_branch_hash_entry {int dummy; } ;
typedef int bfd_size_type ;
typedef int bfd ;


 int FUNC_0 (TYPE_5__*,int *,int ,int) ;
 int FUNC_1 (int *,int ,int) ;
 struct ppc_link_hash_table* FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (struct ppc_link_hash_table*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct bfd_link_hash_table *
FUNC_4 (bfd *VAR_3)
{
  struct ppc_link_hash_table *VAR_4;
  bfd_size_type VAR_5 = sizeof (struct ppc_link_hash_table);

  VAR_4 = FUNC_2 (VAR_5);
  if (VAR_4 == ((void*)0))
    return ((void*)0);

  if (!FUNC_0 (&VAR_4->elf, VAR_3, VAR_1,
          sizeof (struct ppc_link_hash_entry)))
    {
      FUNC_3 (VAR_4);
      return ((void*)0);
    }


  if (!FUNC_1 (&VAR_4->stub_hash_table, VAR_2,
       sizeof (struct ppc_stub_hash_entry)))
    return ((void*)0);


  if (!FUNC_1 (&VAR_4->branch_hash_table, VAR_0,
       sizeof (struct ppc_branch_hash_entry)))
    return ((void*)0);





  VAR_4->elf.init_got_refcount.refcount = 0;
  VAR_4->elf.init_got_refcount.glist = ((void*)0);
  VAR_4->elf.init_plt_refcount.refcount = 0;
  VAR_4->elf.init_plt_refcount.glist = ((void*)0);
  VAR_4->elf.init_got_offset.offset = 0;
  VAR_4->elf.init_got_offset.glist = ((void*)0);
  VAR_4->elf.init_plt_offset.offset = 0;
  VAR_4->elf.init_plt_offset.glist = ((void*)0);

  return &VAR_4->elf.root;
}
