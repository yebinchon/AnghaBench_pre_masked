
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct funcdesc {int dummy; } ;
struct TYPE_3__ {scalar_t__* pltgot; } ;
typedef TYPE_1__ Obj_Entry ;
typedef scalar_t__ Elf_Addr ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int ,int) ;

void
FUNC_1(Obj_Entry *VAR_1)
{
 Elf_Addr *VAR_2;

 VAR_2 = VAR_1->pltgot;

 if (VAR_2 == ((void*)0)) {
  return;
 }





 FUNC_0(VAR_2, VAR_0, sizeof(struct funcdesc));
 VAR_2[2] = (Elf_Addr)VAR_1;

}
