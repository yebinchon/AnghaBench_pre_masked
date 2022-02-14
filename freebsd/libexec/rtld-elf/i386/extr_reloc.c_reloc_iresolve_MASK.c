
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ r_offset; int r_info; } ;
struct TYPE_4__ {int irelative; int pltrelsize; scalar_t__ relocbase; TYPE_2__* pltrel; } ;
typedef int RtldLockState ;
typedef TYPE_1__ Obj_Entry ;
typedef TYPE_2__ Elf_Rel ;
typedef scalar_t__ Elf_Addr ;


 int FUNC_0 (int ) ;

 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *) ;

int
FUNC_4(Obj_Entry *VAR_1, RtldLockState *VAR_2)
{
    const Elf_Rel *VAR_3;
    const Elf_Rel *VAR_4;
    Elf_Addr *VAR_5, VAR_6;

    if (!VAR_1->irelative)
 return (0);
    VAR_3 = (const Elf_Rel *)((const char *)VAR_1->pltrel + VAR_1->pltrelsize);
    for (VAR_4 = VAR_1->pltrel; VAR_4 < VAR_3; VAR_4++) {
 switch (FUNC_0(VAR_4->r_info)) {
 case 128:
   VAR_5 = (Elf_Addr *)(VAR_1->relocbase + VAR_4->r_offset);
   FUNC_2(VAR_0, VAR_2);
   VAR_6 = FUNC_1(VAR_1->relocbase + *VAR_5);
   FUNC_3(VAR_0, VAR_2);
   *VAR_5 = VAR_6;
   break;
 }
    }
    VAR_1->irelative = 0;
    return (0);
}
