
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int n_namesz; } ;
typedef TYPE_1__ Elf_Note ;
typedef scalar_t__ Elf32_Word ;
typedef int Elf32_Addr ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (scalar_t__ const,scalar_t__ const,scalar_t__ const) ;
 scalar_t__ FUNC_1 (int ,int) ;

__attribute__((used)) static bool
FUNC_2(const Elf_Note *VAR_1, int32_t *VAR_2)
{
 const Elf32_Word *VAR_3;
 uintptr_t VAR_4;

 VAR_4 = (uintptr_t)(VAR_1 + 1);
 VAR_4 += FUNC_1(VAR_1->n_namesz, sizeof(Elf32_Addr));

 VAR_3 = (const Elf32_Word *)VAR_4;
 if (VAR_3[0] != VAR_0)
  return (0);

 *VAR_2 = FUNC_0(VAR_3[1], VAR_3[2], VAR_3[3]);
 return (1);
}
