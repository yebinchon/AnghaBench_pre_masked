
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct elf_info {TYPE_2__* symtab_start; TYPE_1__* hdr; } ;
struct TYPE_12__ {unsigned int r_offset; unsigned int r_info; unsigned int r_addend; } ;
struct TYPE_11__ {int sh_offset; int sh_size; } ;
struct TYPE_10__ {scalar_t__ st_shndx; } ;
struct TYPE_9__ {scalar_t__ e_machine; } ;
typedef TYPE_2__ Elf_Sym ;
typedef TYPE_3__ Elf_Shdr ;
typedef TYPE_4__ Elf_Rela ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_4 (unsigned int) ;
 int FUNC_5 (char const*,struct elf_info*,TYPE_4__*,TYPE_2__*,char const*) ;
 scalar_t__ FUNC_6 (char const*,int ) ;
 char* FUNC_7 (struct elf_info*,TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(const char *VAR_3, struct elf_info *VAR_4,
                         Elf_Shdr *VAR_5)
{
 Elf_Sym *VAR_6;
 Elf_Rela *VAR_7;
 Elf_Rela VAR_8;
 unsigned int VAR_9;
 const char *VAR_10;

 Elf_Rela *VAR_11 = (void *)VAR_4->hdr + VAR_5->sh_offset;
 Elf_Rela *VAR_12 = (void *)VAR_11 + VAR_5->sh_size;

 VAR_10 = FUNC_7(VAR_4, VAR_5);
 VAR_10 += FUNC_8(".rela");

 if (FUNC_6(VAR_10, VAR_2))
  return;

 for (VAR_7 = VAR_11; VAR_7 < VAR_12; VAR_7++) {
  VAR_8.r_offset = FUNC_4(VAR_7->r_offset);

  if (VAR_4->hdr->e_machine == VAR_0) {
   unsigned int VAR_13;
   VAR_9 = FUNC_0(VAR_7->r_info);
   VAR_9 = FUNC_4(VAR_9);
   VAR_13 = FUNC_1(VAR_7->r_info);
   VAR_8.r_info = FUNC_2(VAR_9, VAR_13);
  } else {
   VAR_8.r_info = FUNC_4(VAR_7->r_info);
   VAR_9 = FUNC_3(VAR_8.r_info);
  }




  VAR_8.r_addend = FUNC_4(VAR_7->r_addend);
  VAR_6 = VAR_4->symtab_start + VAR_9;

  if (VAR_6->st_shndx >= VAR_1)
   continue;
  FUNC_5(VAR_3, VAR_4, &VAR_8, VAR_6, VAR_10);
 }
}
