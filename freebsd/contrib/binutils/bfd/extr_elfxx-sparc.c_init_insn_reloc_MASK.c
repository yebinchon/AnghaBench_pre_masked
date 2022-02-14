
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ pc_relative; int partial_inplace; } ;
typedef TYPE_4__ reloc_howto_type ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_reloc_status_type ;
typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_16__ {int flags; scalar_t__ value; TYPE_2__* section; } ;
typedef TYPE_5__ asymbol ;
struct TYPE_17__ {scalar_t__ output_offset; TYPE_3__* output_section; } ;
typedef TYPE_6__ asection ;
struct TYPE_18__ {scalar_t__ addend; scalar_t__ address; TYPE_4__* howto; } ;
typedef TYPE_7__ arelent ;
struct TYPE_14__ {scalar_t__ vma; } ;
struct TYPE_13__ {scalar_t__ output_offset; TYPE_1__* output_section; } ;
struct TYPE_12__ {scalar_t__ vma; } ;
typedef scalar_t__ PTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_6__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bfd_reloc_status_type
FUNC_2 (bfd *VAR_5, arelent *VAR_6, asymbol *VAR_7,
   PTR VAR_8, asection *VAR_9, bfd *VAR_10,
   bfd_vma *VAR_11, bfd_vma *VAR_12)
{
  bfd_vma VAR_13;
  reloc_howto_type *VAR_14 = VAR_6->howto;

  if (VAR_10 != (bfd *) ((void*)0)
      && (VAR_7->flags & VAR_0) == 0
      && (! VAR_14->partial_inplace
   || VAR_6->addend == 0))
    {
      VAR_6->address += VAR_9->output_offset;
      return VAR_2;
    }


  if (VAR_10 != ((void*)0))
    return VAR_1;

  if (VAR_6->address > FUNC_1 (VAR_5, VAR_9))
    return VAR_4;

  VAR_13 = (VAR_7->value
  + VAR_7->section->output_section->vma
  + VAR_7->section->output_offset);
  VAR_13 += VAR_6->addend;
  if (VAR_14->pc_relative)
    {
      VAR_13 -= (VAR_9->output_section->vma
       + VAR_9->output_offset);
      VAR_13 -= VAR_6->address;
    }

  *VAR_11 = VAR_13;
  *VAR_12 = FUNC_0 (VAR_5, (bfd_byte *) VAR_8 + VAR_6->address);
  return VAR_3;
}
