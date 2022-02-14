
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int intmax_t ;
struct TYPE_14__ {scalar_t__ st_name; scalar_t__ st_value; } ;
struct TYPE_13__ {size_t local_gotno; size_t gotsym; scalar_t__ strtab; int path; scalar_t__ relocbase; scalar_t__* pltgot; } ;
struct TYPE_12__ {int env; } ;
typedef TYPE_1__ RtldLockState ;
typedef TYPE_2__ Obj_Entry ;
typedef TYPE_3__ Elf_Sym ;
typedef size_t Elf_Size ;
typedef scalar_t__ Elf_Addr ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,scalar_t__,void*,void*) ;
 TYPE_3__* FUNC_1 (size_t,TYPE_2__*,TYPE_2__ const**,int ,int *,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,int ) ;

Elf_Addr
FUNC_7(Obj_Entry *VAR_3, Elf_Size VAR_4)
{
        Elf_Addr *VAR_5 = VAR_3->pltgot;
        const Elf_Sym *VAR_6;
        const Obj_Entry *VAR_7;
        Elf_Addr *VAR_8;
        Elf_Addr VAR_9;
        RtldLockState VAR_10;

 FUNC_4(VAR_2, &VAR_10);
 if (FUNC_6(VAR_10.env, 0) != 0)
  FUNC_3(VAR_2, &VAR_10);

 VAR_8 = &VAR_5[VAR_3->local_gotno + VAR_4 - VAR_3->gotsym];
        VAR_6 = FUNC_1(VAR_4, VAR_3, &VAR_7, VAR_0, ((void*)0),
           &VAR_10);
        if (VAR_6 == ((void*)0))
  FUNC_5();

        VAR_9 = (Elf_Addr)(VAR_7->relocbase + VAR_6->st_value);
        FUNC_0("bind now/fixup at %s sym # %jd in %s --> was=%p new=%p",
     VAR_3->path,
     (intmax_t)VAR_4, VAR_7->strtab + VAR_6->st_name,
     (void *)*VAR_8, (void *)VAR_9);
 if (!VAR_1)
  *VAR_8 = VAR_9;
 FUNC_2(VAR_2, &VAR_10);
 return (Elf_Addr)VAR_9;
}
