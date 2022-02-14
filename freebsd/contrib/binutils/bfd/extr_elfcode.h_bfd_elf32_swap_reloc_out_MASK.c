
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_5__ {int r_info; int r_offset; } ;
struct TYPE_4__ {int r_info; int r_offset; } ;
typedef TYPE_1__ Elf_Internal_Rela ;
typedef TYPE_2__ Elf_External_Rel ;


 int FUNC_0 (int *,int ,int ) ;

void
FUNC_1 (bfd *VAR_0,
      const Elf_Internal_Rela *VAR_1,
      bfd_byte *VAR_2)
{
  Elf_External_Rel *VAR_3 = (Elf_External_Rel *) VAR_2;
  FUNC_0 (VAR_0, VAR_1->r_offset, VAR_3->r_offset);
  FUNC_0 (VAR_0, VAR_1->r_info, VAR_3->r_info);
}
