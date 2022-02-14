
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_6__ {int r_addend; int r_type; int r_type2; int r_type3; int r_ssym; int r_sym; int r_offset; } ;
struct TYPE_5__ {int r_addend; void* r_type; void* r_type2; void* r_type3; void* r_ssym; int r_sym; int r_offset; } ;
typedef TYPE_1__ Elf64_Mips_Internal_Rela ;
typedef TYPE_2__ Elf64_Mips_External_Rela ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4 (bfd *VAR_0, const Elf64_Mips_External_Rela *VAR_1,
      Elf64_Mips_Internal_Rela *VAR_2)
{
  VAR_2->r_offset = FUNC_1 (VAR_0, VAR_1->r_offset);
  VAR_2->r_sym = FUNC_0 (VAR_0, VAR_1->r_sym);
  VAR_2->r_ssym = FUNC_2 (VAR_0, VAR_1->r_ssym);
  VAR_2->r_type3 = FUNC_2 (VAR_0, VAR_1->r_type3);
  VAR_2->r_type2 = FUNC_2 (VAR_0, VAR_1->r_type2);
  VAR_2->r_type = FUNC_2 (VAR_0, VAR_1->r_type);
  VAR_2->r_addend = FUNC_3 (VAR_0, VAR_1->r_addend);
}
