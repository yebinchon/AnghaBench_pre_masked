
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** pltgot; } ;
typedef TYPE_1__ Obj_Entry ;
typedef void* Elf_Addr ;


 int VAR_0 ;

void
FUNC_0(Obj_Entry *VAR_1)
{
    if (VAR_1->pltgot != ((void*)0)) {
 VAR_1->pltgot[1] = (Elf_Addr) VAR_1;
 VAR_1->pltgot[2] = (Elf_Addr) &VAR_0;
    }
}
