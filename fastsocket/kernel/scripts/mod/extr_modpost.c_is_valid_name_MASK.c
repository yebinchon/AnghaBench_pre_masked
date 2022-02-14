
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct elf_info {char* strtab; } ;
struct TYPE_3__ {int st_name; } ;
typedef TYPE_1__ Elf_Sym ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static inline int FUNC_2(struct elf_info *VAR_0, Elf_Sym *VAR_1)
{
 const char *VAR_2 = VAR_0->strtab + VAR_1->st_name;

 if (!VAR_2 || !FUNC_1(VAR_2))
  return 0;
 return !FUNC_0(VAR_2);
}
