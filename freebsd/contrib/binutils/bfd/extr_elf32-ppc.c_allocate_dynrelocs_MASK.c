
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_17__ {int dynamic_sections_created; } ;
struct TYPE_26__ {int refcount; } ;
struct ppc_elf_link_hash_table {scalar_t__ plt_type; scalar_t__ plt_initial_entry_size; int plt_slot_size; int plt_entry_size; TYPE_6__* relgot; TYPE_11__ elf; TYPE_5__ tlsld_got; TYPE_4__* sgotplt; TYPE_3__* srelplt2; TYPE_2__* relplt; scalar_t__ emit_stub_syms; TYPE_14__* glink; TYPE_14__* plt; } ;
struct TYPE_22__ {scalar_t__ value; TYPE_14__* section; } ;
struct TYPE_29__ {scalar_t__ link; } ;
struct TYPE_30__ {TYPE_1__ def; TYPE_8__ i; } ;
struct TYPE_16__ {scalar_t__ type; TYPE_9__ u; } ;
struct TYPE_28__ {scalar_t__ refcount; scalar_t__ offset; } ;
struct TYPE_18__ {struct plt_entry* plist; } ;
struct elf_link_hash_entry {int dynindx; int forced_local; int def_regular; scalar_t__ def_dynamic; int non_got_ref; int other; TYPE_10__ root; TYPE_7__ got; scalar_t__ needs_plt; TYPE_12__ plt; } ;
struct ppc_elf_link_hash_entry {int tls_mask; struct ppc_elf_dyn_relocs* dyn_relocs; struct elf_link_hash_entry elf; } ;
struct ppc_elf_dyn_relocs {int count; int sec; struct ppc_elf_dyn_relocs* next; scalar_t__ pc_count; } ;
struct TYPE_19__ {scalar_t__ refcount; scalar_t__ offset; } ;
struct plt_entry {TYPE_13__ plt; scalar_t__ glink_offset; struct plt_entry* next; } ;
struct bfd_link_info {scalar_t__ shared; scalar_t__ pie; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_20__ {scalar_t__ size; } ;
typedef TYPE_14__ asection ;
struct TYPE_27__ {unsigned int size; } ;
struct TYPE_25__ {int size; } ;
struct TYPE_24__ {int size; } ;
struct TYPE_23__ {int size; } ;
struct TYPE_21__ {TYPE_14__* sreloc; } ;
typedef int Elf32_External_Rela ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_2 (int,int ,struct elf_link_hash_entry*) ;
 int FUNC_3 (struct plt_entry*,struct elf_link_hash_entry*,struct bfd_link_info*) ;
 scalar_t__ FUNC_4 (struct ppc_elf_link_hash_table*,unsigned int) ;
 int FUNC_5 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 TYPE_15__* FUNC_6 (int ) ;
 struct ppc_elf_link_hash_table* FUNC_7 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (struct elf_link_hash_entry *VAR_20, void *VAR_21)
{
  struct bfd_link_info *VAR_22 = VAR_21;
  struct ppc_elf_link_hash_entry *VAR_23;
  struct ppc_elf_link_hash_table *VAR_24;
  struct ppc_elf_dyn_relocs *VAR_25;

  if (VAR_20->root.type == VAR_17)
    return VAR_14;

  if (VAR_20->root.type == VAR_19)



    VAR_20 = (struct elf_link_hash_entry *) VAR_20->root.u.i.link;

  VAR_24 = FUNC_7 (VAR_22);
  if (VAR_24->elf.dynamic_sections_created)
    {
      struct plt_entry *VAR_26;
      bfd_boolean VAR_27 = VAR_1;
      bfd_vma VAR_28 = 0, VAR_29 = 0;

      for (VAR_26 = VAR_20->plt.plist; VAR_26 != ((void*)0); VAR_26 = VAR_26->next)
 if (VAR_26->plt.refcount > 0)
   {

     if (VAR_20->dynindx == -1
  && !VAR_20->forced_local)
       {
  if (! FUNC_5 (VAR_22, VAR_20))
    return VAR_1;
       }

     if (VAR_22->shared
  || FUNC_2 (1, 0, VAR_20))
       {
  asection *VAR_30 = VAR_24->plt;

  if (VAR_24->plt_type == VAR_3)
    {
      if (!VAR_27)
        {
   VAR_28 = VAR_30->size;
   VAR_30->size += 4;
        }
      VAR_26->plt.offset = VAR_28;

      VAR_30 = VAR_24->glink;
      if (!VAR_27 || VAR_22->shared || VAR_22->pie)
        {
   VAR_29 = VAR_30->size;
   VAR_30->size += VAR_2;
        }
      if (!VAR_27
   && !VAR_22->shared
   && !VAR_20->def_regular)
        {
   VAR_20->root.u.def.section = VAR_30;
   VAR_20->root.u.def.value = VAR_29;
        }
      VAR_26->glink_offset = VAR_29;

      if (VAR_24->emit_stub_syms
   && !FUNC_3 (VAR_26, VAR_20, VAR_22))
        return VAR_1;
    }
  else
    {
      if (!VAR_27)
        {


   if (VAR_30->size == 0)
     VAR_30->size += VAR_24->plt_initial_entry_size;





   VAR_28 = (VAR_24->plt_initial_entry_size
          + (VAR_24->plt_slot_size
      * ((VAR_30->size
          - VAR_24->plt_initial_entry_size)
         / VAR_24->plt_entry_size)));







   if (! VAR_22->shared
       && !VAR_20->def_regular)
     {
       VAR_20->root.u.def.section = VAR_30;
       VAR_20->root.u.def.value = VAR_28;
     }


   VAR_30->size += VAR_24->plt_entry_size;


   if (VAR_24->plt_type == VAR_5
       && (VAR_30->size - VAR_24->plt_initial_entry_size)
    / VAR_24->plt_entry_size
          > VAR_4)
     VAR_30->size += VAR_24->plt_entry_size;
        }
      VAR_26->plt.offset = VAR_28;
    }


  if (!VAR_27)
    {
      VAR_24->relplt->size += sizeof (Elf32_External_Rela);

      if (VAR_24->plt_type == VAR_6)
        {

   if (!VAR_22->shared)
     {
       if (VAR_26->plt.offset
    == (bfd_vma) VAR_24->plt_initial_entry_size)
         {
    VAR_24->srelplt2->size
      += sizeof (Elf32_External_Rela)
          * VAR_15;
         }

       VAR_24->srelplt2->size
         += sizeof (Elf32_External_Rela)
      * VAR_16;
     }



   VAR_24->sgotplt->size += 4;
        }
      VAR_27 = VAR_14;
    }
       }
     else
       VAR_26->plt.offset = (bfd_vma) -1;
   }
 else
   VAR_26->plt.offset = (bfd_vma) -1;

      if (!VAR_27)
 {
   VAR_20->plt.plist = ((void*)0);
   VAR_20->needs_plt = 0;
 }
    }
  else
    {
      VAR_20->plt.plist = ((void*)0);
      VAR_20->needs_plt = 0;
    }

