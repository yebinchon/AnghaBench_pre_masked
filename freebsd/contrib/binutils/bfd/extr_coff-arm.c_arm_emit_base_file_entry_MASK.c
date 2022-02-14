
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct bfd_link_info {scalar_t__ base_file; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd ;
struct TYPE_9__ {TYPE_1__* output_section; scalar_t__ output_offset; scalar_t__ vma; } ;
typedef TYPE_3__ asection ;
typedef int addr ;
struct TYPE_11__ {scalar_t__ pe; } ;
struct TYPE_8__ {scalar_t__ ImageBase; } ;
struct TYPE_10__ {TYPE_2__ pe_opthdr; } ;
struct TYPE_7__ {scalar_t__ vma; } ;
typedef int FILE ;


 TYPE_5__* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__*,int,int,int *) ;
 TYPE_4__* FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3 (struct bfd_link_info *VAR_0,
     bfd *VAR_1,
     asection *VAR_2,
     bfd_vma VAR_3)
{
  bfd_vma VAR_4 = VAR_3
                - VAR_2->vma
                + VAR_2->output_offset
                  + VAR_2->output_section->vma;

  if (FUNC_0 (VAR_1)->pe)
     VAR_4 -= FUNC_2 (VAR_1)->pe_opthdr.ImageBase;
  FUNC_1 (& VAR_4, 1, sizeof (VAR_4), (FILE *) VAR_0->base_file);

}
