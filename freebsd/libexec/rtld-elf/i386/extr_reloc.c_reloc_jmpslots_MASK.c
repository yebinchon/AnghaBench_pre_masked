
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int r_info; scalar_t__ r_offset; } ;
struct TYPE_12__ {scalar_t__ st_value; int st_info; } ;
struct TYPE_11__ {int jmpslots_done; int pltrelsize; int gnu_ifunc; scalar_t__ relocbase; TYPE_3__* pltrel; } ;
typedef int RtldLockState ;
typedef TYPE_1__ Obj_Entry ;
typedef TYPE_2__ Elf_Sym ;
typedef TYPE_3__ Elf_Rel ;
typedef int Elf_Addr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,int) ;
 TYPE_2__* FUNC_4 (int ,TYPE_1__*,TYPE_1__ const**,int,int *,int *) ;
 int FUNC_5 (int *,int ,TYPE_1__ const*,TYPE_1__*,TYPE_3__ const*) ;

int
FUNC_6(Obj_Entry *VAR_2, int VAR_3, RtldLockState *VAR_4)
{
    const Elf_Rel *VAR_5;
    const Elf_Rel *VAR_6;

    if (VAR_2->jmpslots_done)
 return 0;
    VAR_5 = (const Elf_Rel *)((const char *)VAR_2->pltrel + VAR_2->pltrelsize);
    for (VAR_6 = VAR_2->pltrel; VAR_6 < VAR_5; VAR_6++) {
 Elf_Addr *VAR_7, VAR_8;
 const Elf_Sym *VAR_9;
 const Obj_Entry *VAR_10;

 switch (FUNC_1(VAR_6->r_info)) {
 case 128:
   VAR_7 = (Elf_Addr *)(VAR_2->relocbase + VAR_6->r_offset);
   VAR_9 = FUNC_4(FUNC_0(VAR_6->r_info), VAR_2, &VAR_10,
  VAR_1 | VAR_3, ((void*)0), VAR_4);
   if (VAR_9 == ((void*)0))
       return (-1);
   if (FUNC_2(VAR_9->st_info) == VAR_0) {
       VAR_2->gnu_ifunc = 1;
       continue;
   }
   VAR_8 = (Elf_Addr)(VAR_10->relocbase + VAR_9->st_value);
   FUNC_5(VAR_7, VAR_8, VAR_10, VAR_2, VAR_6);
   break;

 case 129:
   break;

 default:
   FUNC_3("Unknown relocation type %x in PLT",
     FUNC_1(VAR_6->r_info));
   return (-1);
 }
    }

    VAR_2->jmpslots_done = 1;
    return 0;
}
