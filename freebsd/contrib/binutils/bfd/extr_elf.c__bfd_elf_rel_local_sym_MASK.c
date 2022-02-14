
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ bfd_vma ;
typedef int bfd ;
struct TYPE_8__ {scalar_t__ sec_info_type; } ;
typedef TYPE_1__ asection ;
struct TYPE_10__ {int sec_info; } ;
struct TYPE_9__ {scalar_t__ st_value; } ;
typedef TYPE_2__ Elf_Internal_Sym ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__**,int ,scalar_t__) ;
 TYPE_3__* FUNC_1 (TYPE_1__*) ;

bfd_vma
FUNC_2 (bfd *VAR_1,
   Elf_Internal_Sym *VAR_2,
   asection **VAR_3,
   bfd_vma VAR_4)
{
  asection *VAR_5 = *VAR_3;

  if (VAR_5->sec_info_type != VAR_0)
    return VAR_2->st_value + VAR_4;

  return FUNC_0 (VAR_1, VAR_3,
         FUNC_1 (VAR_5)->sec_info,
         VAR_2->st_value + VAR_4);
}
