
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int r_info; scalar_t__ r_offset; } ;
struct TYPE_11__ {scalar_t__ st_value; int st_info; } ;
struct TYPE_10__ {int jmpslots_done; int pltrelasize; int gnu_ifunc; scalar_t__ relocbase; TYPE_3__* pltrela; } ;
typedef int RtldLockState ;
typedef TYPE_1__ Obj_Entry ;
typedef TYPE_2__ Elf_Sym ;
typedef TYPE_3__ Elf_Rela ;
typedef int Elf_Rel ;
typedef int Elf_Addr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_3 (int ,TYPE_1__*,TYPE_1__ const**,int,int *,int *) ;
 int FUNC_4 (int *,int ,TYPE_1__ const*,TYPE_1__*,int const*) ;

int
FUNC_5(Obj_Entry *VAR_2, int VAR_3, RtldLockState *VAR_4)
{
 const Obj_Entry *VAR_5;
 const Elf_Rela *VAR_6;
 const Elf_Rela *VAR_7;
 const Elf_Sym *VAR_8;

 if (VAR_2->jmpslots_done)
  return (0);

 VAR_6 = (const Elf_Rela *)((const char *)VAR_2->pltrela +
     VAR_2->pltrelasize);
 for (VAR_7 = VAR_2->pltrela; VAR_7 < VAR_6; VAR_7++) {
  Elf_Addr *VAR_9, VAR_10;

  VAR_9 = (Elf_Addr *)(VAR_2->relocbase + VAR_7->r_offset);
  switch(FUNC_1(VAR_7->r_info)) {
  case 128:
   VAR_8 = FUNC_3(FUNC_0(VAR_7->r_info), VAR_2,
       &VAR_5, VAR_1 | VAR_3, ((void*)0), VAR_4);
   if (VAR_8 == ((void*)0))
    return (-1);
   if (FUNC_2(VAR_8->st_info) == VAR_0) {
    VAR_2->gnu_ifunc = 1;
    continue;
   }
   VAR_10 = (Elf_Addr)(VAR_5->relocbase + VAR_8->st_value);
   FUNC_4(VAR_9, VAR_10, VAR_5, VAR_2,
       (const Elf_Rel *)VAR_7);
   break;
  }
 }
 VAR_2->jmpslots_done = 1;

 return (0);
}
