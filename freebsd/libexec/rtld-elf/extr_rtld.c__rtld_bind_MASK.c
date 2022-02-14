
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_21__ {int r_info; scalar_t__ r_offset; } ;
struct TYPE_20__ {scalar_t__ st_name; scalar_t__ st_value; int st_info; } ;
struct TYPE_19__ {int path; scalar_t__ strtab; scalar_t__ relocbase; scalar_t__ pltrela; scalar_t__ pltrel; } ;
struct TYPE_18__ {int env; } ;
typedef TYPE_1__ RtldLockState ;
typedef TYPE_2__ Obj_Entry ;
typedef TYPE_3__ Elf_Sym ;
typedef int Elf_Size ;
typedef TYPE_4__ Elf_Rel ;
typedef scalar_t__ Elf_Addr ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,scalar_t__,int ,void*,int ) ;
 TYPE_3__* FUNC_4 (int ,TYPE_2__*,TYPE_2__ const**,int ,int *,TYPE_1__*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_7 (scalar_t__*,scalar_t__,TYPE_2__ const*,TYPE_2__*,TYPE_4__ const*) ;
 int FUNC_8 (int ,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (TYPE_2__ const*,TYPE_3__ const*) ;
 scalar_t__ FUNC_11 (int ,int ) ;

Elf_Addr
FUNC_12(Obj_Entry *VAR_3, Elf_Size VAR_4)
{
    const Elf_Rel *VAR_5;
    const Elf_Sym *VAR_6;
    const Obj_Entry *VAR_7;
    Elf_Addr *VAR_8;
    Elf_Addr VAR_9;
    RtldLockState VAR_10;

    FUNC_8(VAR_2, &VAR_10);
    if (FUNC_11(VAR_10.env, 0) != 0)
     FUNC_6(VAR_2, &VAR_10);
    if (VAR_3->pltrel)
 VAR_5 = (const Elf_Rel *)((const char *)VAR_3->pltrel + VAR_4);
    else
 VAR_5 = (const Elf_Rel *)((const char *)VAR_3->pltrela + VAR_4);

    VAR_8 = (Elf_Addr *)(VAR_3->relocbase + VAR_5->r_offset);
    VAR_6 = FUNC_4(FUNC_0(VAR_5->r_info), VAR_3, &VAR_7, VAR_1,
 ((void*)0), &VAR_10);
    if (VAR_6 == ((void*)0))
 FUNC_9();
    if (FUNC_1(VAR_6->st_info) == VAR_0)
 VAR_9 = (Elf_Addr)FUNC_10(VAR_7, VAR_6);
    else
 VAR_9 = (Elf_Addr)(VAR_7->relocbase + VAR_6->st_value);

    FUNC_3("\"%s\" in \"%s\" ==> %p in \"%s\"",
      VAR_7->strtab + VAR_6->st_name, FUNC_2(VAR_3->path),
      (void *)VAR_9, FUNC_2(VAR_7->path));
    VAR_9 = FUNC_7(VAR_8, VAR_9, VAR_7, VAR_3, VAR_5);
    FUNC_5(VAR_2, &VAR_10);
    return VAR_9;
}
