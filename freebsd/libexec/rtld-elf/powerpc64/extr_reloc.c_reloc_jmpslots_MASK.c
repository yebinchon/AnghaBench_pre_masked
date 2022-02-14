
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct funcdesc {int dummy; } ;
struct TYPE_13__ {int r_info; scalar_t__ r_offset; } ;
struct TYPE_12__ {scalar_t__ st_value; } ;
struct TYPE_11__ {int pltrelasize; int jmpslots_done; scalar_t__ relocbase; TYPE_3__* pltrela; } ;
typedef int RtldLockState ;
typedef TYPE_1__ Obj_Entry ;
typedef TYPE_2__ Elf_Sym ;
typedef TYPE_3__ Elf_Rela ;
typedef int Elf_Rel ;
typedef scalar_t__ Elf_Addr ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__*,int) ;
 int FUNC_4 (char*) ;
 TYPE_2__* FUNC_5 (int ,TYPE_1__*,TYPE_1__ const**,int,int *,int *) ;
 int FUNC_6 (scalar_t__*,scalar_t__,TYPE_1__ const*,TYPE_1__*,int const*) ;
 TYPE_2__ const VAR_2 ;

int
FUNC_7(Obj_Entry *VAR_3, int VAR_4, RtldLockState *VAR_5)
{
 const Obj_Entry *VAR_6;
 const Elf_Rela *VAR_7;
 const Elf_Rela *VAR_8;
 const Elf_Sym *VAR_9;
 Elf_Addr *VAR_10;
 Elf_Addr VAR_11;

 VAR_7 = (const Elf_Rela *)((const char *)VAR_3->pltrela +
     VAR_3->pltrelasize);
 for (VAR_8 = VAR_3->pltrela; VAR_8 < VAR_7; VAR_8++) {
  FUNC_2(FUNC_1(VAR_8->r_info) == VAR_0);
  VAR_10 = (Elf_Addr *)(VAR_3->relocbase + VAR_8->r_offset);
  VAR_9 = FUNC_5(FUNC_0(VAR_8->r_info), VAR_3, &VAR_6,
      VAR_1 | VAR_4, ((void*)0), VAR_5);
  if (VAR_9 == ((void*)0)) {
   FUNC_4("reloc_jmpslots: sym not found");
   return (-1);
  }

  VAR_11 = (Elf_Addr)(VAR_6->relocbase + VAR_9->st_value);

  if (VAR_9 == &VAR_2) {


   FUNC_3(VAR_10, sizeof(struct funcdesc));



  } else {
   FUNC_6(VAR_10, VAR_11, VAR_6, VAR_3,
       (const Elf_Rel *) VAR_8);
  }
 }

 VAR_3->jmpslots_done = 1;

 return (0);
}
