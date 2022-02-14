
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {struct got_entry* glist; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_9__ {int dynindx; scalar_t__ dynstr_index; TYPE_3__ got; TYPE_1__ root; int needs_plt; int ref_regular_nonweak; int ref_regular; int ref_dynamic; int non_got_ref; scalar_t__ dynamic_adjusted; } ;
struct ppc_link_hash_entry {TYPE_4__ elf; int tls_mask; int is_func_descriptor; int is_func; struct ppc_dyn_relocs* dyn_relocs; } ;
struct ppc_dyn_relocs {scalar_t__ sec; struct ppc_dyn_relocs* next; scalar_t__ count; scalar_t__ pc_count; } ;
struct TYPE_7__ {scalar_t__ refcount; } ;
struct got_entry {scalar_t__ addend; scalar_t__ owner; scalar_t__ tls_type; struct got_entry* next; TYPE_2__ got; } ;
struct elf_link_hash_entry {int dummy; } ;
struct bfd_link_info {int dummy; } ;
struct TYPE_10__ {int dynstr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 TYPE_5__* FUNC_1 (struct bfd_link_info*) ;
 int FUNC_2 (struct ppc_link_hash_entry*,struct ppc_link_hash_entry*) ;

__attribute__((used)) static void
FUNC_3 (struct bfd_link_info *VAR_2,
    struct elf_link_hash_entry *VAR_3,
    struct elf_link_hash_entry *VAR_4)
{
  struct ppc_link_hash_entry *VAR_5, *VAR_6;

  VAR_5 = (struct ppc_link_hash_entry *) VAR_3;
  VAR_6 = (struct ppc_link_hash_entry *) VAR_4;


  if (VAR_6->dyn_relocs != ((void*)0))
    {
      if (VAR_5->dyn_relocs != ((void*)0))
 {
   struct ppc_dyn_relocs **VAR_7;
   struct ppc_dyn_relocs *VAR_8;



   for (VAR_7 = &VAR_6->dyn_relocs; (VAR_8 = *VAR_7) != ((void*)0); )
     {
       struct ppc_dyn_relocs *VAR_9;

       for (VAR_9 = VAR_5->dyn_relocs; VAR_9 != ((void*)0); VAR_9 = VAR_9->next)
  if (VAR_9->sec == VAR_8->sec)
    {
      VAR_9->pc_count += VAR_8->pc_count;
      VAR_9->count += VAR_8->count;
      *VAR_7 = VAR_8->next;
      break;
    }
       if (VAR_9 == ((void*)0))
  VAR_7 = &VAR_8->next;
     }
   *VAR_7 = VAR_5->dyn_relocs;
 }

      VAR_5->dyn_relocs = VAR_6->dyn_relocs;
      VAR_6->dyn_relocs = ((void*)0);
    }

  VAR_5->is_func |= VAR_6->is_func;
  VAR_5->is_func_descriptor |= VAR_6->is_func_descriptor;
  VAR_5->tls_mask |= VAR_6->tls_mask;




  if (!(VAR_0
 && VAR_6->elf.root.type != VAR_1
 && VAR_5->elf.dynamic_adjusted))
    VAR_5->elf.non_got_ref |= VAR_6->elf.non_got_ref;

  VAR_5->elf.ref_dynamic |= VAR_6->elf.ref_dynamic;
  VAR_5->elf.ref_regular |= VAR_6->elf.ref_regular;
  VAR_5->elf.ref_regular_nonweak |= VAR_6->elf.ref_regular_nonweak;
  VAR_5->elf.needs_plt |= VAR_6->elf.needs_plt;


  if (VAR_6->elf.root.type != VAR_1)
    return;



  if (VAR_6->elf.got.glist != ((void*)0))
    {
      if (VAR_5->elf.got.glist != ((void*)0))
 {
   struct got_entry **VAR_10;
   struct got_entry *VAR_11;

   for (VAR_10 = &VAR_6->elf.got.glist; (VAR_11 = *VAR_10) != ((void*)0); )
     {
       struct got_entry *VAR_12;

       for (VAR_12 = VAR_5->elf.got.glist; VAR_12 != ((void*)0); VAR_12 = VAR_12->next)
  if (VAR_12->addend == VAR_11->addend
      && VAR_12->owner == VAR_11->owner
      && VAR_12->tls_type == VAR_11->tls_type)
    {
      VAR_12->got.refcount += VAR_11->got.refcount;
      *VAR_10 = VAR_11->next;
      break;
    }
       if (VAR_12 == ((void*)0))
  VAR_10 = &VAR_11->next;
     }
   *VAR_10 = VAR_5->elf.got.glist;
 }

      VAR_5->elf.got.glist = VAR_6->elf.got.glist;
      VAR_6->elf.got.glist = ((void*)0);
    }


  FUNC_2 (VAR_6, VAR_5);

  if (VAR_6->elf.dynindx != -1)
    {
      if (VAR_5->elf.dynindx != -1)
 FUNC_0 (FUNC_1 (VAR_2)->dynstr,
    VAR_5->elf.dynstr_index);
      VAR_5->elf.dynindx = VAR_6->elf.dynindx;
      VAR_5->elf.dynstr_index = VAR_6->elf.dynstr_index;
      VAR_6->elf.dynindx = -1;
      VAR_6->elf.dynstr_index = 0;
    }
}
