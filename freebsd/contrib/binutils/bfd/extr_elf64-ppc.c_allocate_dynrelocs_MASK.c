
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


struct TYPE_22__ {int dynamic_sections_created; } ;
struct ppc_link_hash_table {TYPE_5__ elf; TYPE_10__* relplt; TYPE_10__* glink; TYPE_10__* plt; } ;
struct ppc_link_hash_entry {int tls_mask; struct ppc_dyn_relocs* dyn_relocs; } ;
struct ppc_dyn_relocs {int count; int sec; struct ppc_dyn_relocs* next; scalar_t__ pc_count; } ;
struct TYPE_23__ {scalar_t__ refcount; scalar_t__ offset; } ;
struct plt_entry {TYPE_6__ plt; struct plt_entry* next; } ;
struct TYPE_26__ {scalar_t__ refcount; scalar_t__ offset; } ;
struct got_entry {int tls_type; scalar_t__ addend; scalar_t__ owner; TYPE_9__ got; struct got_entry* next; } ;
struct TYPE_19__ {scalar_t__ link; } ;
struct TYPE_20__ {TYPE_2__ i; } ;
struct TYPE_21__ {scalar_t__ type; TYPE_3__ u; } ;
struct TYPE_25__ {struct got_entry* glist; } ;
struct TYPE_24__ {struct plt_entry* plist; } ;
struct elf_link_hash_entry {int dynindx; int forced_local; int def_regular; scalar_t__ def_dynamic; int non_got_ref; int other; TYPE_4__ root; TYPE_8__ got; scalar_t__ needs_plt; TYPE_7__ plt; } ;
struct bfd_link_info {scalar_t__ shared; } ;
typedef void* bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_14__ {scalar_t__ size; } ;
typedef TYPE_10__ asection ;
struct TYPE_18__ {int size; } ;
struct TYPE_17__ {TYPE_10__* sreloc; } ;
struct TYPE_16__ {TYPE_1__* relgot; TYPE_10__* got; } ;
struct TYPE_15__ {int refcount; } ;
typedef int Elf64_External_Rela ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int,scalar_t__,struct elf_link_hash_entry*) ;
 int FUNC_3 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_13__* FUNC_4 (int ) ;
 TYPE_12__* FUNC_5 (scalar_t__) ;
 TYPE_11__* FUNC_6 (scalar_t__) ;
 struct ppc_link_hash_table* FUNC_7 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (struct elf_link_hash_entry *VAR_15, void *VAR_16)
{
  struct bfd_link_info *VAR_17;
  struct ppc_link_hash_table *VAR_18;
  asection *VAR_19;
  struct ppc_link_hash_entry *VAR_20;
  struct ppc_dyn_relocs *VAR_21;
  struct got_entry *VAR_22;

  if (VAR_15->root.type == VAR_12)
    return VAR_11;

  if (VAR_15->root.type == VAR_14)
    VAR_15 = (struct elf_link_hash_entry *) VAR_15->root.u.i.link;

  VAR_17 = (struct bfd_link_info *) VAR_16;
  VAR_18 = FUNC_7 (VAR_17);

  if (VAR_18->elf.dynamic_sections_created
      && VAR_15->dynindx != -1
      && FUNC_2 (1, VAR_17->shared, VAR_15))
    {
      struct plt_entry *VAR_23;
      bfd_boolean VAR_24 = VAR_1;
      for (VAR_23 = VAR_15->plt.plist; VAR_23 != ((void*)0); VAR_23 = VAR_23->next)
 if (VAR_23->plt.refcount > 0)
   {


     VAR_19 = VAR_18->plt;
     if (VAR_19->size == 0)
       VAR_19->size += VAR_4;

     VAR_23->plt.offset = VAR_19->size;


     VAR_19->size += VAR_3;


     VAR_19 = VAR_18->glink;
     if (VAR_19->size == 0)
       VAR_19->size += VAR_2;

     if (VAR_19->size >= VAR_2 + 32768*2*4)
       VAR_19->size += 4;
     VAR_19->size += 2*4;


     VAR_19 = VAR_18->relplt;
     VAR_19->size += sizeof (Elf64_External_Rela);
     VAR_24 = VAR_11;
   }
 else
   VAR_23->plt.offset = (bfd_vma) -1;
      if (!VAR_24)
 {
   VAR_15->plt.plist = ((void*)0);
   VAR_15->needs_plt = 0;
 }
    }
  else
    {
      VAR_15->plt.plist = ((void*)0);
      VAR_15->needs_plt = 0;
    }

