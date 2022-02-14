
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int d_ptr; int d_val; } ;
struct TYPE_7__ {int d_tag; TYPE_1__ d_un; } ;
struct TYPE_6__ {int r_offset; int r_addend; } ;
typedef TYPE_2__ Elf_Rela ;
typedef TYPE_3__ Elf_Dyn ;
typedef int Elf_Addr ;


 int VAR_0 ;



void
FUNC_0(Elf_Dyn *VAR_1, Elf_Addr VAR_2)
{
 const Elf_Rela *VAR_3 = ((void*)0), *VAR_4;
 Elf_Addr VAR_5 = 0;
 Elf_Addr *VAR_6;




 for (; VAR_1->d_tag != VAR_0; VAR_1++) {
  switch (VAR_1->d_tag) {
  case 129:
   VAR_3 = (const Elf_Rela *)(VAR_2+VAR_1->d_un.d_ptr);
   break;
  case 128:
   VAR_5 = VAR_1->d_un.d_val;
   break;
  }
 }




 VAR_4 = (const Elf_Rela *)((const char *)VAR_3 + VAR_5);
 for (; VAR_3 < VAR_4; VAR_3++) {
  VAR_6 = (Elf_Addr *)(VAR_2 + VAR_3->r_offset);
  *VAR_6 = (Elf_Addr)(VAR_2 + VAR_3->r_addend);
 }
}
