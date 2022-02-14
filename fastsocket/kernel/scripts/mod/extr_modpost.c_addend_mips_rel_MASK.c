
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct elf_info {int dummy; } ;
struct TYPE_4__ {unsigned int r_addend; int r_info; } ;
typedef int Elf_Shdr ;
typedef TYPE_1__ Elf_Rela ;


 unsigned int FUNC_0 (int ) ;


 unsigned int VAR_0 ;

 unsigned int FUNC_1 (unsigned int) ;
 unsigned int* FUNC_2 (struct elf_info*,int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct elf_info *VAR_1, Elf_Shdr *VAR_2, Elf_Rela *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_3->r_info);
 unsigned int *VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);
 unsigned int VAR_6;

 if (VAR_4 == VAR_0)
  return 1;
 VAR_6 = FUNC_1(*VAR_5);
 switch (VAR_4) {
 case 128:
  VAR_3->r_addend = VAR_6 & 0xffff;
  break;
 case 130:
  VAR_3->r_addend = (VAR_6 & 0x03ffffff) << 2;
  break;
 case 129:
  VAR_3->r_addend = VAR_6;
  break;
 }
 return 0;
}
