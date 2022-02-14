
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct elf_info {TYPE_1__* symtab_stop; TYPE_1__* symtab_start; } ;
struct TYPE_4__ {scalar_t__ st_shndx; scalar_t__ st_value; } ;
typedef TYPE_1__ Elf_Sym ;
typedef scalar_t__ Elf_Addr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct elf_info*,TYPE_1__*) ;
 char* FUNC_1 (struct elf_info*,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static Elf_Sym *FUNC_3(struct elf_info *VAR_1, Elf_Addr VAR_2,
     const char *VAR_3)
{
 Elf_Sym *VAR_4;
 Elf_Sym *VAR_5 = ((void*)0);
 Elf_Addr VAR_6 = ~0;

 for (VAR_4 = VAR_1->symtab_start; VAR_4 < VAR_1->symtab_stop; VAR_4++) {
  const char *VAR_7;

  if (VAR_4->st_shndx >= VAR_0)
   continue;
  VAR_7 = FUNC_1(VAR_1, VAR_4->st_shndx);
  if (FUNC_2(VAR_7, VAR_3) != 0)
   continue;
  if (!FUNC_0(VAR_1, VAR_4))
   continue;
  if (VAR_4->st_value <= VAR_2) {
   if ((VAR_2 - VAR_4->st_value) < VAR_6) {
    VAR_6 = VAR_2 - VAR_4->st_value;
    VAR_5 = VAR_4;
   } else if ((VAR_2 - VAR_4->st_value) == VAR_6) {
    VAR_5 = VAR_4;
   }
  }
 }
 return VAR_5;
}
