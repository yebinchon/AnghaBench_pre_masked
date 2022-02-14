
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_21__ {scalar_t__ value; TYPE_11__* section; } ;
struct TYPE_19__ {scalar_t__ link; } ;
struct TYPE_22__ {TYPE_4__ def; TYPE_2__ i; } ;
struct TYPE_23__ {scalar_t__ type; TYPE_5__ u; } ;
struct TYPE_14__ {scalar_t__ refcount; scalar_t__ offset; } ;
struct TYPE_26__ {scalar_t__ refcount; scalar_t__ offset; } ;
struct elf_link_hash_entry {int dynindx; int forced_local; TYPE_6__ root; int def_regular; scalar_t__ def_dynamic; int non_got_ref; int other; TYPE_10__ got; scalar_t__ needs_plt; TYPE_9__ plt; } ;
struct TYPE_20__ {int dynamic_sections_created; } ;
struct elf64_x86_64_link_hash_table {TYPE_3__ elf; void* tlsdesc_plt; TYPE_8__* srelplt; TYPE_1__* srelgot; TYPE_11__* sgot; TYPE_7__* sgotplt; TYPE_11__* splt; } ;
struct elf64_x86_64_link_hash_entry {struct elf64_x86_64_dyn_relocs* dyn_relocs; void* tlsdesc_got; } ;
struct elf64_x86_64_dyn_relocs {int count; int sec; struct elf64_x86_64_dyn_relocs* next; scalar_t__ pc_count; } ;
struct bfd_link_info {scalar_t__ shared; } ;
typedef void* bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_15__ {scalar_t__ size; } ;
typedef TYPE_11__ asection ;
struct TYPE_25__ {int size; int reloc_count; } ;
struct TYPE_24__ {void* size; } ;
struct TYPE_18__ {int size; } ;
struct TYPE_17__ {int tls_type; } ;
struct TYPE_16__ {TYPE_11__* sreloc; } ;
typedef int Elf64_External_Rela ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int,int ,struct elf_link_hash_entry*) ;
 int FUNC_5 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 void* FUNC_6 (struct elf64_x86_64_link_hash_table*) ;
 TYPE_13__* FUNC_7 (struct elf_link_hash_entry*) ;
 struct elf64_x86_64_link_hash_table* FUNC_8 (struct bfd_link_info*) ;
 TYPE_12__* FUNC_9 (int ) ;

