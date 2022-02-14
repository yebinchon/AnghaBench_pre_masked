
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ r_offset; } ;
struct TYPE_5__ {scalar_t__ glink; TYPE_2__ const* pltrela; scalar_t__ relocbase; } ;
typedef TYPE_1__ Obj_Entry ;
typedef TYPE_2__ Elf_Rela ;
typedef scalar_t__ Elf_Addr ;


 int FUNC_0 (char*,void*,long,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(Obj_Entry *VAR_0, const Elf_Rela *VAR_1)
{
 Elf_Addr *VAR_2 = (Elf_Addr *)(VAR_0->relocbase + VAR_1->r_offset);
 long VAR_3;

 VAR_3 = VAR_1 - VAR_0->pltrela;

 FUNC_0(" reloc_plt_object: where=%p,reloff=%lx,glink=%#lx", (void *)VAR_2,
     VAR_3, VAR_0->glink);



 *VAR_2 = (Elf_Addr)VAR_0->glink + 32 +
     8*((VAR_3 < 0x8000) ? VAR_3 : 0x8000) +
     12*((VAR_3 < 0x8000) ? 0 : (VAR_3 - 0x8000));




 return (0);
}
