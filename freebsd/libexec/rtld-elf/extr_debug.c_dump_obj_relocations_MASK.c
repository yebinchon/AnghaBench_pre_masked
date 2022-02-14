
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int relsize; int relasize; int pltrelsize; int pltrelasize; int pltrela; int pltrel; int rela; int rel; int relocbase; int path; } ;
typedef TYPE_1__ Obj_Entry ;
typedef int Elf_Rela ;
typedef int Elf_Rel ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (char*,int,...) ;

void
FUNC_3 (Obj_Entry *VAR_0)
{

    FUNC_2("Object \"%s\", relocbase %p\n", VAR_0->path, VAR_0->relocbase);

    if (VAR_0->relsize) {
        FUNC_2("Non-PLT Relocations: %ld\n",
            (VAR_0->relsize / sizeof(Elf_Rel)));
        FUNC_0(VAR_0, VAR_0->rel, VAR_0->relsize);
    }

    if (VAR_0->relasize) {
        FUNC_2("Non-PLT Relocations with Addend: %ld\n",
            (VAR_0->relasize / sizeof(Elf_Rela)));
        FUNC_1(VAR_0, VAR_0->rela, VAR_0->relasize);
    }

    if (VAR_0->pltrelsize) {
        FUNC_2("PLT Relocations: %ld\n",
            (VAR_0->pltrelsize / sizeof(Elf_Rel)));
        FUNC_0(VAR_0, VAR_0->pltrel, VAR_0->pltrelsize);
    }

    if (VAR_0->pltrelasize) {
        FUNC_2("PLT Relocations with Addend: %ld\n",
            (VAR_0->pltrelasize / sizeof(Elf_Rela)));
        FUNC_1(VAR_0, VAR_0->pltrela, VAR_0->pltrelasize);
    }
}
