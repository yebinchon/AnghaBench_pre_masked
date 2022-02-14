
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int n_namesz; } ;
typedef TYPE_1__ Elf_Note ;
typedef int Elf32_Word ;


 int VAR_0 ;
 int const VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool
FUNC_1(const Elf_Note *VAR_2, int32_t *VAR_3)
{
 const Elf32_Word *VAR_4;
 uintptr_t VAR_5;

 VAR_5 = (uintptr_t)(VAR_2 + 1);
 VAR_5 += FUNC_0(VAR_2->n_namesz, VAR_0);

 VAR_4 = (const Elf32_Word *)VAR_5;
 if (VAR_4[0] != VAR_1)
  return (0);





 *VAR_3 = VAR_4[1] * 100000 + VAR_4[2] * 1000 + VAR_4[3];

 return (1);
}
