
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct alpha_relax_info {int other; scalar_t__ gotobj; TYPE_12__* tsec; TYPE_3__* link_info; int abfd; TYPE_4__* relend; TYPE_4__* relocs; TYPE_12__* sec; } ;
typedef scalar_t__ bfd_vma ;
struct TYPE_20__ {scalar_t__ gotobj; } ;
struct TYPE_19__ {int r_addend; } ;
struct TYPE_18__ {TYPE_2__* hash; scalar_t__ keep_memory; } ;
struct TYPE_17__ {scalar_t__ creator; } ;
struct TYPE_16__ {scalar_t__ vma; } ;
struct TYPE_15__ {int reloc_count; TYPE_10__* owner; scalar_t__ output_offset; TYPE_1__* output_section; } ;
struct TYPE_14__ {scalar_t__ xvec; } ;
typedef int PTR ;
typedef TYPE_4__ Elf_Internal_Rela ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (int ,TYPE_12__*,int ,TYPE_4__*,scalar_t__) ;
 TYPE_9__* FUNC_1 (TYPE_10__*) ;
 TYPE_4__* FUNC_2 (TYPE_4__*,TYPE_4__*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static bfd_vma
FUNC_4 (struct alpha_relax_info *VAR_3, bfd_vma VAR_4)
{






  if ((VAR_3->other & VAR_2) == VAR_1)
    return VAR_4;



  else if ((VAR_3->other & VAR_2) == VAR_2)
    ;



  else
    {
      Elf_Internal_Rela *VAR_5, *VAR_6, *VAR_7, *VAR_8;
      bfd_vma VAR_9;


      if (VAR_3->sec == VAR_3->tsec)
 {
   VAR_5 = VAR_3->relocs;
   VAR_6 = VAR_3->relend;
   VAR_7 = ((void*)0);
 }
      else
 {
   VAR_5 = (FUNC_0
           (VAR_3->abfd, VAR_3->tsec, (PTR) ((void*)0),
    (Elf_Internal_Rela *) ((void*)0),
    VAR_3->link_info->keep_memory));
   if (VAR_5 == ((void*)0))
     return 0;
   VAR_6 = VAR_5 + VAR_3->tsec->reloc_count;
   VAR_7 = (VAR_3->link_info->keep_memory ? ((void*)0) : VAR_5);
 }


      VAR_9 = (VAR_4 - VAR_3->tsec->output_section->vma
      - VAR_3->tsec->output_offset);


      VAR_8 = (FUNC_2
  (VAR_5, VAR_6, VAR_9, VAR_0));

      if (!VAR_8 || VAR_8->r_addend != 4)
 {
   if (VAR_7)
     FUNC_3 (VAR_7);
   return 0;
 }
      if (VAR_7)
        FUNC_3 (VAR_7);
    }



  if (VAR_3->link_info->hash->creator != VAR_3->tsec->owner->xvec
      || VAR_3->gotobj != FUNC_1 (VAR_3->tsec->owner)->gotobj)
    return 0;

  return VAR_4 + 8;
}
