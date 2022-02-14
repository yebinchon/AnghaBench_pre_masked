
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ bfd_vma ;
typedef int bfd ;
struct TYPE_12__ {int flags; scalar_t__ sec_info_type; scalar_t__ output_offset; TYPE_1__* output_section; struct TYPE_12__* kept_section; } ;
typedef TYPE_2__ asection ;
struct TYPE_15__ {int sec_info; } ;
struct TYPE_14__ {scalar_t__ r_addend; } ;
struct TYPE_13__ {scalar_t__ st_value; int st_info; } ;
struct TYPE_11__ {scalar_t__ vma; } ;
typedef TYPE_3__ Elf_Internal_Sym ;
typedef TYPE_4__ Elf_Internal_Rela ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *,TYPE_2__**,int ,scalar_t__) ;
 TYPE_5__* FUNC_2 (TYPE_2__*) ;

bfd_vma
FUNC_3 (bfd *VAR_4,
    Elf_Internal_Sym *VAR_5,
    asection **VAR_6,
    Elf_Internal_Rela *VAR_7)
{
  asection *VAR_8 = *VAR_6;
  bfd_vma VAR_9;

  VAR_9 = (VAR_8->output_section->vma
  + VAR_8->output_offset
  + VAR_5->st_value);
  if ((VAR_8->flags & VAR_2)
      && FUNC_0 (VAR_5->st_info) == VAR_3
      && VAR_8->sec_info_type == VAR_0)
    {
      VAR_7->r_addend =
 FUNC_1 (VAR_4, VAR_6,
        FUNC_2 (VAR_8)->sec_info,
        VAR_5->st_value + VAR_7->r_addend);
      if (VAR_8 != *VAR_6)
 {





   if ((VAR_8->flags & VAR_1) != 0)
     VAR_8->kept_section = *VAR_6;
   VAR_8 = *VAR_6;
 }
      VAR_7->r_addend -= VAR_9;
      VAR_7->r_addend += VAR_8->output_section->vma + VAR_8->output_offset;
    }
  return VAR_9;
}
