
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct elf_info {scalar_t__ hdr; scalar_t__ symtab_start; } ;
struct TYPE_6__ {int r_addend; scalar_t__ r_offset; int r_info; } ;
struct TYPE_5__ {scalar_t__ sh_addr; scalar_t__ sh_offset; } ;
typedef TYPE_1__ Elf_Shdr ;
typedef TYPE_2__ Elf_Rela ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;



__attribute__((used)) static int FUNC_2(struct elf_info *VAR_0, Elf_Shdr *VAR_1, Elf_Rela *VAR_2)
{
 unsigned int VAR_3 = FUNC_1(VAR_2->r_info);

 switch (VAR_3) {
 case 129:

  VAR_2->r_addend = (int)(long)
                (VAR_0->symtab_start + FUNC_0(VAR_2->r_info));
  break;
 case 128:

  VAR_2->r_addend = (int)(long)(VAR_0->hdr +
                VAR_1->sh_offset +
                (VAR_2->r_offset - VAR_1->sh_addr));
  break;
 default:
  return 1;
 }
 return 0;
}
