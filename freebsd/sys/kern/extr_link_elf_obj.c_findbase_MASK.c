
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* elf_file_t ;
struct TYPE_5__ {int nprogtab; TYPE_1__* progtab; } ;
struct TYPE_4__ {int sec; scalar_t__ addr; } ;
typedef scalar_t__ Elf_Addr ;



__attribute__((used)) static Elf_Addr
FUNC_0(elf_file_t VAR_0, int VAR_1)
{
 int VAR_2;
 Elf_Addr VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->nprogtab; VAR_2++) {
  if (VAR_1 == VAR_0->progtab[VAR_2].sec) {
   VAR_3 = (Elf_Addr)VAR_0->progtab[VAR_2].addr;
   break;
  }
 }
 return VAR_3;
}
