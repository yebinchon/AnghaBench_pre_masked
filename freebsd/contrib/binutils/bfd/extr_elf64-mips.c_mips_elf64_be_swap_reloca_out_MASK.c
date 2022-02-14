
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_6__ {scalar_t__ r_offset; scalar_t__ r_addend; void* r_type3; int r_ssym; void* r_type2; int r_sym; void* r_type; } ;
struct TYPE_5__ {scalar_t__ r_offset; scalar_t__ r_addend; int r_info; } ;
typedef TYPE_1__ Elf_Internal_Rela ;
typedef TYPE_2__ Elf64_Mips_Internal_Rela ;
typedef int Elf64_Mips_External_Rela ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_5 (bfd *VAR_0, const Elf_Internal_Rela *VAR_1,
          bfd_byte *VAR_2)
{
  Elf64_Mips_Internal_Rela VAR_3;

  VAR_3.r_offset = VAR_1[0].r_offset;
  FUNC_0(VAR_1[0].r_offset == VAR_1[1].r_offset);
  FUNC_0(VAR_1[0].r_offset == VAR_1[2].r_offset);

  VAR_3.r_type = FUNC_2 (VAR_1[0].r_info);
  VAR_3.r_sym = FUNC_3 (VAR_1[0].r_info);
  VAR_3.r_addend = VAR_1[0].r_addend;
  FUNC_0(VAR_1[1].r_addend == 0);
  FUNC_0(VAR_1[2].r_addend == 0);

  VAR_3.r_type2 = FUNC_2 (VAR_1[1].r_info);
  VAR_3.r_ssym = FUNC_1 (VAR_1[1].r_info);
  VAR_3.r_type3 = FUNC_2 (VAR_1[2].r_info);

  FUNC_4 (VAR_0, &VAR_3,
         (Elf64_Mips_External_Rela *) VAR_2);
}
