
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* elf_file_t ;
struct TYPE_5__ {int st_info; } ;
struct TYPE_4__ {TYPE_2__* symtab; } ;
typedef TYPE_2__ Elf_Sym ;
typedef int Elf_Size ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(elf_file_t VAR_1, Elf_Size VAR_2)
{
 const Elf_Sym *VAR_3;

 if (FUNC_0(VAR_2)) {
  VAR_3 = VAR_1->symtab + FUNC_0(VAR_2);
  return (FUNC_1(VAR_3->st_info));
 }
 return (VAR_0);
}
