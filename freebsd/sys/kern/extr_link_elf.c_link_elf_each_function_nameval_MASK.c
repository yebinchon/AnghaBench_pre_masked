
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int linker_symval_t ;
typedef int (* linker_function_nameval_callback_t ) (int ,int,int *,void*) ;
typedef int linker_file_t ;
typedef TYPE_1__* elf_file_t ;
typedef int c_linker_sym_t ;
struct TYPE_4__ {scalar_t__ st_value; int st_info; } ;
struct TYPE_3__ {int ddbsymcnt; TYPE_2__* ddbsymtab; } ;
typedef TYPE_2__ Elf_Sym ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_2(linker_file_t VAR_2,
    linker_function_nameval_callback_t VAR_3, void *VAR_4)
{
 linker_symval_t VAR_5;
 elf_file_t VAR_6 = (elf_file_t)VAR_2;
 const Elf_Sym* VAR_7;
 int VAR_8, VAR_9;


 for (VAR_8 = 0, VAR_7 = VAR_6->ddbsymtab; VAR_8 < VAR_6->ddbsymcnt; VAR_8++, VAR_7++) {
  if (VAR_7->st_value != 0 &&
      (FUNC_0(VAR_7->st_info) == VAR_0 ||
      FUNC_0(VAR_7->st_info) == VAR_1)) {
   VAR_9 = FUNC_1(VAR_2,
       (c_linker_sym_t) VAR_7, &VAR_5);
   if (VAR_9 != 0)
    return (VAR_9);
   VAR_9 = VAR_3(VAR_2, VAR_8, &VAR_5, VAR_4);
   if (VAR_9 != 0)
    return (VAR_9);
  }
 }
 return (0);
}
