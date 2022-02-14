
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int r_info; scalar_t__ r_offset; } ;
struct TYPE_9__ {scalar_t__ st_value; } ;
struct TYPE_8__ {int pltrelsize; scalar_t__ relocbase; TYPE_3__* pltrel; } ;
typedef int RtldLockState ;
typedef TYPE_1__ Obj_Entry ;
typedef TYPE_2__ Elf_Sym ;
typedef TYPE_3__ Elf_Rel ;
typedef int Elf_Addr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

 int VAR_0 ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (char*) ;
 TYPE_2__* FUNC_4 (int ,TYPE_1__*,TYPE_1__ const**,int,int *,int *) ;

int
FUNC_5(Obj_Entry *VAR_1, int VAR_2, RtldLockState *VAR_3)
{
 const Obj_Entry *VAR_4;
 const Elf_Rel *VAR_5;
 const Elf_Rel *VAR_6;
 const Elf_Sym *VAR_7;

 VAR_5 = (const Elf_Rel *)((const char *)VAR_1->pltrel + VAR_1->pltrelsize);
 for (VAR_6 = VAR_1->pltrel; VAR_6 < VAR_5; VAR_6++) {
  Elf_Addr *VAR_8;

  switch (FUNC_1(VAR_6->r_info)) {
  case 128:
   VAR_7 = FUNC_4(FUNC_0(VAR_6->r_info), VAR_1,
       &VAR_4, VAR_0 | VAR_2, ((void*)0), VAR_3);
   if (VAR_7 == ((void*)0)) {
    FUNC_3("reloc_jmpslots: sym not found");
    return (-1);
   }

   VAR_8 = (Elf_Addr *)(VAR_1->relocbase + VAR_6->r_offset);
   *VAR_8 = (Elf_Addr)(VAR_4->relocbase + VAR_7->st_value);
   break;
  default:
   FUNC_2("Unknown relocation type %u in PLT",
       (unsigned int)FUNC_1(VAR_6->r_info));
   return (-1);
  }
 }

 return (0);
}
