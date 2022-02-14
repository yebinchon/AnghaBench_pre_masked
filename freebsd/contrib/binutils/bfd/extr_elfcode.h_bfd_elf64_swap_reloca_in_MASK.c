
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_5__ {int r_addend; int r_info; int r_offset; } ;
struct TYPE_4__ {int r_addend; void* r_info; void* r_offset; } ;
typedef TYPE_1__ Elf_Internal_Rela ;
typedef TYPE_2__ Elf_External_Rela ;


 int FUNC_0 (int *,int ) ;
 void* FUNC_1 (int *,int ) ;

void
FUNC_2 (bfd *VAR_0,
      const bfd_byte *VAR_1,
      Elf_Internal_Rela *VAR_2)
{
  const Elf_External_Rela *VAR_3 = (const Elf_External_Rela *) VAR_1;
  VAR_2->r_offset = FUNC_1 (VAR_0, VAR_3->r_offset);
  VAR_2->r_info = FUNC_1 (VAR_0, VAR_3->r_info);
  VAR_2->r_addend = FUNC_0 (VAR_0, VAR_3->r_addend);
}
