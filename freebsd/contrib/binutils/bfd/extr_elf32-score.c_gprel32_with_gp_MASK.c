
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ bfd_vma ;
typedef int bfd_reloc_status_type ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
struct TYPE_13__ {int flags; TYPE_9__* section; scalar_t__ value; } ;
typedef TYPE_3__ asymbol ;
struct TYPE_14__ {int output_offset; } ;
typedef TYPE_4__ asection ;
struct TYPE_15__ {scalar_t__ address; scalar_t__ addend; TYPE_2__* howto; } ;
typedef TYPE_5__ arelent ;
struct TYPE_16__ {scalar_t__ output_offset; TYPE_1__* output_section; } ;
struct TYPE_12__ {scalar_t__ partial_inplace; } ;
struct TYPE_11__ {scalar_t__ vma; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (int *,scalar_t__,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bfd_reloc_status_type
FUNC_4 (bfd *VAR_3, asymbol *VAR_4, arelent *VAR_5,
   asection *VAR_6, bfd_boolean VAR_7,
   void *VAR_8, bfd_vma VAR_9)
{
  bfd_vma VAR_10;
  bfd_vma VAR_11;

  if (FUNC_2 (VAR_4->section))
    VAR_10 = 0;
  else
    VAR_10 = VAR_4->value;

  VAR_10 += VAR_4->section->output_section->vma;
  VAR_10 += VAR_4->section->output_offset;

  if (VAR_5->address > FUNC_1 (VAR_3, VAR_6))
    return VAR_2;


  VAR_11 = VAR_5->addend;

  if (VAR_5->howto->partial_inplace)
    VAR_11 += FUNC_0 (VAR_3, (bfd_byte *) VAR_8 + VAR_5->address);




  if (! VAR_7
      || (VAR_4->flags & VAR_0) != 0)
    VAR_11 += VAR_10 - VAR_9;

  if (VAR_5->howto->partial_inplace)
    FUNC_3 (VAR_3, VAR_11, (bfd_byte *) VAR_8 + VAR_5->address);
  else
    VAR_5->addend = VAR_11;

  if (VAR_7)
    VAR_5->address += VAR_6->output_offset;

  return VAR_1;
}
