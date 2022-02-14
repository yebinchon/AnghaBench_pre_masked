
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* e_ident; } ;
typedef TYPE_1__ GElf_Ehdr ;
typedef int Elf ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int * FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (char*,scalar_t__) ;

size_t
FUNC_3(Elf *VAR_3)
{
 GElf_Ehdr VAR_4;

 if (FUNC_1(VAR_3, &VAR_4) == ((void*)0)) {
  FUNC_2("failed to read ELF header: %s\n",
      FUNC_0(-1));
 }

 if (VAR_4.e_ident[VAR_0] == VAR_1)
  return (4);
 else if (VAR_4.e_ident[VAR_0] == VAR_2)
  return (8);
 else
  FUNC_2("unknown ELF class %d\n", VAR_4.e_ident[VAR_0]);


 return (0);
}
