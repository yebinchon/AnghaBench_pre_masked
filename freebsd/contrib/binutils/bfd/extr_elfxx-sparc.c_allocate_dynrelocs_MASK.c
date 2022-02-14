
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_24__ {int value; TYPE_12__* section; } ;
struct TYPE_22__ {scalar_t__ link; } ;
struct TYPE_25__ {TYPE_5__ def; TYPE_3__ i; } ;
struct TYPE_26__ {scalar_t__ type; TYPE_6__ u; } ;
struct TYPE_21__ {scalar_t__ refcount; int offset; } ;
struct TYPE_27__ {scalar_t__ refcount; int offset; } ;
struct elf_link_hash_entry {int dynindx; scalar_t__ forced_local; TYPE_7__ root; scalar_t__ def_regular; scalar_t__ def_dynamic; int non_got_ref; int other; TYPE_2__ got; scalar_t__ needs_plt; TYPE_8__ plt; } ;
struct bfd_link_info {scalar_t__ symbolic; scalar_t__ shared; } ;
struct TYPE_23__ {int dynamic_sections_created; } ;
struct _bfd_sparc_elf_link_hash_table {int plt_header_size; TYPE_4__ elf; TYPE_1__* srelgot; TYPE_12__* sgot; TYPE_11__* srelplt2; TYPE_10__* sgotplt; scalar_t__ is_vxworks; TYPE_9__* srelplt; scalar_t__ plt_entry_size; TYPE_12__* splt; } ;
struct _bfd_sparc_elf_link_hash_entry {struct _bfd_sparc_elf_dyn_relocs* dyn_relocs; } ;
struct _bfd_sparc_elf_dyn_relocs {int count; int sec; struct _bfd_sparc_elf_dyn_relocs* next; scalar_t__ pc_count; } ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_17__ {int size; } ;
typedef TYPE_12__ asection ;
struct TYPE_28__ {int size; } ;
struct TYPE_20__ {int size; } ;
struct TYPE_19__ {int tls_type; } ;
struct TYPE_18__ {TYPE_12__* sreloc; } ;
struct TYPE_16__ {int size; } ;
struct TYPE_15__ {int size; } ;
typedef scalar_t__ PTR ;
typedef int Elf32_External_Rela ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct _bfd_sparc_elf_link_hash_table*) ;
 int FUNC_2 (struct _bfd_sparc_elf_link_hash_table*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int,scalar_t__,struct elf_link_hash_entry*) ;
 TYPE_14__* FUNC_4 (struct elf_link_hash_entry*) ;
 struct _bfd_sparc_elf_link_hash_table* FUNC_5 (struct bfd_link_info*) ;
 int FUNC_6 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (int ) ;
 TYPE_13__* FUNC_8 (int ) ;

