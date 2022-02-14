
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ caddr_t ;
struct TYPE_5__ {scalar_t__ d_val; scalar_t__ d_ptr; } ;
struct TYPE_7__ {int d_tag; TYPE_1__ d_un; } ;
struct TYPE_6__ {scalar_t__ r_addend; scalar_t__ r_offset; int r_info; } ;
typedef scalar_t__ Elf_Word ;
typedef scalar_t__ Elf_Addr ;
typedef TYPE_2__ ElfW_Rel ;
typedef TYPE_3__ ElfW_Dyn ;


 int VAR_0 ;






 int FUNC_0 (int ) ;



void
FUNC_1(Elf_Addr VAR_1, ElfW_Dyn *VAR_2)
{
 Elf_Word VAR_3, VAR_4;
 Elf_Addr *VAR_5;
 ElfW_Rel *VAR_6;
 ElfW_Dyn *VAR_7;




 VAR_3 = 0;
 VAR_4 = 0;
 for (VAR_7 = VAR_2; VAR_7->d_tag != VAR_0; VAR_7++) {
  switch (VAR_7->d_tag) {
  case 135:
  case 134:
   VAR_6 = (ElfW_Rel *)(VAR_7->d_un.d_ptr + VAR_1);
   break;
  case 130:
  case 132:
   VAR_3 = VAR_7->d_un.d_val;
   break;
  case 131:
  case 133:
   VAR_4 = VAR_7->d_un.d_val;
   break;
  default:
   break;
  }
 }






 for (; VAR_3 > 0; VAR_3 -= VAR_4) {
  switch (FUNC_0(VAR_6->r_info)) {
  case 129:

   break;

  case 128:
   VAR_5 = (Elf_Addr *)(VAR_6->r_offset + VAR_1);





   *VAR_5 += VAR_1;

   break;
  default:

   break;
  }
  VAR_6 = (ElfW_Rel *)(void *)((caddr_t) VAR_6 + VAR_4);
 }
}
