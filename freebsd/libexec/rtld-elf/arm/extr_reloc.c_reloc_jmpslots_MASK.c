
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int r_info; scalar_t__ r_offset; } ;
struct TYPE_12__ {scalar_t__ st_value; } ;
struct TYPE_11__ {int pltrelsize; int jmpslots_done; scalar_t__ relocbase; TYPE_3__* pltrel; } ;
typedef int RtldLockState ;
typedef TYPE_1__ Obj_Entry ;
typedef TYPE_2__ Elf_Sym ;
typedef TYPE_3__ Elf_Rel ;
typedef scalar_t__ Elf_Addr ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 TYPE_2__* FUNC_4 (int ,TYPE_1__*,TYPE_1__ const**,int,int *,int *) ;
 int FUNC_5 (scalar_t__*,scalar_t__,TYPE_1__ const*,TYPE_1__*,TYPE_3__ const*) ;

int
FUNC_6(Obj_Entry *VAR_2, int VAR_3, RtldLockState *VAR_4)
{
 const Obj_Entry *VAR_5;
 const Elf_Rel *VAR_6;
 const Elf_Rel *VAR_7;
 const Elf_Sym *VAR_8;
 Elf_Addr *VAR_9;
 Elf_Addr VAR_10;

 VAR_6 = (const Elf_Rel *)((const char *)VAR_2->pltrel + VAR_2->pltrelsize);
 for (VAR_7 = VAR_2->pltrel; VAR_7 < VAR_6; VAR_7++) {
  FUNC_2(FUNC_1(VAR_7->r_info) == VAR_0);
  VAR_9 = (Elf_Addr *)(VAR_2->relocbase + VAR_7->r_offset);
  VAR_8 = FUNC_4(FUNC_0(VAR_7->r_info), VAR_2, &VAR_5,
      VAR_1 | VAR_3, ((void*)0), VAR_4);
  if (VAR_8 == ((void*)0)) {
   FUNC_3("reloc_jmpslots: sym not found");
   return (-1);
  }

  VAR_10 = (Elf_Addr)(VAR_5->relocbase + VAR_8->st_value);
  FUNC_5(VAR_9, VAR_10, VAR_5, VAR_2,
      (const Elf_Rel *) VAR_7);
 }

 VAR_2->jmpslots_done = 1;

 return (0);
}
