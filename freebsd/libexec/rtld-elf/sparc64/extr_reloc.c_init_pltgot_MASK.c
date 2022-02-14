
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* pltgot; } ;
typedef TYPE_1__ Obj_Entry ;
typedef int Elf_Word ;
typedef scalar_t__ Elf_Addr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;

void
FUNC_1(Obj_Entry *VAR_2)
{
 Elf_Word *VAR_3;

 if (VAR_2->pltgot != ((void*)0)) {
  VAR_3 = (Elf_Word *)VAR_2->pltgot;
  FUNC_0(&VAR_3[0], (Elf_Addr)VAR_0);
  FUNC_0(&VAR_3[8], (Elf_Addr)VAR_1);
  VAR_2->pltgot[8] = (Elf_Addr)VAR_2;
 }
}
