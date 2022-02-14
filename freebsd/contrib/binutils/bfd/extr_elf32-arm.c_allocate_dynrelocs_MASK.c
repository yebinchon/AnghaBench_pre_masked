
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_31__ {scalar_t__ value; TYPE_13__* section; } ;
struct TYPE_23__ {scalar_t__ link; } ;
struct TYPE_17__ {TYPE_9__ def; TYPE_1__ i; } ;
struct TYPE_30__ {char* string; } ;
struct TYPE_19__ {scalar_t__ type; TYPE_10__ u; TYPE_8__ root; } ;
struct TYPE_29__ {scalar_t__ refcount; scalar_t__ offset; } ;
struct TYPE_27__ {scalar_t__ refcount; scalar_t__ offset; } ;
struct elf_link_hash_entry {int dynindx; int forced_local; TYPE_12__ root; scalar_t__ def_regular; scalar_t__ def_dynamic; int non_got_ref; int other; void* type; TYPE_7__ got; scalar_t__ needs_plt; TYPE_5__ plt; } ;
struct elf32_arm_relocs_copied {int count; int section; struct elf32_arm_relocs_copied* next; scalar_t__ pc_count; } ;
struct TYPE_18__ {int dynamic_sections_created; scalar_t__ is_relocatable_executable; } ;
struct elf32_arm_link_hash_table {scalar_t__ plt_header_size; scalar_t__ plt_entry_size; TYPE_11__ root; int use_blx; TYPE_6__* srelgot; TYPE_13__* sgot; int symbian_p; TYPE_4__* srelplt2; scalar_t__ vxworks_p; TYPE_3__* srelplt; TYPE_2__* sgotplt; TYPE_13__* splt; } ;
struct elf32_arm_link_hash_entry {scalar_t__ plt_thumb_refcount; int plt_got_offset; struct elf32_arm_relocs_copied* relocs_copied; struct elf_link_hash_entry* export_glue; } ;
struct bfd_link_info {scalar_t__ shared; } ;
struct bfd_link_hash_entry {int dummy; } ;
typedef void* bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_20__ {scalar_t__ size; int owner; } ;
typedef TYPE_13__ asection ;
struct TYPE_28__ {int size; } ;
struct TYPE_26__ {int size; } ;
struct TYPE_25__ {int size; } ;
struct TYPE_24__ {int size; } ;
struct TYPE_22__ {int tls_type; } ;
struct TYPE_21__ {TYPE_13__* sreloc; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct elf32_arm_link_hash_table*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_5 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 int FUNC_6 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (int,scalar_t__,struct elf_link_hash_entry*) ;
 int FUNC_8 (struct bfd_link_info*,int ,char*,int ,TYPE_13__*,scalar_t__,int *,int,int,struct bfd_link_hash_entry**) ;
 int FUNC_9 () ;
 int FUNC_10 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 TYPE_15__* FUNC_11 (struct elf_link_hash_entry*) ;
 struct elf32_arm_link_hash_table* FUNC_12 (struct bfd_link_info*) ;
 TYPE_14__* FUNC_13 (int ) ;
 struct elf_link_hash_entry* FUNC_14 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 int FUNC_15 (char*,char*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_16 (struct elf_link_hash_entry *VAR_17, void * VAR_18)
{
  struct bfd_link_info *VAR_19;
  struct elf32_arm_link_hash_table *VAR_20;
  struct elf32_arm_link_hash_entry *VAR_21;
  struct elf32_arm_relocs_copied *VAR_22;

  VAR_21 = (struct elf32_arm_link_hash_entry *) VAR_17;

  if (VAR_17->root.type == VAR_12)
    return VAR_11;

  if (VAR_17->root.type == VAR_16)



    VAR_17 = (struct elf_link_hash_entry *) VAR_17->root.u.i.link;

  VAR_19 = (struct bfd_link_info *) VAR_18;
  VAR_20 = FUNC_12 (VAR_19);

  if (VAR_20->root.dynamic_sections_created
      && VAR_17->plt.refcount > 0)
    {


      if (VAR_17->dynindx == -1
   && !VAR_17->forced_local)
 {
   if (! FUNC_10 (VAR_19, VAR_17))
     return VAR_1;
 }

      if (VAR_19->shared
   || FUNC_7 (1, 0, VAR_17))
 {
   asection *VAR_23 = VAR_20->splt;



   if (VAR_23->size == 0)
     VAR_23->size += VAR_20->plt_header_size;

   VAR_17->plt.offset = VAR_23->size;



   if (!VAR_20->use_blx && VAR_21->plt_thumb_refcount > 0)
     {
       VAR_17->plt.offset += VAR_6;
       VAR_23->size += VAR_6;
     }






   if (! VAR_19->shared
       && !VAR_17->def_regular)
     {
       VAR_17->root.u.def.section = VAR_23;
       VAR_17->root.u.def.value = VAR_17->plt.offset;




       if (FUNC_2 (VAR_17->type) == VAR_8)
  VAR_17->type = FUNC_1 (FUNC_0 (VAR_17->type), VAR_9);
     }


   VAR_23->size += VAR_20->plt_entry_size;

   if (!VAR_20->symbian_p)
     {


       VAR_21->plt_got_offset = VAR_20->sgotplt->size;
       VAR_20->sgotplt->size += 4;
     }


   VAR_20->srelplt->size += FUNC_4 (VAR_20);




   if (VAR_20->vxworks_p && !VAR_19->shared)
     {


       if (VAR_17->plt.offset == VAR_20->plt_header_size)
  VAR_20->srelplt2->size += FUNC_4 (VAR_20);




       VAR_20->srelplt2->size += FUNC_4 (VAR_20) * 2;
     }
 }
      else
 {
   VAR_17->plt.offset = (bfd_vma) -1;
   VAR_17->needs_plt = 0;
 }
    }
  else
    {
      VAR_17->plt.offset = (bfd_vma) -1;
      VAR_17->needs_plt = 0;
    }

  if (VAR_17->got.refcount > 0)
    {
      asection *VAR_24;
      bfd_boolean VAR_25;
      int VAR_26 = FUNC_11 (VAR_17)->tls_type;
      int VAR_27;



      if (VAR_17->dynindx == -1
   && !VAR_17->forced_local)
 {
   if (! FUNC_10 (VAR_19, VAR_17))
     return VAR_1;
 }

      if (!VAR_20->symbian_p)
 {
   VAR_24 = VAR_20->sgot;
   VAR_17->got.offset = VAR_24->size;

   if (VAR_26 == VAR_5)
     FUNC_9 ();

   if (VAR_26 == VAR_2)

     VAR_24->size += 4;
   else
     {
       if (VAR_26 & VAR_3)

  VAR_24->size += 8;
       if (VAR_26 & VAR_4)

  VAR_24->size += 4;
     }

   VAR_25 = VAR_20->root.dynamic_sections_created;

   VAR_27 = 0;
   if (FUNC_7 (VAR_25, VAR_19->shared, VAR_17)
       && (!VAR_19->shared
    || !FUNC_6 (VAR_19, VAR_17)))
     VAR_27 = VAR_17->dynindx;

   if (VAR_26 != VAR_2
       && (VAR_19->shared || VAR_27 != 0)
       && (FUNC_3 (VAR_17->other) == VAR_10
    || VAR_17->root.type != VAR_15))
     {
       if (VAR_26 & VAR_4)
  VAR_20->srelgot->size += FUNC_4 (VAR_20);

       if (VAR_26 & VAR_3)
  VAR_20->srelgot->size += FUNC_4 (VAR_20);

       if ((VAR_26 & VAR_3) && VAR_27 != 0)
  VAR_20->srelgot->size += FUNC_4 (VAR_20);
     }
   else if ((FUNC_3 (VAR_17->other) == VAR_10
      || VAR_17->root.type != VAR_15)
     && (VAR_19->shared
         || FUNC_7 (VAR_25, 0, VAR_17)))
     VAR_20->srelgot->size += FUNC_4 (VAR_20);
 }
    }
  else
    VAR_17->got.offset = (bfd_vma) -1;


  if (!VAR_20->use_blx && VAR_17->dynindx != -1
      && VAR_17->def_regular
      && FUNC_2 (VAR_17->type) == VAR_8
      && FUNC_3 (VAR_17->other) == VAR_10)
    {
      struct elf_link_hash_entry * VAR_28;
      struct bfd_link_hash_entry * VAR_29;
      struct elf_link_hash_entry * VAR_30;
      char VAR_31[1024];
      asection *VAR_32;
      VAR_29 = ((void*)0);

      VAR_32 = VAR_17->root.u.def.section;
      FUNC_15(VAR_31, "__real_%s", VAR_17->root.root.string);
      FUNC_8 (VAR_19, VAR_32->owner,
     VAR_31, VAR_0, VAR_32,
     VAR_17->root.u.def.value,
     ((void*)0), VAR_11, VAR_1, &VAR_29);

      VAR_30 = (struct elf_link_hash_entry *) VAR_29;
      VAR_30->type = FUNC_1 (VAR_7, VAR_8);
      VAR_30->forced_local = 1;
      VAR_21->export_glue = VAR_30;
      VAR_28 = FUNC_14 (VAR_19, VAR_17);

      VAR_17->type = FUNC_1 (FUNC_0 (VAR_17->type), VAR_9);
      VAR_17->root.u.def.section = VAR_28->root.u.def.section;
      VAR_17->root.u.def.value = VAR_28->root.u.def.value & ~1;
    }

  if (VAR_21->relocs_copied == ((void*)0))
    return VAR_11;







  if (VAR_19->shared || VAR_20->root.is_relocatable_executable)
    {






      if (FUNC_5 (VAR_19, VAR_17))
 {
   struct elf32_arm_relocs_copied **VAR_33;

   for (VAR_33 = &VAR_21->relocs_copied; (VAR_22 = *VAR_33) != ((void*)0); )
     {
       VAR_22->count -= VAR_22->pc_count;
       VAR_22->pc_count = 0;
       if (VAR_22->count == 0)
  *VAR_33 = VAR_22->next;
       else
  VAR_33 = &VAR_22->next;
     }
 }



      if (VAR_21->relocs_copied != ((void*)0)
   && VAR_17->root.type == VAR_15)
 {
   if (FUNC_3 (VAR_17->other) != VAR_10)
     VAR_21->relocs_copied = ((void*)0);



   else if (VAR_17->dynindx == -1
     && !VAR_17->forced_local)
     {
       if (! FUNC_10 (VAR_19, VAR_17))
  return VAR_1;
     }
 }

      else if (VAR_20->root.is_relocatable_executable && VAR_17->dynindx == -1
        && VAR_17->root.type == VAR_13)
 {



   if (! FUNC_10 (VAR_19, VAR_17))
     return VAR_1;
 }

    }
  else
    {




      if (!VAR_17->non_got_ref
   && ((VAR_17->def_dynamic
        && !VAR_17->def_regular)
       || (VAR_20->root.dynamic_sections_created
    && (VAR_17->root.type == VAR_15
        || VAR_17->root.type == VAR_14))))
 {


   if (VAR_17->dynindx == -1
       && !VAR_17->forced_local)
     {
       if (! FUNC_10 (VAR_19, VAR_17))
  return VAR_1;
     }



   if (VAR_17->dynindx != -1)
     goto keep;
 }

      VAR_21->relocs_copied = ((void*)0);

    keep: ;
    }


  for (VAR_22 = VAR_21->relocs_copied; VAR_22 != ((void*)0); VAR_22 = VAR_22->next)
    {
      asection *VAR_34 = FUNC_13 (VAR_22->section)->sreloc;
      VAR_34->size += VAR_22->count * FUNC_4 (VAR_20);
    }

  return VAR_11;
}
