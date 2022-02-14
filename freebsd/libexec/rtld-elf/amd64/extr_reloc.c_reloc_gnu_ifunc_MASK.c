
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int r_info; scalar_t__ r_offset; } ;
struct TYPE_13__ {int st_info; } ;
struct TYPE_12__ {int gnu_ifunc; int pltrelasize; scalar_t__ relocbase; TYPE_3__* pltrela; } ;
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
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int ,TYPE_1__ const*,TYPE_1__*,int const*) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_1__ const*,TYPE_2__ const*) ;
 int FUNC_7 (int ,int *) ;

int
FUNC_8(Obj_Entry *VAR_3, int VAR_4, RtldLockState *VAR_5)
{
    const Elf_Rela *VAR_6;
    const Elf_Rela *VAR_7;

    if (!VAR_3->gnu_ifunc)
 return (0);
    VAR_6 = (const Elf_Rela *)((const char *)VAR_3->pltrela + VAR_3->pltrelasize);
    for (VAR_7 = VAR_3->pltrela; VAR_7 < VAR_6; VAR_7++) {
 Elf_Addr *VAR_8, VAR_9;
 const Elf_Sym *VAR_10;
 const Obj_Entry *VAR_11;

 switch (FUNC_1(VAR_7->r_info)) {
 case 128:
   VAR_8 = (Elf_Addr *)(VAR_3->relocbase + VAR_7->r_offset);
   VAR_10 = FUNC_3(FUNC_0(VAR_7->r_info), VAR_3, &VAR_11,
  VAR_1 | VAR_4, ((void*)0), VAR_5);
   if (VAR_10 == ((void*)0))
       return (-1);
   if (FUNC_2(VAR_10->st_info) != VAR_0)
       continue;
   FUNC_4(VAR_2, VAR_5);
   VAR_9 = (Elf_Addr)FUNC_6(VAR_11, VAR_10);
   FUNC_7(VAR_2, VAR_5);
   FUNC_5(VAR_8, VAR_9, VAR_11, VAR_3, (const Elf_Rel *)VAR_7);
   break;
 }
    }
    VAR_3->gnu_ifunc = 0;
    return (0);
}
