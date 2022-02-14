
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int bfd_vma ;
typedef scalar_t__ bfd_reloc_status_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_14__ {int flags; TYPE_3__* section; } ;
typedef TYPE_4__ asymbol ;
typedef int asection ;
struct TYPE_15__ {TYPE_1__* howto; } ;
typedef TYPE_5__ arelent ;
struct TYPE_13__ {TYPE_2__* output_section; } ;
struct TYPE_12__ {int * owner; } ;
struct TYPE_11__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,TYPE_4__*,TYPE_5__*,int *,int ,void*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int *,TYPE_4__*,int ,char**,int *) ;

bfd_reloc_status_type
FUNC_3 (bfd *VAR_7, arelent *VAR_8,
          asymbol *VAR_9, void *VAR_10,
          asection *VAR_11, bfd *VAR_12,
          char **VAR_13)
{
  bfd_boolean VAR_14;
  bfd_reloc_status_type VAR_15;
  bfd_vma VAR_16;


  if (VAR_8->howto->type == VAR_3
      && VAR_12 != ((void*)0)
      && (VAR_9->flags & VAR_1) == 0
      && (VAR_9->flags & VAR_0) != 0)
    {
      *VAR_13 = (char *)
 FUNC_0("literal relocation occurs for an external symbol");
      return VAR_6;
    }

  if (VAR_12 != ((void*)0))
    VAR_14 = VAR_4;
  else
    {
      VAR_14 = VAR_2;
      VAR_12 = VAR_9->section->output_section->owner;
    }

  VAR_15 = FUNC_2 (VAR_12, VAR_9, VAR_14, VAR_13,
      &VAR_16);
  if (VAR_15 != VAR_5)
    return VAR_15;

  return FUNC_1 (VAR_7, VAR_9, VAR_8,
     VAR_11, VAR_14,
     VAR_10, VAR_16);
}
