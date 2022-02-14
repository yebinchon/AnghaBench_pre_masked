
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* end; scalar_t__ start; int * private; } ;
typedef TYPE_1__ db_symtab_t ;
typedef scalar_t__ db_strategy_t ;
typedef scalar_t__ db_expr_t ;
typedef scalar_t__ db_addr_t ;
typedef int caddr_t ;
typedef scalar_t__ c_linker_sym_t ;
typedef int * c_db_sym_t ;
struct TYPE_5__ {scalar_t__ st_name; scalar_t__ st_shndx; scalar_t__ st_value; int st_info; } ;
typedef TYPE_2__ Elf_Sym ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,scalar_t__*,unsigned long*) ;

c_db_sym_t
FUNC_4(db_symtab_t *VAR_7, db_addr_t VAR_8, db_strategy_t VAR_9,
    db_expr_t *VAR_10)
{
 c_linker_sym_t VAR_11;
 Elf_Sym *VAR_12, *VAR_13;
 unsigned long VAR_14;
 db_addr_t VAR_15;

 if (VAR_7->private == ((void*)0)) {
  if (!FUNC_3((caddr_t)VAR_8, &VAR_11, &VAR_14)) {
   *VAR_10 = (db_expr_t)VAR_14;
   return ((c_db_sym_t)VAR_11);
  }
  return (((void*)0));
 }

 VAR_14 = ~0UL;
 VAR_13 = ((void*)0);
 VAR_15 = FUNC_0(VAR_8);
 for (VAR_12 = (Elf_Sym*)VAR_7->start; (char*)VAR_12 < VAR_7->end; VAR_12++) {
  if (VAR_12->st_name == 0 || VAR_12->st_shndx == VAR_2)
   continue;
  if (VAR_15 < VAR_12->st_value)
   continue;
  if (FUNC_2(VAR_12->st_info) != VAR_6 &&
      FUNC_2(VAR_12->st_info) != VAR_4 &&
      FUNC_2(VAR_12->st_info) != VAR_5)
   continue;
  if ((VAR_15 - VAR_12->st_value) > VAR_14)
   continue;
  if ((VAR_15 - VAR_12->st_value) < VAR_14) {
   VAR_14 = VAR_15 - VAR_12->st_value;
   VAR_13 = VAR_12;
  } else {
   if (VAR_13 == ((void*)0))
    VAR_13 = VAR_12;
   else if (FUNC_1(VAR_13->st_info) == VAR_3 &&
       FUNC_1(VAR_12->st_info) != VAR_3)
    VAR_13 = VAR_12;
  }
  if (VAR_14 == 0) {
   if (VAR_9 == VAR_1 &&
       FUNC_2(VAR_12->st_info) == VAR_4 &&
       FUNC_1(VAR_12->st_info) != VAR_3)
    break;
   if (VAR_9 == VAR_0 &&
       FUNC_1(VAR_12->st_info) != VAR_3)
    break;
  }
 }

 *VAR_10 = (VAR_13 == ((void*)0)) ? VAR_8 : VAR_14;
 return ((c_db_sym_t)VAR_13);
}
