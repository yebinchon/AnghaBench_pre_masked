
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int linker_file_t ;
typedef TYPE_1__* elf_file_t ;
typedef scalar_t__ c_linker_sym_t ;
struct TYPE_4__ {int st_name; scalar_t__ st_shndx; } ;
struct TYPE_3__ {int ddbsymcnt; char* ddbstrtab; TYPE_2__* ddbsymtab; } ;
typedef TYPE_2__ Elf_Sym ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_1(linker_file_t VAR_2, const char *VAR_3, c_linker_sym_t *VAR_4)
{
 elf_file_t VAR_5 = (elf_file_t) VAR_2;
 const Elf_Sym *VAR_6;
 const char *VAR_7;
 int VAR_8;

 for (VAR_8 = 0, VAR_6 = VAR_5->ddbsymtab; VAR_8 < VAR_5->ddbsymcnt; VAR_8++, VAR_6++) {
  VAR_7 = VAR_5->ddbstrtab + VAR_6->st_name;
  if (VAR_6->st_shndx != VAR_1 && FUNC_0(VAR_3, VAR_7) == 0) {
   *VAR_4 = (c_linker_sym_t) VAR_6;
   return 0;
  }
 }
 return VAR_0;
}