  VAR_23 = (struct ppc_elf_link_hash_entry *) VAR_20;
  if (VAR_23->elf.got.refcount > 0)
    {

      if (VAR_23->elf.dynindx == -1
   && !VAR_23->elf.forced_local)
 {
   if (!FUNC_5 (VAR_22, &VAR_23->elf))
     return VAR_1;
 }

      if (VAR_23->tls_mask == (VAR_11 | VAR_10)
   && !VAR_23->elf.def_dynamic)
 {

   VAR_24->tlsld_got.refcount += 1;
   VAR_23->elf.got.offset = (bfd_vma) -1;
 }
      else
 {
   bfd_boolean VAR_31;
   unsigned int VAR_32 = 0;
   if ((VAR_23->tls_mask & VAR_11) != 0)
     {
       if ((VAR_23->tls_mask & VAR_10) != 0)
  VAR_32 += 8;
       if ((VAR_23->tls_mask & VAR_9) != 0)
  VAR_32 += 8;
       if ((VAR_23->tls_mask & (VAR_12 | VAR_13)) != 0)
  VAR_32 += 4;
       if ((VAR_23->tls_mask & VAR_8) != 0)
  VAR_32 += 4;
     }
   else
     VAR_32 += 4;
   VAR_23->elf.got.offset = FUNC_4 (VAR_24, VAR_32);
   VAR_31 = VAR_24->elf.dynamic_sections_created;
   if ((VAR_22->shared
        || FUNC_2 (VAR_31, 0, &VAR_23->elf))
       && (FUNC_0 (VAR_23->elf.other) == VAR_7
    || VAR_23->elf.root.type != VAR_18))
     {


       if ((VAR_23->tls_mask & VAR_10) != 0)
  VAR_32 -= 4;
       VAR_24->relgot->size += VAR_32 * (sizeof (Elf32_External_Rela) / 4);
     }
 }
    }
  else
    VAR_23->elf.got.offset = (bfd_vma) -1;

  if (VAR_23->dyn_relocs == ((void*)0))
    return VAR_14;







  if (VAR_22->shared)
    {






      if (FUNC_1 (VAR_22, VAR_20))
 {
   struct ppc_elf_dyn_relocs **VAR_33;

   for (VAR_33 = &VAR_23->dyn_relocs; (VAR_25 = *VAR_33) != ((void*)0); )
     {
       VAR_25->count -= VAR_25->pc_count;
       VAR_25->pc_count = 0;
       if (VAR_25->count == 0)
  *VAR_33 = VAR_25->next;
       else
  VAR_33 = &VAR_25->next;
     }
 }



      if (VAR_23->dyn_relocs != ((void*)0)
   && VAR_20->root.type == VAR_18)
 {
   if (FUNC_0 (VAR_20->other) != VAR_7)
     VAR_23->dyn_relocs = ((void*)0);



   else if (VAR_20->dynindx == -1
     && !VAR_20->forced_local)
     {
       if (! FUNC_5 (VAR_22, VAR_20))
  return VAR_1;
     }
 }
    }
  else if (VAR_0)
    {




      if (!VAR_20->non_got_ref
   && VAR_20->def_dynamic
   && !VAR_20->def_regular)
 {


   if (VAR_20->dynindx == -1
       && !VAR_20->forced_local)
     {
       if (! FUNC_5 (VAR_22, VAR_20))
  return VAR_1;
     }



   if (VAR_20->dynindx != -1)
     goto keep;
 }

      VAR_23->dyn_relocs = ((void*)0);

    keep: ;
    }


  for (VAR_25 = VAR_23->dyn_relocs; VAR_25 != ((void*)0); VAR_25 = VAR_25->next)
    {
      asection *VAR_34 = FUNC_6 (VAR_25->sec)->sreloc;
      VAR_34->size += VAR_25->count * sizeof (Elf32_External_Rela);
    }

  return VAR_14;
}
