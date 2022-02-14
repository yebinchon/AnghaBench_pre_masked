
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int linker_file_t ;
typedef TYPE_1__* elf_file_t ;
struct TYPE_2__ {int relsize; int relasize; scalar_t__ address; int * rela; int * rel; } ;
typedef int Elf_Rela ;
typedef int Elf_Rel ;
typedef int Elf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int const*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(linker_file_t VAR_3)
{
 const Elf_Rel *VAR_4;
 const Elf_Rel *VAR_5;
 const Elf_Rela *VAR_6;
 const Elf_Rela *VAR_7;
 elf_file_t VAR_8 = (elf_file_t)VAR_3;


 if ((VAR_5 = VAR_8->rel) != ((void*)0)) {
  VAR_4 = (const Elf_Rel *)((const char *)VAR_8->rel + VAR_8->relsize);
  while (VAR_5 < VAR_4) {
   FUNC_0(VAR_3, (Elf_Addr)VAR_8->address, VAR_5,
       VAR_0, VAR_2);
   VAR_5++;
  }
 }


 if ((VAR_7 = VAR_8->rela) != ((void*)0)) {
  VAR_6 = (const Elf_Rela *)
      ((const char *)VAR_8->rela + VAR_8->relasize);
  while (VAR_7 < VAR_6) {
   FUNC_0(VAR_3, (Elf_Addr)VAR_8->address, VAR_7,
       VAR_1, VAR_2);
   VAR_7++;
  }
 }
}
