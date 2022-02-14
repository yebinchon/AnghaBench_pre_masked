
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ bfd_vma ;
typedef int bfd_signed_vma ;
typedef scalar_t__ bfd_reloc_status_type ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
struct TYPE_12__ {int flags; TYPE_5__* section; scalar_t__ value; } ;
typedef TYPE_2__ asymbol ;
struct TYPE_13__ {int output_offset; } ;
typedef TYPE_3__ asection ;
struct TYPE_14__ {scalar_t__ address; int addend; TYPE_7__* howto; } ;
typedef TYPE_4__ arelent ;
struct TYPE_16__ {scalar_t__ partial_inplace; } ;
struct TYPE_15__ {scalar_t__ output_offset; TYPE_1__* output_section; } ;
struct TYPE_11__ {scalar_t__ vma; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (TYPE_7__*,int *,int ,int *) ;
 scalar_t__ FUNC_2 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

bfd_reloc_status_type
FUNC_4 (bfd *VAR_3, asymbol *VAR_4,
          arelent *VAR_5, asection *VAR_6,
          bfd_boolean VAR_7, void *VAR_8, bfd_vma VAR_9)
{
  bfd_vma VAR_10;
  bfd_signed_vma VAR_11;
  bfd_reloc_status_type VAR_12;

  if (FUNC_3 (VAR_4->section))
    VAR_10 = 0;
  else
    VAR_10 = VAR_4->value;

  VAR_10 += VAR_4->section->output_section->vma;
  VAR_10 += VAR_4->section->output_offset;

  if (VAR_5->address > FUNC_2 (VAR_3, VAR_6))
    return VAR_2;


  VAR_11 = VAR_5->addend;

  FUNC_0 (VAR_11, 16);




  if (! VAR_7
      || (VAR_4->flags & VAR_0) != 0)
    VAR_11 += VAR_10 - VAR_9;

  if (VAR_5->howto->partial_inplace)
    {
      VAR_12 = FUNC_1 (VAR_5->howto, VAR_3, VAR_11,
           (bfd_byte *) VAR_8
           + VAR_5->address);
      if (VAR_12 != VAR_1)
 return VAR_12;
    }
  else
    VAR_5->addend = VAR_11;

  if (VAR_7)
    VAR_5->address += VAR_6->output_offset;

  return VAR_1;
}
