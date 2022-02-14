
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* elf_file_t ;
struct TYPE_5__ {scalar_t__ st_shndx; scalar_t__ st_value; } ;
struct TYPE_4__ {scalar_t__ ddbsymcnt; TYPE_2__* ddbsymtab; } ;
typedef TYPE_2__ Elf_Sym ;
typedef scalar_t__ Elf_Size ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_0(elf_file_t VAR_2)
{
 Elf_Sym *VAR_3;
 Elf_Size VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->ddbsymcnt; VAR_4++) {
  VAR_3 = VAR_2->ddbsymtab + VAR_4;
  if (VAR_3->st_shndx == VAR_0) {
   VAR_3->st_shndx = VAR_1;
   VAR_3->st_value = 0;
  }
 }
}
