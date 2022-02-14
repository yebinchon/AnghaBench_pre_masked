
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct Struct_RtldLockState {int dummy; } ;
struct TYPE_5__ {scalar_t__ r_offset; scalar_t__ r_addend; int r_info; } ;
struct TYPE_4__ {int irelative; int pltrelasize; scalar_t__ relocbase; TYPE_2__* pltrela; } ;
typedef TYPE_1__ Obj_Entry ;
typedef TYPE_2__ Elf_Rela ;
typedef int Elf_Addr ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct Struct_RtldLockState*) ;
 int VAR_1 ;
 int FUNC_3 (int ,struct Struct_RtldLockState*) ;

int
FUNC_4(Obj_Entry *VAR_2, struct Struct_RtldLockState *VAR_3)
{
 const Elf_Rela *VAR_4;
 const Elf_Rela *VAR_5;
 Elf_Addr *VAR_6, VAR_7, *VAR_8;

 if (!VAR_2->irelative)
  return (0);
 VAR_4 = (const Elf_Rela *)((const char *)VAR_2->pltrela + VAR_2->pltrelasize);
 for (VAR_5 = VAR_2->pltrela; VAR_5 < VAR_4; VAR_5++) {
  if (FUNC_0(VAR_5->r_info) == VAR_0) {
   VAR_8 = (Elf_Addr *)(VAR_2->relocbase + VAR_5->r_addend);
   VAR_6 = (Elf_Addr *)(VAR_2->relocbase + VAR_5->r_offset);
   FUNC_2(VAR_1, VAR_3);
   VAR_7 = FUNC_1(VAR_8);
   FUNC_3(VAR_1, VAR_3);
   *VAR_6 = VAR_7;
  }
 }
 VAR_2->irelative = 0;
 return (0);
}
