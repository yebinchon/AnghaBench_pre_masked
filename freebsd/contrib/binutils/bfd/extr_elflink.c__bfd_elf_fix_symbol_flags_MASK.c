
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_20__ {struct elf_link_hash_entry* weakdef; } ;
struct TYPE_21__ {scalar_t__ link; } ;
struct TYPE_19__ {TYPE_12__* section; } ;
struct TYPE_22__ {TYPE_3__ i; TYPE_1__ def; } ;
struct TYPE_23__ {scalar_t__ type; TYPE_4__ u; } ;
struct elf_link_hash_entry {int ref_regular; int ref_regular_nonweak; int def_regular; int dynindx; int def_dynamic; TYPE_2__ u; TYPE_5__ root; int other; scalar_t__ needs_plt; scalar_t__ ref_dynamic; scalar_t__ non_elf; } ;
struct elf_info_failed {int failed; TYPE_6__* info; } ;
struct elf_backend_data {int (* elf_backend_copy_indirect_symbol ) (TYPE_6__*,struct elf_link_hash_entry*,struct elf_link_hash_entry*) ;int (* elf_backend_hide_symbol ) (TYPE_6__*,struct elf_link_hash_entry*,int) ;int (* elf_backend_fixup_symbol ) (TYPE_6__*,struct elf_link_hash_entry*) ;} ;
typedef int bfd_boolean ;
struct TYPE_24__ {int hash; scalar_t__ shared; } ;
struct TYPE_18__ {int flags; } ;
struct TYPE_17__ {TYPE_13__* owner; } ;
struct TYPE_16__ {scalar_t__ dynobj; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_6__*,struct elf_link_hash_entry*) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_6__*,struct elf_link_hash_entry*) ;
 scalar_t__ FUNC_4 (TYPE_13__*) ;
 scalar_t__ FUNC_5 (TYPE_12__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_10__* FUNC_6 (TYPE_6__*) ;
 struct elf_backend_data* FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_6__*,struct elf_link_hash_entry*) ;
 int FUNC_10 (TYPE_6__*,struct elf_link_hash_entry*,int) ;
 int FUNC_11 (TYPE_6__*,struct elf_link_hash_entry*,int) ;
 int FUNC_12 (TYPE_6__*,struct elf_link_hash_entry*,struct elf_link_hash_entry*) ;

bfd_boolean
FUNC_13 (struct elf_link_hash_entry *VAR_11,
      struct elf_info_failed *VAR_12)
{
  const struct elf_backend_data *VAR_13 = ((void*)0);





  if (VAR_11->non_elf)
    {
      while (VAR_11->root.type == VAR_8)
 VAR_11 = (struct elf_link_hash_entry *) VAR_11->root.u.i.link;

      if (VAR_11->root.type != VAR_6
   && VAR_11->root.type != VAR_7)
 {
   VAR_11->ref_regular = 1;
   VAR_11->ref_regular_nonweak = 1;
 }
      else
 {
   if (VAR_11->root.u.def.section->owner != ((void*)0)
       && (FUNC_4 (VAR_11->root.u.def.section->owner)
    == VAR_10))
     {
       VAR_11->ref_regular = 1;
       VAR_11->ref_regular_nonweak = 1;
     }
   else
     VAR_11->def_regular = 1;
 }

      if (VAR_11->dynindx == -1
   && (VAR_11->def_dynamic
       || VAR_11->ref_dynamic))
 {
   if (! FUNC_3 (VAR_12->info, VAR_11))
     {
       VAR_12->failed = VAR_5;
       return VAR_1;
     }
 }
    }
  else
    {






      if ((VAR_11->root.type == VAR_6
    || VAR_11->root.type == VAR_7)
   && !VAR_11->def_regular
   && (VAR_11->root.u.def.section->owner != ((void*)0)
       ? (FUNC_4 (VAR_11->root.u.def.section->owner)
   != VAR_10)
       : (FUNC_5 (VAR_11->root.u.def.section)
   && !VAR_11->def_dynamic)))
 VAR_11->def_regular = 1;
    }


  if (FUNC_6 (VAR_12->info)->dynobj)
    {
      VAR_13 = FUNC_7 (FUNC_6 (VAR_12->info)->dynobj);
      if (VAR_13->elf_backend_fixup_symbol
   && !(*VAR_13->elf_backend_fixup_symbol) (VAR_12->info, VAR_11))
 return VAR_1;
    }






  if (VAR_11->root.type == VAR_6
      && !VAR_11->def_regular
      && VAR_11->ref_regular
      && !VAR_11->def_dynamic
      && (VAR_11->root.u.def.section->owner->flags & VAR_0) == 0)
    VAR_11->def_regular = 1;







  if (VAR_11->needs_plt
      && VAR_12->info->shared
      && FUNC_8 (VAR_12->info->hash)
      && (FUNC_2 (VAR_12->info, VAR_11)
   || FUNC_1 (VAR_11->other) != VAR_2)
      && VAR_11->def_regular)
    {
      bfd_boolean VAR_14;

      VAR_14 = (FUNC_1 (VAR_11->other) == VAR_4
       || FUNC_1 (VAR_11->other) == VAR_3);
      (*VAR_13->elf_backend_hide_symbol) (VAR_12->info, VAR_11, VAR_14);
    }



  if (FUNC_1 (VAR_11->other) != VAR_2
      && VAR_11->root.type == VAR_9)
    {
      const struct elf_backend_data *VAR_15;
      VAR_15 = FUNC_7 (FUNC_6 (VAR_12->info)->dynobj);
      (*VAR_15->elf_backend_hide_symbol) (VAR_12->info, VAR_11, VAR_5);
    }




  if (VAR_11->u.weakdef != ((void*)0))
    {
      struct elf_link_hash_entry *VAR_16;

      VAR_16 = VAR_11->u.weakdef;
      if (VAR_11->root.type == VAR_8)
 VAR_11 = (struct elf_link_hash_entry *) VAR_11->root.u.i.link;

      FUNC_0 (VAR_11->root.type == VAR_6
    || VAR_11->root.type == VAR_7);
      FUNC_0 (VAR_16->root.type == VAR_6
    || VAR_16->root.type == VAR_7);
      FUNC_0 (VAR_16->def_dynamic);




      if (VAR_16->def_regular)
 VAR_11->u.weakdef = ((void*)0);
      else
 (*VAR_13->elf_backend_copy_indirect_symbol) (VAR_12->info, VAR_16,
        VAR_11);
    }

  return VAR_5;
}
