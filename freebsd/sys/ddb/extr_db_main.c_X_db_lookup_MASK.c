
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* end; int * private; scalar_t__ start; } ;
typedef TYPE_1__ db_symtab_t ;
typedef int * c_linker_sym_t ;
typedef int * c_db_sym_t ;
struct TYPE_5__ {scalar_t__ st_name; } ;
typedef TYPE_2__ Elf_Sym ;


 int FUNC_0 (char const*,int **) ;
 int FUNC_1 (int *,char const*) ;

c_db_sym_t
FUNC_2(db_symtab_t *VAR_0, const char *VAR_1)
{
 c_linker_sym_t VAR_2;
 Elf_Sym *VAR_3;

 if (VAR_0->private == ((void*)0)) {
  return ((c_db_sym_t)((!FUNC_0(VAR_1, &VAR_2))
   ? VAR_2 : ((void*)0)));
 } else {
  VAR_3 = (Elf_Sym *)VAR_0->start;
  while ((char *)VAR_3 < VAR_0->end) {
   if (VAR_3->st_name != 0 &&
       !FUNC_1(VAR_0->private + VAR_3->st_name, VAR_1))
    return ((c_db_sym_t)VAR_3);
   VAR_3++;
  }
 }
 return (((void*)0));
}