  VAR_20 = (struct ppc_link_hash_entry *) VAR_15;


  if ((VAR_20->tls_mask & VAR_10) != 0)
    for (VAR_22 = VAR_15->got.glist; VAR_22 != ((void*)0); VAR_22 = VAR_22->next)
      if (VAR_22->got.refcount > 0
   && (VAR_22->tls_type & VAR_6) != 0)
 {


   struct got_entry *VAR_25;
   for (VAR_25 = VAR_15->got.glist; VAR_25 != ((void*)0); VAR_25 = VAR_25->next)
     if (VAR_25->got.refcount > 0
  && (VAR_25->tls_type & VAR_9) != 0
  && VAR_25->addend == VAR_22->addend
  && VAR_25->owner == VAR_22->owner)
       {
  VAR_22->got.refcount = 0;
  break;
       }


   if (VAR_22->got.refcount != 0)
     VAR_22->tls_type = VAR_8 | VAR_9;
 }

  for (VAR_22 = VAR_15->got.glist; VAR_22 != ((void*)0); VAR_22 = VAR_22->next)
    if (VAR_22->got.refcount > 0)
      {
 bfd_boolean VAR_26;




 if (VAR_15->dynindx == -1
     && !VAR_15->forced_local)
   {
     if (! FUNC_3 (VAR_17, VAR_15))
       return VAR_1;
   }

 if ((VAR_22->tls_type & VAR_7) != 0
     && !VAR_15->def_dynamic)
   {
     FUNC_6 (VAR_22->owner)->refcount += 1;
     VAR_22->got.offset = (bfd_vma) -1;
     continue;
   }

 VAR_19 = FUNC_5 (VAR_22->owner)->got;
 VAR_22->got.offset = VAR_19->size;
 VAR_19->size
   += (VAR_22->tls_type & VAR_20->tls_mask & (VAR_6 | VAR_7)) ? 16 : 8;
 VAR_26 = VAR_18->elf.dynamic_sections_created;
 if ((VAR_17->shared
      || FUNC_2 (VAR_26, 0, VAR_15))
     && (FUNC_0 (VAR_15->other) == VAR_5
  || VAR_15->root.type != VAR_13))
   FUNC_5 (VAR_22->owner)->relgot->size
     += (VAR_22->tls_type & VAR_20->tls_mask & VAR_6
  ? 2 * sizeof (Elf64_External_Rela)
  : sizeof (Elf64_External_Rela));
      }
    else
      VAR_22->got.offset = (bfd_vma) -1;

  if (VAR_20->dyn_relocs == ((void*)0))
    return VAR_11;







  if (VAR_17->shared)
    {






      if (FUNC_1 (VAR_17, VAR_15))
 {
   struct ppc_dyn_relocs **VAR_27;

   for (VAR_27 = &VAR_20->dyn_relocs; (VAR_21 = *VAR_27) != ((void*)0); )
     {
       VAR_21->count -= VAR_21->pc_count;
       VAR_21->pc_count = 0;
       if (VAR_21->count == 0)
  *VAR_27 = VAR_21->next;
       else
  VAR_27 = &VAR_21->next;
     }
 }



      if (VAR_20->dyn_relocs != ((void*)0)
   && VAR_15->root.type == VAR_13)
 {
   if (FUNC_0 (VAR_15->other) != VAR_5)
     VAR_20->dyn_relocs = ((void*)0);



   else if (VAR_15->dynindx == -1
     && !VAR_15->forced_local)
     {
       if (! FUNC_3 (VAR_17, VAR_15))
  return VAR_1;
     }
 }
    }
  else if (VAR_0)
    {




      if (!VAR_15->non_got_ref
   && VAR_15->def_dynamic
   && !VAR_15->def_regular)
 {


   if (VAR_15->dynindx == -1
       && !VAR_15->forced_local)
     {
       if (! FUNC_3 (VAR_17, VAR_15))
  return VAR_1;
     }



   if (VAR_15->dynindx != -1)
     goto keep;
 }

      VAR_20->dyn_relocs = ((void*)0);

    keep: ;
    }


  for (VAR_21 = VAR_20->dyn_relocs; VAR_21 != ((void*)0); VAR_21 = VAR_21->next)
    {
      asection *VAR_28 = FUNC_4 (VAR_21->sec)->sreloc;
      VAR_28->size += VAR_21->count * sizeof (Elf64_External_Rela);
    }

  return VAR_11;
}
