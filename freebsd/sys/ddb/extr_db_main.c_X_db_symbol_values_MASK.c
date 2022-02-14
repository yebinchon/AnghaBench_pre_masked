
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ value; scalar_t__ name; } ;
typedef TYPE_1__ linker_symval_t ;
struct TYPE_7__ {int * private; } ;
typedef TYPE_2__ db_symtab_t ;
typedef scalar_t__ db_expr_t ;
typedef int c_linker_sym_t ;
typedef scalar_t__ c_db_sym_t ;
struct TYPE_8__ {int st_name; scalar_t__ st_value; } ;
typedef TYPE_3__ Elf_Sym ;


 int FUNC_0 (int ,TYPE_1__*) ;

void
FUNC_1(db_symtab_t *VAR_0, c_db_sym_t VAR_1, const char **VAR_2,
    db_expr_t *VAR_3)
{
 linker_symval_t VAR_4;

 if (VAR_0->private == ((void*)0)) {
  FUNC_0((c_linker_sym_t)VAR_1, &VAR_4);
  if (VAR_2 != ((void*)0))
   *VAR_2 = (const char*)VAR_4.name;
  if (VAR_3 != ((void*)0))
   *VAR_3 = (db_expr_t)VAR_4.value;
 } else {
  if (VAR_2 != ((void*)0))
   *VAR_2 = (const char *)VAR_0->private +
       ((const Elf_Sym *)VAR_1)->st_name;
  if (VAR_3 != ((void*)0))
   *VAR_3 = (db_expr_t)((const Elf_Sym *)VAR_1)->st_value;
 }
}
