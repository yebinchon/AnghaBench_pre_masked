
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct Struct_RtldLockState {int dummy; } ;
struct TYPE_14__ {int r_info; scalar_t__ r_offset; } ;
struct TYPE_13__ {int st_info; } ;
struct TYPE_12__ {int gnu_ifunc; int pltrelasize; scalar_t__ relocbase; TYPE_3__* pltrela; } ;
typedef TYPE_1__ Obj_Entry ;
typedef TYPE_2__ Elf_Sym ;
typedef TYPE_3__ Elf_Rela ;
typedef int Elf_Rel ;
typedef scalar_t__ Elf_Addr ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_3 (int ,TYPE_1__*,TYPE_1__ const**,int,int *,struct Struct_RtldLockState*) ;
 int FUNC_4 (int ,struct Struct_RtldLockState*) ;
 int FUNC_5 (scalar_t__*,scalar_t__,TYPE_1__ const*,TYPE_1__*,int const*) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (TYPE_1__ const*,TYPE_2__ const*) ;
 int FUNC_7 (int ,struct Struct_RtldLockState*) ;

int
FUNC_8(Obj_Entry *VAR_4, int VAR_5,
   struct Struct_RtldLockState *VAR_6)
{
 const Elf_Rela *VAR_7;
 const Elf_Rela *VAR_8;
 Elf_Addr *VAR_9, VAR_10;
 const Elf_Sym *VAR_11;
 const Obj_Entry *VAR_12;

 if (!VAR_4->gnu_ifunc)
  return (0);
 VAR_7 = (const Elf_Rela *)((const char *)VAR_4->pltrela + VAR_4->pltrelasize);
 for (VAR_8 = VAR_4->pltrela; VAR_8 < VAR_7; VAR_8++) {
  if (FUNC_1(VAR_8->r_info) == VAR_0) {
   VAR_9 = (Elf_Addr *)(VAR_4->relocbase + VAR_8->r_offset);
   VAR_11 = FUNC_3(FUNC_0(VAR_8->r_info), VAR_4, &VAR_12,
       VAR_2 | VAR_5, ((void*)0), VAR_6);
   if (VAR_11 == ((void*)0))
    return (-1);
   if (FUNC_2(VAR_11->st_info) != VAR_1)
    continue;
   FUNC_4(VAR_3, VAR_6);
   VAR_10 = (Elf_Addr)FUNC_6(VAR_12, VAR_11);
   FUNC_7(VAR_3, VAR_6);
   FUNC_5(VAR_9, VAR_10, VAR_12, VAR_4,
       (const Elf_Rel *)VAR_8);
  }
 }
 VAR_4->gnu_ifunc = 0;
 return (0);
}
