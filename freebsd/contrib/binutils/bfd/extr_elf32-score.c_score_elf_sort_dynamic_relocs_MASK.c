
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int r_info; } ;
typedef TYPE_1__ Elf_Internal_Rela ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void const*,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2 (const void *VAR_1, const void *VAR_2)
{
  Elf_Internal_Rela VAR_3;
  Elf_Internal_Rela VAR_4;

  FUNC_1 (VAR_0, VAR_1, &VAR_3);
  FUNC_1 (VAR_0, VAR_2, &VAR_4);

  return (FUNC_0 (VAR_3) - FUNC_0 (VAR_4));
}
