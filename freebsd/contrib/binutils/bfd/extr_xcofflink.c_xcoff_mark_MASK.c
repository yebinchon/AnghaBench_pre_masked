
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_17__ ;
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_12__ ;


struct TYPE_25__ {char* string; } ;
struct TYPE_26__ {TYPE_2__ root; int type; } ;
struct xcoff_link_hash_entry {int flags; TYPE_4__* descriptor; TYPE_3__ root; } ;
struct internal_reloc {size_t r_symndx; int r_type; } ;
struct bfd_link_info {int keep_memory; TYPE_1__* hash; } ;
typedef int bfd_boolean ;
struct TYPE_28__ {int flags; scalar_t__ reloc_count; TYPE_7__* owner; } ;
typedef TYPE_5__ asection ;
struct TYPE_30__ {scalar_t__ xvec; } ;
struct TYPE_29__ {int first_symndx; int last_symndx; } ;
struct TYPE_27__ {int flags; } ;
struct TYPE_24__ {scalar_t__ creator; } ;
struct TYPE_23__ {int * relocs; int keep_relocs; } ;
struct TYPE_22__ {TYPE_5__** csects; } ;
struct TYPE_21__ {int ldrel_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_17__* FUNC_1 (TYPE_7__*,TYPE_5__*) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (TYPE_7__*) ;
 struct xcoff_link_hash_entry** FUNC_4 (TYPE_7__*) ;
 TYPE_13__* FUNC_5 (TYPE_7__*) ;
 TYPE_12__* FUNC_6 (struct bfd_link_info*) ;
 int FUNC_7 (struct bfd_link_info*,struct xcoff_link_hash_entry*) ;
 struct internal_reloc* FUNC_8 (TYPE_7__*,TYPE_5__*,int ,int *,int ,int *) ;
 TYPE_6__* FUNC_9 (TYPE_7__*,TYPE_5__*) ;

__attribute__((used)) static bfd_boolean
FUNC_10 (struct bfd_link_info *VAR_15, asection *VAR_16)
{
  if (FUNC_0 (VAR_16)
      || (VAR_16->flags & VAR_1) != 0)
    return VAR_3;

  VAR_16->flags |= VAR_1;

  if (VAR_16->owner->xvec == VAR_15->hash->creator
      && FUNC_1 (VAR_16->owner, VAR_16) != ((void*)0)
      && FUNC_9 (VAR_16->owner, VAR_16) != ((void*)0))
    {
      struct xcoff_link_hash_entry **VAR_17, **VAR_18;
      struct internal_reloc *VAR_19, *VAR_20;


      VAR_17 = (FUNC_4 (VAR_16->owner)
     + FUNC_9 (VAR_16->owner, VAR_16)->first_symndx);
      VAR_18 = (FUNC_4 (VAR_16->owner)
        + FUNC_9 (VAR_16->owner, VAR_16)->last_symndx);
      for (; VAR_17 < VAR_18; VAR_17++)
 {
   struct xcoff_link_hash_entry *VAR_21;

   VAR_21 = *VAR_17;
   if (VAR_21 != ((void*)0)
       && (VAR_21->flags & VAR_9) == 0)
     {
       if (! FUNC_7 (VAR_15, VAR_21))
  return VAR_0;
     }
 }


      if ((VAR_16->flags & VAR_2) != 0
   && VAR_16->reloc_count > 0)
 {
   VAR_19 = FUNC_8 (VAR_16->owner, VAR_16, VAR_3,
         ((void*)0), VAR_0, ((void*)0));
   if (VAR_19 == ((void*)0))
     return VAR_0;
   VAR_20 = VAR_19 + VAR_16->reloc_count;
   for (; VAR_19 < VAR_20; VAR_19++)
     {
       asection *VAR_22;
       struct xcoff_link_hash_entry *VAR_23;

       if ((unsigned int) VAR_19->r_symndx
    > FUNC_3 (VAR_16->owner))
  continue;

       VAR_23 = FUNC_4 (VAR_16->owner)[VAR_19->r_symndx];
       if (VAR_23 != ((void*)0)
    && (VAR_23->flags & VAR_9) == 0)
  {
    if (! FUNC_7 (VAR_15, VAR_23))
      return VAR_0;
  }

       VAR_22 = FUNC_5 (VAR_16->owner)->csects[VAR_19->r_symndx];
       if (VAR_22 != ((void*)0)
    && (VAR_22->flags & VAR_1) == 0)
  {
    if (! FUNC_10 (VAR_15, VAR_22))
      return VAR_0;
  }



       switch (VAR_19->r_type)
  {
  default:
    if (VAR_23 == ((void*)0)
        || VAR_23->root.type == VAR_11
        || VAR_23->root.type == VAR_12
        || VAR_23->root.type == VAR_10
        || ((VAR_23->flags & VAR_4) != 0
     && (VAR_23->root.type == VAR_13
         || VAR_23->root.type == VAR_14)
     && VAR_23->root.root.string[0] == '.'
     && VAR_23->descriptor != ((void*)0)
     && ((VAR_23->descriptor->flags & VAR_5) != 0
         || ((VAR_23->descriptor->flags & VAR_7) != 0
      && (VAR_23->descriptor->flags
          & VAR_6) == 0))))
      break;

  case 134:
  case 135:
  case 133:
  case 132:
    ++FUNC_6 (VAR_15)->ldrel_count;
    if (VAR_23 != ((void*)0))
      VAR_23->flags |= VAR_8;
    break;
  case 130:
  case 136:
  case 131:
  case 129:
  case 128:


    break;
  }
     }

   if (! VAR_15->keep_memory
       && FUNC_1 (VAR_16->owner, VAR_16) != ((void*)0)
       && FUNC_1 (VAR_16->owner, VAR_16)->relocs != ((void*)0)
       && ! FUNC_1 (VAR_16->owner, VAR_16)->keep_relocs)
     {
       FUNC_2 (FUNC_1 (VAR_16->owner, VAR_16)->relocs);
       FUNC_1 (VAR_16->owner, VAR_16)->relocs = ((void*)0);
     }
 }
    }

  return VAR_3;
}
