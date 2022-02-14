
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int bfd_vma ;
typedef scalar_t__ bfd_reloc_status_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_15__ {int flags; TYPE_2__* section; } ;
typedef TYPE_3__ asymbol ;
struct TYPE_16__ {scalar_t__ output_offset; } ;
typedef TYPE_4__ asection ;
struct TYPE_17__ {int address; } ;
typedef TYPE_5__ arelent ;
struct TYPE_14__ {TYPE_1__* output_section; } ;
struct TYPE_13__ {int * owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,TYPE_3__*,TYPE_5__*,TYPE_4__*,int ,void*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*,int ,char**,int *) ;

__attribute__((used)) static bfd_reloc_status_type
FUNC_2 (bfd *VAR_5, arelent *VAR_6, asymbol *VAR_7,
     void *VAR_8, asection *VAR_9, bfd *VAR_10,
     char **VAR_11)
{
  bfd_boolean VAR_12;
  bfd_reloc_status_type VAR_13;
  bfd_vma VAR_14;



  if (VAR_10 != ((void*)0)
      && (VAR_7->flags & VAR_1) == 0
      && (VAR_7->flags & VAR_0) != 0)
    {
      VAR_6->address += VAR_9->output_offset;
      return VAR_4;
    }

  if (VAR_10 != ((void*)0))
    VAR_12 = VAR_3;
  else
    {
      VAR_12 = VAR_2;
      VAR_10 = VAR_7->section->output_section->owner;
    }

  VAR_13 = FUNC_1 (VAR_10, VAR_7, VAR_12, VAR_11,
        &VAR_14);
  if (VAR_13 != VAR_4)
    return VAR_13;

  return FUNC_0 (VAR_5, VAR_7, VAR_6,
     VAR_9, VAR_12,
     VAR_8, VAR_14);
}
