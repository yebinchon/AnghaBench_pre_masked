
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ r_offset; scalar_t__ r_addend; int r_info; } ;
struct TYPE_4__ {int irelative; int pltrelasize; scalar_t__ relocbase; TYPE_2__* pltrela; } ;
typedef int RtldLockState ;
typedef TYPE_1__ Obj_Entry ;
typedef TYPE_2__ Elf_Rela ;
typedef int Elf_Addr ;


 int FUNC_0 (int ) ;


 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *) ;

int
FUNC_4(Obj_Entry *VAR_1, RtldLockState *VAR_2)
{
    const Elf_Rela *VAR_3;
    const Elf_Rela *VAR_4;

    if (!VAR_1->irelative)
 return (0);
    VAR_3 = (const Elf_Rela *)((const char *)VAR_1->pltrela + VAR_1->pltrelasize);
    for (VAR_4 = VAR_1->pltrela; VAR_4 < VAR_3; VAR_4++) {
 Elf_Addr *VAR_5, VAR_6, *VAR_7;

 switch (FUNC_0(VAR_4->r_info)) {
 case 128:
   break;

 case 129:
   VAR_7 = (Elf_Addr *)(VAR_1->relocbase + VAR_4->r_addend);
   VAR_5 = (Elf_Addr *)(VAR_1->relocbase + VAR_4->r_offset);
   FUNC_2(VAR_0, VAR_2);
   VAR_6 = FUNC_1(VAR_7);
   FUNC_3(VAR_0, VAR_2);
   *VAR_5 = VAR_6;
   break;
 }
    }
    VAR_1->irelative = 0;
    return (0);
}
