
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* section; } ;
struct TYPE_8__ {TYPE_1__ def; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_2__ u; } ;
struct xcoff_link_hash_entry {int flags; TYPE_4__* toc_section; TYPE_3__ root; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_boolean ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_4__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct bfd_link_info*,TYPE_4__*) ;

__attribute__((used)) static inline bfd_boolean
FUNC_2 (struct bfd_link_info *VAR_6, struct xcoff_link_hash_entry *VAR_7)
{
  if ((VAR_7->flags & VAR_3) != 0)
    return VAR_2;

  VAR_7->flags |= VAR_3;
  if (VAR_7->root.type == VAR_4
      || VAR_7->root.type == VAR_5)
    {
      asection *VAR_8;

      VAR_8 = VAR_7->root.u.def.section;
      if (! FUNC_0 (VAR_8)
   && (VAR_8->flags & VAR_1) == 0)
 {
   if (! FUNC_1 (VAR_6, VAR_8))
     return VAR_0;
 }
    }

  if (VAR_7->toc_section != ((void*)0)
      && (VAR_7->toc_section->flags & VAR_1) == 0)
    {
      if (! FUNC_1 (VAR_6, VAR_7->toc_section))
 return VAR_0;
    }

  return VAR_2;
}
