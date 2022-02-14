
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_reloc_status_type ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
struct TYPE_15__ {int flags; TYPE_10__* section; scalar_t__ value; } ;
typedef TYPE_3__ asymbol ;
struct TYPE_16__ {int output_offset; } ;
typedef TYPE_4__ asection ;
struct TYPE_17__ {scalar_t__ address; scalar_t__ addend; TYPE_2__* howto; } ;
typedef TYPE_5__ arelent ;
struct TYPE_14__ {scalar_t__ partial_inplace; } ;
struct TYPE_13__ {scalar_t__ vma; int * owner; } ;
struct TYPE_12__ {scalar_t__ output_offset; TYPE_1__* output_section; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_10__*) ;
 int FUNC_4 (int *,scalar_t__,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (int *,TYPE_3__*,scalar_t__,char**,scalar_t__*) ;

__attribute__((used)) static bfd_reloc_status_type
FUNC_6 (bfd *VAR_6, arelent *VAR_7, asymbol *VAR_8,
     void *VAR_9, asection *VAR_10, bfd *VAR_11,
     char **VAR_12)
{
  bfd_boolean VAR_13;
  bfd_reloc_status_type VAR_14;
  bfd_vma VAR_15;
  bfd_vma VAR_16;
  bfd_vma VAR_17;


  if (VAR_11 != ((void*)0)
      && (VAR_8->flags & VAR_1) == 0
      && (VAR_8->flags & VAR_0) != 0)
    {
      *VAR_12 = (char *)
 FUNC_0("32bits gp relative relocation occurs for an external symbol");
      return VAR_5;
    }

  if (VAR_11 != ((void*)0))
    VAR_13 = VAR_3;
  else
    {
      VAR_13 = VAR_2;
      VAR_11 = VAR_8->section->output_section->owner;
    }

  VAR_14 = FUNC_5 (VAR_11, VAR_8, VAR_13,
        VAR_12, &VAR_15);
  if (VAR_14 != VAR_4)
    return VAR_14;

  if (FUNC_3 (VAR_8->section))
    VAR_16 = 0;
  else
    VAR_16 = VAR_8->value;

  VAR_16 += VAR_8->section->output_section->vma;
  VAR_16 += VAR_8->section->output_offset;

  if (VAR_7->address > FUNC_2 (VAR_6, VAR_10))
    return VAR_5;


  VAR_17 = VAR_7->addend;

  if (VAR_7->howto->partial_inplace)
    VAR_17 += FUNC_1 (VAR_6, (bfd_byte *) VAR_9 + VAR_7->address);




  if (! VAR_13
      || (VAR_8->flags & VAR_1) != 0)
    VAR_17 += VAR_16 - VAR_15;

  if (VAR_7->howto->partial_inplace)
    FUNC_4 (VAR_6, VAR_17, (bfd_byte *) VAR_9 + VAR_7->address);
  else
    VAR_7->addend = VAR_17;

  if (VAR_13)
    VAR_7->address += VAR_10->output_offset;

  return VAR_4;
}
