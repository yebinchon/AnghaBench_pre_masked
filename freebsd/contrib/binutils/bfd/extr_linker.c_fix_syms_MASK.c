
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ value; TYPE_5__* section; } ;
struct TYPE_8__ {struct bfd_link_hash_entry* link; } ;
struct TYPE_11__ {TYPE_3__ def; TYPE_1__ i; } ;
struct bfd_link_hash_entry {scalar_t__ type; TYPE_4__ u; } ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_12__ {int flags; scalar_t__ output_offset; scalar_t__ vma; struct TYPE_12__* next; TYPE_2__* owner; struct TYPE_12__* output_section; struct TYPE_12__* prev; } ;
typedef TYPE_5__ asection ;
struct TYPE_9__ {TYPE_5__* sections; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int *,TYPE_5__*) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (struct bfd_link_hash_entry *VAR_10, void *VAR_11)
{
  bfd *VAR_12 = (bfd *) VAR_11;

  if (VAR_10->type == VAR_9)
    VAR_10 = VAR_10->u.i.link;

  if (VAR_10->type == VAR_7
      || VAR_10->type == VAR_8)
    {
      asection *VAR_13 = VAR_10->u.def.section;
      if (VAR_13 != ((void*)0)
   && VAR_13->output_section != ((void*)0)
   && (VAR_13->output_section->flags & VAR_2) != 0
   && FUNC_0 (VAR_12, VAR_13->output_section))
 {
   asection *VAR_14, *VAR_15;

   VAR_10->u.def.value += VAR_13->output_offset + VAR_13->output_section->vma;


   for (VAR_15 = VAR_13->output_section->prev; VAR_15 != ((void*)0); VAR_15 = VAR_15->prev)
     if ((VAR_15->flags & VAR_2) == 0
  && !FUNC_0 (VAR_12, VAR_15))
       break;



   if (VAR_13->output_section->prev != ((void*)0))
     VAR_14 = VAR_13->output_section->prev->next;
   else
     VAR_14 = VAR_13->output_section->owner->sections;
   for (; VAR_14 != ((void*)0); VAR_14 = VAR_14->next)
     if ((VAR_14->flags & VAR_2) == 0
  && !FUNC_0 (VAR_12, VAR_14))
       break;




   if (VAR_15 == ((void*)0))
     {
       if (VAR_14 == ((void*)0))
  VAR_14 = VAR_6;
     }
   else if (VAR_14 == ((void*)0))
     VAR_14 = VAR_15;
   else if (((VAR_15->flags ^ VAR_14->flags)
      & (VAR_0 | VAR_4)) != 0)
     {
       if (((VAR_14->flags ^ VAR_13->flags)
     & (VAR_0 | VAR_4)) != 0)
  VAR_14 = VAR_15;
     }
   else if (((VAR_15->flags ^ VAR_14->flags) & VAR_3) != 0)
     {
       if (((VAR_14->flags ^ VAR_13->flags) & VAR_3) != 0)
  VAR_14 = VAR_15;
     }
   else if (((VAR_15->flags ^ VAR_14->flags) & VAR_1) != 0)
     {
       if (((VAR_14->flags ^ VAR_13->flags) & VAR_1) != 0)
  VAR_14 = VAR_15;
     }
   else
     {


       if (VAR_10->u.def.value < VAR_14->vma)
  VAR_14 = VAR_15;
     }

   VAR_10->u.def.value -= VAR_14->vma;
   VAR_10->u.def.section = VAR_14;
 }
    }

  return VAR_5;
}