__attribute__((used)) static bfd_boolean
FUNC_9 (struct elf_link_hash_entry *VAR_12, PTR VAR_13)
{
  struct bfd_link_info *VAR_14;
  struct _bfd_sparc_elf_link_hash_table *VAR_15;
  struct _bfd_sparc_elf_link_hash_entry *VAR_16;
  struct _bfd_sparc_elf_dyn_relocs *VAR_17;

  if (VAR_12->root.type == VAR_8)
    return VAR_6;

  if (VAR_12->root.type == VAR_11)



    VAR_12 = (struct elf_link_hash_entry *) VAR_12->root.u.i.link;

  VAR_14 = (struct bfd_link_info *) VAR_13;
  VAR_15 = FUNC_5 (VAR_14);

  if (VAR_15->elf.dynamic_sections_created
      && VAR_12->plt.refcount > 0)
    {


      if (VAR_12->dynindx == -1
   && !VAR_12->forced_local)
 {
   if (! FUNC_6 (VAR_14, VAR_12))
     return VAR_0;
 }

      if (FUNC_3 (1, VAR_14->shared, VAR_12))
 {
   asection *VAR_18 = VAR_15->splt;


   if (VAR_18->size == 0)
     {
       VAR_18->size = VAR_15->plt_header_size;


       if (VAR_15->is_vxworks && !VAR_14->shared)
  VAR_15->srelplt2->size = sizeof (Elf32_External_Rela) * 2;
     }



   if (VAR_18->size >= (FUNC_2(VAR_15) == 8 ?
     (((bfd_vma)1 << 31) << 1) : 0x400000))
     {
       FUNC_7 (VAR_7);
       return VAR_0;
     }

   if (FUNC_2(VAR_15) == 8
       && VAR_18->size >= VAR_4 * VAR_3)
     {
       bfd_vma VAR_19 = VAR_18->size - VAR_4 * VAR_3;


       VAR_19 = (VAR_19 % (160 * VAR_3)) / VAR_3;

       VAR_12->plt.offset = (VAR_18->size - (VAR_19 * 8));
     }
   else
     VAR_12->plt.offset = VAR_18->size;






   if (! VAR_14->shared
       && !VAR_12->def_regular)
     {
       VAR_12->root.u.def.section = VAR_18;
       VAR_12->root.u.def.value = VAR_12->plt.offset;
     }


   VAR_18->size += VAR_15->plt_entry_size;


   VAR_15->srelplt->size += FUNC_1 (VAR_15);

   if (VAR_15->is_vxworks)
     {

       VAR_15->sgotplt->size += 4;


       if (!VAR_14->shared)
  VAR_15->srelplt2->size += sizeof (Elf32_External_Rela) * 3;
     }
 }
      else
 {
   VAR_12->plt.offset = (bfd_vma) -1;
   VAR_12->needs_plt = 0;
 }
    }
  else
    {
      VAR_12->plt.offset = (bfd_vma) -1;
      VAR_12->needs_plt = 0;
    }



  if (VAR_12->got.refcount > 0
      && !VAR_14->shared
      && VAR_12->dynindx == -1
      && FUNC_4(VAR_12)->tls_type == VAR_2)
    VAR_12->got.offset = (bfd_vma) -1;
  else if (VAR_12->got.refcount > 0)
    {
      asection *VAR_20;
      bfd_boolean VAR_21;
      int VAR_22 = FUNC_4(VAR_12)->tls_type;



      if (VAR_12->dynindx == -1
   && !VAR_12->forced_local)
 {
   if (! FUNC_6 (VAR_14, VAR_12))
     return VAR_0;
 }

      VAR_20 = VAR_15->sgot;
      VAR_12->got.offset = VAR_20->size;
      VAR_20->size += FUNC_2 (VAR_15);

      if (VAR_22 == VAR_1)
 VAR_20->size += FUNC_2 (VAR_15);
      VAR_21 = VAR_15->elf.dynamic_sections_created;



      if ((VAR_22 == VAR_1 && VAR_12->dynindx == -1)
   || VAR_22 == VAR_2)
 VAR_15->srelgot->size += FUNC_1 (VAR_15);
      else if (VAR_22 == VAR_1)
 VAR_15->srelgot->size += 2 * FUNC_1 (VAR_15);
      else if (FUNC_3 (VAR_21, VAR_14->shared, VAR_12))
 VAR_15->srelgot->size += FUNC_1 (VAR_15);
    }
  else
    VAR_12->got.offset = (bfd_vma) -1;

  VAR_16 = (struct _bfd_sparc_elf_link_hash_entry *) VAR_12;
  if (VAR_16->dyn_relocs == ((void*)0))
    return VAR_6;







  if (VAR_14->shared)
    {
      if (VAR_12->def_regular
   && (VAR_12->forced_local
       || VAR_14->symbolic))
 {
   struct _bfd_sparc_elf_dyn_relocs **VAR_23;

   for (VAR_23 = &VAR_16->dyn_relocs; (VAR_17 = *VAR_23) != ((void*)0); )
     {
       VAR_17->count -= VAR_17->pc_count;
       VAR_17->pc_count = 0;
       if (VAR_17->count == 0)
  *VAR_23 = VAR_17->next;
       else
  VAR_23 = &VAR_17->next;
     }
 }



      if (VAR_16->dyn_relocs != ((void*)0)
   && VAR_12->root.type == VAR_10)
 {
   if (FUNC_0 (VAR_12->other) != VAR_5)
     VAR_16->dyn_relocs = ((void*)0);



   else if (VAR_12->dynindx == -1
     && !VAR_12->forced_local)
     {
       if (! FUNC_6 (VAR_14, VAR_12))
  return VAR_0;
     }
 }
    }
  else
    {




      if (!VAR_12->non_got_ref
   && ((VAR_12->def_dynamic
        && !VAR_12->def_regular)
       || (VAR_15->elf.dynamic_sections_created
    && (VAR_12->root.type == VAR_10
        || VAR_12->root.type == VAR_9))))
 {


   if (VAR_12->dynindx == -1
       && !VAR_12->forced_local)
     {
       if (! FUNC_6 (VAR_14, VAR_12))
  return VAR_0;
     }



   if (VAR_12->dynindx != -1)
     goto keep;
 }

      VAR_16->dyn_relocs = ((void*)0);

    keep: ;
    }


  for (VAR_17 = VAR_16->dyn_relocs; VAR_17 != ((void*)0); VAR_17 = VAR_17->next)
    {
      asection *VAR_24 = FUNC_8 (VAR_17->sec)->sreloc;
      VAR_24->size += VAR_17->count * FUNC_1 (VAR_15);
    }

  return VAR_6;
}