__attribute__((used)) static bfd_boolean
FUNC_10 (struct elf_link_hash_entry *VAR_11, void * VAR_12)
{
  struct bfd_link_info *VAR_13;
  struct elf64_x86_64_link_hash_table *VAR_14;
  struct elf64_x86_64_link_hash_entry *VAR_15;
  struct elf64_x86_64_dyn_relocs *VAR_16;

  if (VAR_11->root.type == VAR_7)
    return VAR_6;

  if (VAR_11->root.type == VAR_10)
    VAR_11 = (struct elf_link_hash_entry *) VAR_11->root.u.i.link;

  VAR_13 = (struct bfd_link_info *) VAR_12;
  VAR_14 = FUNC_8 (VAR_13);

  if (VAR_14->elf.dynamic_sections_created
      && VAR_11->plt.refcount > 0)
    {


      if (VAR_11->dynindx == -1
   && !VAR_11->forced_local)
 {
   if (! FUNC_5 (VAR_13, VAR_11))
     return VAR_1;
 }

      if (VAR_13->shared
   || FUNC_4 (1, 0, VAR_11))
 {
   asection *VAR_17 = VAR_14->splt;



   if (VAR_17->size == 0)
     VAR_17->size += VAR_4;

   VAR_11->plt.offset = VAR_17->size;






   if (! VAR_13->shared
       && !VAR_11->def_regular)
     {
       VAR_11->root.u.def.section = VAR_17;
       VAR_11->root.u.def.value = VAR_11->plt.offset;
     }


   VAR_17->size += VAR_4;



   VAR_14->sgotplt->size += VAR_2;


   VAR_14->srelplt->size += sizeof (Elf64_External_Rela);
   VAR_14->srelplt->reloc_count++;
 }
      else
 {
   VAR_11->plt.offset = (bfd_vma) -1;
   VAR_11->needs_plt = 0;
 }
    }
  else
    {
      VAR_11->plt.offset = (bfd_vma) -1;
      VAR_11->needs_plt = 0;
    }

  VAR_15 = (struct elf64_x86_64_link_hash_entry *) VAR_11;
  VAR_15->tlsdesc_got = (bfd_vma) -1;



  if (VAR_11->got.refcount > 0
      && !VAR_13->shared
      && VAR_11->dynindx == -1
      && FUNC_7 (VAR_11)->tls_type == VAR_3)
    VAR_11->got.offset = (bfd_vma) -1;
  else if (VAR_11->got.refcount > 0)
    {
      asection *VAR_18;
      bfd_boolean VAR_19;
      int VAR_20 = FUNC_7 (VAR_11)->tls_type;



      if (VAR_11->dynindx == -1
   && !VAR_11->forced_local)
 {
   if (! FUNC_5 (VAR_13, VAR_11))
     return VAR_1;
 }

      if (FUNC_1 (VAR_20))
 {
   VAR_15->tlsdesc_got = VAR_14->sgotplt->size
     - FUNC_6 (VAR_14);
   VAR_14->sgotplt->size += 2 * VAR_2;
   VAR_11->got.offset = (bfd_vma) -2;
 }
      if (! FUNC_1 (VAR_20)
   || FUNC_2 (VAR_20))
 {
   VAR_18 = VAR_14->sgot;
   VAR_11->got.offset = VAR_18->size;
   VAR_18->size += VAR_2;
   if (FUNC_2 (VAR_20))
     VAR_18->size += VAR_2;
 }
      VAR_19 = VAR_14->elf.dynamic_sections_created;



      if ((FUNC_2 (VAR_20) && VAR_11->dynindx == -1)
   || VAR_20 == VAR_3)
 VAR_14->srelgot->size += sizeof (Elf64_External_Rela);
      else if (FUNC_2 (VAR_20))
 VAR_14->srelgot->size += 2 * sizeof (Elf64_External_Rela);
      else if (! FUNC_1 (VAR_20)
        && (FUNC_0 (VAR_11->other) == VAR_5
     || VAR_11->root.type != VAR_9)
        && (VAR_13->shared
     || FUNC_4 (VAR_19, 0, VAR_11)))
 VAR_14->srelgot->size += sizeof (Elf64_External_Rela);
      if (FUNC_1 (VAR_20))
 {
   VAR_14->srelplt->size += sizeof (Elf64_External_Rela);
   VAR_14->tlsdesc_plt = (bfd_vma) -1;
 }
    }
  else
    VAR_11->got.offset = (bfd_vma) -1;

  if (VAR_15->dyn_relocs == ((void*)0))
    return VAR_6;







  if (VAR_13->shared)
    {






      if (FUNC_3 (VAR_13, VAR_11))
 {
   struct elf64_x86_64_dyn_relocs **VAR_21;

   for (VAR_21 = &VAR_15->dyn_relocs; (VAR_16 = *VAR_21) != ((void*)0); )
     {
       VAR_16->count -= VAR_16->pc_count;
       VAR_16->pc_count = 0;
       if (VAR_16->count == 0)
  *VAR_21 = VAR_16->next;
       else
  VAR_21 = &VAR_16->next;
     }
 }



      if (VAR_15->dyn_relocs != ((void*)0)
   && VAR_11->root.type == VAR_9)
 {
   if (FUNC_0 (VAR_11->other) != VAR_5)
     VAR_15->dyn_relocs = ((void*)0);



   else if (VAR_11->dynindx == -1
     && !VAR_11->forced_local)
     {
       if (! FUNC_5 (VAR_13, VAR_11))
  return VAR_1;
     }
 }
    }
  else if (VAR_0)
    {




      if (!VAR_11->non_got_ref
   && ((VAR_11->def_dynamic
        && !VAR_11->def_regular)
       || (VAR_14->elf.dynamic_sections_created
    && (VAR_11->root.type == VAR_9
        || VAR_11->root.type == VAR_8))))
 {


   if (VAR_11->dynindx == -1
       && !VAR_11->forced_local)
     {
       if (! FUNC_5 (VAR_13, VAR_11))
  return VAR_1;
     }



   if (VAR_11->dynindx != -1)
     goto keep;
 }

      VAR_15->dyn_relocs = ((void*)0);

    keep: ;
    }


  for (VAR_16 = VAR_15->dyn_relocs; VAR_16 != ((void*)0); VAR_16 = VAR_16->next)
    {
      asection *VAR_22 = FUNC_9 (VAR_16->sec)->sreloc;
      VAR_22->size += VAR_16->count * sizeof (Elf64_External_Rela);
    }

  return VAR_6;
}
