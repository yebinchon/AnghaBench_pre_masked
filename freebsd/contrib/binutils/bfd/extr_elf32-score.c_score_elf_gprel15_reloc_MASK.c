
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
struct TYPE_17__ {scalar_t__ addend; int address; } ;
typedef TYPE_5__ arelent ;
struct TYPE_14__ {TYPE_1__* output_section; } ;
struct TYPE_13__ {int * owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,TYPE_3__*,int ,char**,int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*,TYPE_5__*,TYPE_4__*,int ,void*,int ) ;

__attribute__((used)) static bfd_reloc_status_type
FUNC_2 (bfd *VAR_4,
    arelent *VAR_5,
    asymbol *VAR_6,
    void * VAR_7,
    asection *VAR_8,
    bfd *VAR_9,
    char **VAR_10)
{
  bfd_boolean VAR_11;
  bfd_reloc_status_type VAR_12;
  bfd_vma VAR_13;

  if (VAR_9 != (bfd *) ((void*)0)
      && (VAR_6->flags & VAR_0) == 0 && VAR_5->addend == 0)
    {
      VAR_5->address += VAR_8->output_offset;
      return VAR_3;
    }
  if (VAR_9 != (bfd *) ((void*)0))
    VAR_11 = VAR_2;
  else
    {
      VAR_11 = VAR_1;
      VAR_9 = VAR_6->section->output_section->owner;
    }

  VAR_12 = FUNC_0 (VAR_9, VAR_6, VAR_11, VAR_10, &VAR_13);
  if (VAR_12 != VAR_3)
    return VAR_12;

  return FUNC_1 (VAR_4, VAR_6, VAR_5,
                                         VAR_8, VAR_11, VAR_7, VAR_13);
}
