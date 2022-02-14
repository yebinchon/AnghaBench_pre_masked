
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ pcrel_offset; scalar_t__ pc_relative; } ;
typedef TYPE_2__ reloc_howto_type ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_reloc_status_type ;
typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_10__ {scalar_t__ output_offset; TYPE_1__* output_section; } ;
typedef TYPE_3__ asection ;
struct TYPE_8__ {scalar_t__ vma; } ;


 int FUNC_0 (TYPE_2__*,int *,scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*) ;
 int VAR_0 ;

bfd_reloc_status_type
FUNC_2 (reloc_howto_type *VAR_1,
     bfd *VAR_2,
     asection *VAR_3,
     bfd_byte *VAR_4,
     bfd_vma VAR_5,
     bfd_vma VAR_6,
     bfd_vma VAR_7)
{
  bfd_vma VAR_8;


  if (VAR_5 > FUNC_1 (VAR_2, VAR_3))
    return VAR_0;





  VAR_8 = VAR_6 + VAR_7;
  if (VAR_1->pc_relative)
    {
      VAR_8 -= (VAR_3->output_section->vma
       + VAR_3->output_offset);
      if (VAR_1->pcrel_offset)
 VAR_8 -= VAR_5;
    }

  return FUNC_0 (VAR_1, VAR_2, VAR_8,
     VAR_4 + VAR_5);
}
