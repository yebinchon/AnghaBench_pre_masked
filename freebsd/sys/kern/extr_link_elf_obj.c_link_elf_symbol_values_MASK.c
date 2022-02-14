
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; scalar_t__ value; scalar_t__ name; } ;
typedef TYPE_1__ linker_symval_t ;
typedef scalar_t__ linker_file_t ;
typedef TYPE_2__* elf_file_t ;
typedef scalar_t__ caddr_t ;
typedef scalar_t__ c_linker_sym_t ;
struct TYPE_7__ {int st_size; int st_info; scalar_t__ st_value; scalar_t__ st_name; } ;
struct TYPE_6__ {int ddbsymcnt; scalar_t__ ddbstrtab; TYPE_3__ const* ddbsymtab; } ;
typedef TYPE_3__ Elf_Sym ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(linker_file_t VAR_2, c_linker_sym_t VAR_3,
    linker_symval_t *VAR_4)
{
 elf_file_t VAR_5;
 const Elf_Sym *VAR_6;
 caddr_t VAR_7;

 VAR_5 = (elf_file_t) VAR_2;
 VAR_6 = (const Elf_Sym*) VAR_3;
 VAR_7 = (caddr_t)VAR_6->st_value;
 if (VAR_6 >= VAR_5->ddbsymtab && VAR_6 < (VAR_5->ddbsymtab + VAR_5->ddbsymcnt)) {
  VAR_4->name = VAR_5->ddbstrtab + VAR_6->st_name;
  VAR_7 = (caddr_t)VAR_6->st_value;
  if (FUNC_0(VAR_6->st_info) == VAR_1)
   VAR_7 = ((caddr_t (*)(void))VAR_7)();
  VAR_4->value = VAR_7;
  VAR_4->size = VAR_6->st_size;
  return 0;
 }
 return VAR_0;
}
