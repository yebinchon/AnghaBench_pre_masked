
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
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_29__ {TYPE_6__* section; } ;
struct TYPE_26__ {TYPE_3__* p; } ;
struct TYPE_23__ {TYPE_5__* abfd; } ;
struct TYPE_30__ {TYPE_7__ def; TYPE_4__ c; TYPE_1__ undef; } ;
struct TYPE_31__ {scalar_t__ type; TYPE_8__ u; } ;
struct TYPE_19__ {TYPE_9__ root; } ;
struct sunos_link_hash_entry {int flags; int dynindx; TYPE_10__ root; } ;
struct bfd_link_info {TYPE_11__* hash; } ;
struct bfd_link_hash_entry {int dummy; } ;
typedef int flagword ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_21__ {int flags; scalar_t__ xvec; } ;
typedef TYPE_12__ bfd ;
typedef int asection ;
struct TYPE_28__ {TYPE_5__* owner; } ;
struct TYPE_27__ {int flags; } ;
struct TYPE_25__ {TYPE_2__* section; } ;
struct TYPE_24__ {TYPE_5__* owner; } ;
struct TYPE_22__ {int dynsymcount; } ;
struct TYPE_20__ {scalar_t__ creator; } ;


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
 int VAR_10 ;
 int FUNC_0 (struct bfd_link_info*,TYPE_12__*,char const*,int,int *,int ,char const*,int ,int ,struct bfd_link_hash_entry**) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int * VAR_16 ;
 scalar_t__ FUNC_3 (TYPE_12__*,struct bfd_link_info*,char const*,int ,int ,int ) ;
 int * FUNC_4 (TYPE_12__*) ;
 TYPE_13__* FUNC_5 (struct bfd_link_info*) ;
 struct sunos_link_hash_entry* FUNC_6 (TYPE_13__*,char const*,int ,int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (struct bfd_link_info *VAR_17,
        bfd *VAR_18,
        const char *VAR_19,
        flagword VAR_20,
        asection *VAR_21,
        bfd_vma VAR_22,
        const char *VAR_23,
        bfd_boolean VAR_24,
        bfd_boolean VAR_25,
        struct bfd_link_hash_entry **VAR_26)
{
  struct sunos_link_hash_entry *VAR_27;
  int VAR_28;

  if ((VAR_20 & (VAR_1 | VAR_2 | VAR_0)) != 0
      || ! FUNC_2 (VAR_21))
    VAR_27 = FUNC_6 (FUNC_5 (VAR_17), VAR_19, VAR_10, VAR_24,
    VAR_4);
  else
    VAR_27 = ((struct sunos_link_hash_entry *)
  FUNC_3 (VAR_18, VAR_17, VAR_19, VAR_10, VAR_24, VAR_4));
  if (VAR_27 == ((void*)0))
    return VAR_4;

  if (VAR_26 != ((void*)0))
    *VAR_26 = (struct bfd_link_hash_entry *) VAR_27;




  if ((VAR_18->flags & VAR_3) != 0
      && FUNC_1 (VAR_21))
    VAR_21 = FUNC_4 (VAR_18);

  if (! FUNC_2 (VAR_21)
      && VAR_27->root.root.type != VAR_14
      && VAR_27->root.root.type != VAR_15
      && VAR_27->root.root.type != VAR_13)
    {


      if ((VAR_18->flags & VAR_3) != 0)
 {




   VAR_21 = VAR_16;
 }
      else if (VAR_27->root.root.type == VAR_12
        && VAR_27->root.root.u.def.section->owner != ((void*)0)
        && (VAR_27->root.root.u.def.section->owner->flags & VAR_3) != 0)
 {



   VAR_27->root.root.type = VAR_15;
   VAR_27->root.root.u.undef.abfd = VAR_27->root.root.u.def.section->owner;
 }
      else if (VAR_27->root.root.type == VAR_11
        && (VAR_27->root.root.u.c.p->section->owner->flags & VAR_3) != 0)
 {




   VAR_27->root.root.type = VAR_15;
   VAR_27->root.root.u.undef.abfd = VAR_27->root.root.u.c.p->section->owner;
 }
    }

  if ((VAR_18->flags & VAR_3) != 0
      && VAR_18->xvec == VAR_17->hash->creator
      && (VAR_27->flags & VAR_5) != 0)





    VAR_21 = VAR_16;
  else if ((VAR_20 & VAR_0) != 0
    && (VAR_18->flags & VAR_3) == 0
    && VAR_27->root.root.type == VAR_12
    && VAR_27->root.root.u.def.section->owner != ((void*)0)
    && (VAR_27->root.root.u.def.section->owner->flags & VAR_3) != 0)



    VAR_27->root.root.type = VAR_14;


  if (! FUNC_0 (VAR_17, VAR_18, VAR_19, VAR_20, VAR_21,
       VAR_22, VAR_23, VAR_24, VAR_25,
       VAR_26))
    return VAR_4;

  if (VAR_18->xvec == VAR_17->hash->creator)
    {





      if ((VAR_18->flags & VAR_3) == 0)
 {
   if (FUNC_2 (VAR_21))
     VAR_28 = VAR_9;
   else
     VAR_28 = VAR_7;
 }
      else
 {
   if (FUNC_2 (VAR_21))
     VAR_28 = VAR_8;
   else
     VAR_28 = VAR_6;
 }
      VAR_27->flags |= VAR_28;

      if (VAR_27->dynindx == -1
   && (VAR_27->flags & (VAR_7 | VAR_9)) != 0)
 {
   ++FUNC_5 (VAR_17)->dynsymcount;
   VAR_27->dynindx = -2;
 }

      if ((VAR_20 & VAR_0) != 0
   && (VAR_18->flags & VAR_3) == 0)
 VAR_27->flags |= VAR_5;
    }

  return VAR_10;
}
