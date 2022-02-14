
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int r_info; scalar_t__ r_offset; } ;
struct TYPE_6__ {int pltrelasize; int irelative; scalar_t__ relocbase; TYPE_2__* pltrela; } ;
typedef int RtldLockState ;
typedef TYPE_1__ Obj_Entry ;
typedef TYPE_2__ Elf_Rela ;
typedef int Elf_Addr ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__ const*,int *,int,int *) ;

int
FUNC_3(Obj_Entry *VAR_1, int VAR_2, RtldLockState *VAR_3)
{
 const Elf_Rela *VAR_4;
 const Elf_Rela *VAR_5;

 VAR_4 = (const Elf_Rela *)((const char *)VAR_1->pltrela +
     VAR_1->pltrelasize);
 for (VAR_5 = VAR_1->pltrela; VAR_5 < VAR_4; VAR_5++) {
  Elf_Addr *VAR_6;

  VAR_6 = (Elf_Addr *)(VAR_1->relocbase + VAR_5->r_offset);

  switch(FUNC_0(VAR_5->r_info)) {
  case 130:
   *VAR_6 += (Elf_Addr)VAR_1->relocbase;
   break;
  case 128:
   FUNC_2(VAR_1, VAR_5, VAR_6, VAR_0 | VAR_2,
       VAR_3);
   break;
  case 131:
   VAR_1->irelative = 1;
   break;
  case 129:
   break;
  default:
   FUNC_1("Unknown relocation type %u in PLT",
       (unsigned int)FUNC_0(VAR_5->r_info));
   return (-1);
  }
 }

 return (0);
}
