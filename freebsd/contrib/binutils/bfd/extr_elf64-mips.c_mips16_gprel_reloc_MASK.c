
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int bfd_vma ;
typedef scalar_t__ bfd_reloc_status_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_17__ {int flags; TYPE_2__* section; } ;
typedef TYPE_4__ asymbol ;
struct TYPE_18__ {int output_offset; } ;
typedef TYPE_5__ asection ;
struct TYPE_19__ {int address; TYPE_3__* howto; } ;
typedef TYPE_6__ arelent ;
struct TYPE_16__ {int type; } ;
struct TYPE_15__ {TYPE_1__* output_section; } ;
struct TYPE_14__ {int * owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int,int *) ;
 int FUNC_1 (int *,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int *,TYPE_4__*,TYPE_6__*,TYPE_5__*,int ,void*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int *,TYPE_4__*,int ,char**,int *) ;

__attribute__((used)) static bfd_reloc_status_type
FUNC_4 (bfd *VAR_5, arelent *VAR_6, asymbol *VAR_7,
      void *VAR_8, asection *VAR_9, bfd *VAR_10,
      char **VAR_11)
{
  bfd_boolean VAR_12;
  bfd_reloc_status_type VAR_13;
  bfd_byte *VAR_14;
  bfd_vma VAR_15;



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

  VAR_13 = FUNC_3 (VAR_10, VAR_7, VAR_12, VAR_11,
        &VAR_15);
  if (VAR_13 != VAR_4)
    return VAR_13;

  VAR_14 = (bfd_byte *) VAR_8 + VAR_6->address;
  FUNC_1 (VAR_5, VAR_6->howto->type, VAR_2,
       VAR_14);
  VAR_13 = FUNC_2 (VAR_5, VAR_7, VAR_6,
           VAR_9, VAR_12,
           VAR_8, VAR_15);
  FUNC_0 (VAR_5, VAR_6->howto->type, !VAR_12,
     VAR_14);

  return VAR_13;
}
