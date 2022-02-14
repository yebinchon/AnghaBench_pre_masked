
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ value; TYPE_9__* section; } ;
struct TYPE_13__ {int abfd; } ;
struct TYPE_17__ {TYPE_4__ def; TYPE_1__ undef; } ;
struct TYPE_15__ {char* string; } ;
struct TYPE_18__ {scalar_t__ type; TYPE_5__ u; TYPE_3__ root; } ;
struct xcoff_link_hash_entry {int flags; int ldindx; int * ldsym; TYPE_6__ root; struct xcoff_link_hash_entry* descriptor; } ;
struct xcoff_import_file {char const* path; char const* file; char const* member; struct xcoff_import_file* next; } ;
struct bfd_link_info {TYPE_2__* callbacks; } ;
struct bfd_link_hash_entry {int dummy; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_20__ {int owner; } ;
struct TYPE_19__ {struct xcoff_import_file* imports; } ;
struct TYPE_14__ {int (* multiple_definition ) (struct bfd_link_info*,char*,int ,TYPE_9__*,scalar_t__,int *,TYPE_9__*,scalar_t__) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 TYPE_9__* VAR_6 ;
 struct xcoff_import_file* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_9__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 int FUNC_5 (struct bfd_link_info*,char*,int ,TYPE_9__*,scalar_t__,int *,TYPE_9__*,scalar_t__) ;
 TYPE_7__* FUNC_6 (struct bfd_link_info*) ;
 struct xcoff_link_hash_entry* FUNC_7 (TYPE_7__*,char*,int ,int ,int ) ;

bfd_boolean
FUNC_8 (bfd *VAR_11,
    struct bfd_link_info *VAR_12,
    struct bfd_link_hash_entry *VAR_13,
    bfd_vma VAR_14,
    const char *VAR_15,
    const char *VAR_16,
    const char *VAR_17,
    unsigned int VAR_18)
{
  struct xcoff_link_hash_entry *VAR_19 = (struct xcoff_link_hash_entry *) VAR_13;

  if (FUNC_2 (VAR_11) != VAR_10)
    return VAR_1;




  if (VAR_19->root.root.string[0] == '.'
      && VAR_19->root.type == VAR_9
      && VAR_14 == (bfd_vma) -1)
    {
      struct xcoff_link_hash_entry *VAR_20;

      VAR_20 = VAR_19->descriptor;
      if (VAR_20 == ((void*)0))
 {
   VAR_20 = FUNC_7 (FUNC_6 (VAR_12),
     VAR_19->root.root.string + 1,
     VAR_1, VAR_0, VAR_1);
   if (VAR_20 == ((void*)0))
     return VAR_0;
   if (VAR_20->root.type == VAR_8)
     {
       VAR_20->root.type = VAR_9;
       VAR_20->root.u.undef.abfd = VAR_19->root.u.undef.abfd;
     }
   VAR_20->flags |= VAR_4;
   FUNC_0 ((VAR_20->flags & VAR_3) == 0
        && (VAR_19->flags & VAR_4) == 0);
   VAR_20->descriptor = VAR_19;
   VAR_19->descriptor = VAR_20;
 }




      if (VAR_20->root.type == VAR_9)
 VAR_19 = VAR_20;
    }

  VAR_19->flags |= (VAR_5 | VAR_18);

  if (VAR_14 != (bfd_vma) -1)
    {
      if (VAR_19->root.type == VAR_7
   && (! FUNC_3 (VAR_19->root.u.def.section)
       || VAR_19->root.u.def.value != VAR_14))
 {
   if (! ((*VAR_12->callbacks->multiple_definition)
   (VAR_12, VAR_19->root.root.string, VAR_19->root.u.def.section->owner,
    VAR_19->root.u.def.section, VAR_19->root.u.def.value,
    VAR_11, VAR_6, VAR_14)))
     return VAR_0;
 }

      VAR_19->root.type = VAR_7;
      VAR_19->root.u.def.section = VAR_6;
      VAR_19->root.u.def.value = VAR_14;
    }



  FUNC_0 (VAR_19->ldsym == ((void*)0));
  FUNC_0 ((VAR_19->flags & VAR_2) == 0);
  if (VAR_15 == ((void*)0))
    VAR_19->ldindx = -1;
  else
    {
      unsigned int VAR_21;
      struct xcoff_import_file **VAR_22;



      for (VAR_22 = &FUNC_6 (VAR_12)->imports, VAR_21 = 1;
    *VAR_22 != ((void*)0);
    VAR_22 = &(*VAR_22)->next, ++VAR_21)
 {
   if (FUNC_4 ((*VAR_22)->path, VAR_15) == 0
       && FUNC_4 ((*VAR_22)->file, VAR_16) == 0
       && FUNC_4 ((*VAR_22)->member, VAR_17) == 0)
     break;
 }

      if (*VAR_22 == ((void*)0))
 {
   struct xcoff_import_file *VAR_23;
   bfd_size_type VAR_24 = sizeof (* VAR_23);

   VAR_23 = FUNC_1 (VAR_11, VAR_24);
   if (VAR_23 == ((void*)0))
     return VAR_0;
   VAR_23->next = ((void*)0);
   VAR_23->path = VAR_15;
   VAR_23->file = VAR_16;
   VAR_23->member = VAR_17;
   *VAR_22 = VAR_23;
 }

      VAR_19->ldindx = VAR_21;
    }

  return VAR_1;
}
