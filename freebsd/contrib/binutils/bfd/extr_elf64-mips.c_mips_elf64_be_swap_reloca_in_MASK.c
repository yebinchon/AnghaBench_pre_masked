
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_6__ {int r_type3; int r_offset; int r_type2; int r_ssym; int r_addend; int r_type; int r_sym; } ;
struct TYPE_5__ {int r_addend; void* r_info; int r_offset; } ;
typedef TYPE_1__ Elf_Internal_Rela ;
typedef TYPE_2__ Elf64_Mips_Internal_Rela ;
typedef int Elf64_Mips_External_Rela ;


 void* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int const*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2 (bfd *VAR_1, const bfd_byte *VAR_2,
         Elf_Internal_Rela *VAR_3)
{
  Elf64_Mips_Internal_Rela VAR_4;

  FUNC_1 (VAR_1,
        (const Elf64_Mips_External_Rela *) VAR_2,
        &VAR_4);

  VAR_3[0].r_offset = VAR_4.r_offset;
  VAR_3[0].r_info = FUNC_0 (VAR_4.r_sym, VAR_4.r_type);
  VAR_3[0].r_addend = VAR_4.r_addend;
  VAR_3[1].r_offset = VAR_4.r_offset;
  VAR_3[1].r_info = FUNC_0 (VAR_4.r_ssym, VAR_4.r_type2);
  VAR_3[1].r_addend = 0;
  VAR_3[2].r_offset = VAR_4.r_offset;
  VAR_3[2].r_info = FUNC_0 (VAR_0, VAR_4.r_type3);
  VAR_3[2].r_addend = 0;
}
