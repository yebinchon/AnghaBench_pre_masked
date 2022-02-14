
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef long u_long ;
typedef int linker_file_t ;
typedef TYPE_1__* elf_file_t ;
typedef scalar_t__ caddr_t ;
typedef scalar_t__ c_linker_sym_t ;
struct TYPE_4__ {scalar_t__ st_name; long st_value; } ;
struct TYPE_3__ {int ddbsymcnt; TYPE_2__* ddbsymtab; } ;
typedef TYPE_2__ Elf_Sym ;



__attribute__((used)) static int
FUNC_0(linker_file_t VAR_0, caddr_t VAR_1,
    c_linker_sym_t *VAR_2, long *VAR_3)
{
 elf_file_t VAR_4 = (elf_file_t) VAR_0;
 u_long VAR_5 = (uintptr_t) (void *) VAR_1;
 u_long VAR_6 = VAR_5;
 u_long VAR_7;
 const Elf_Sym *VAR_8;
 const Elf_Sym *VAR_9 = ((void*)0);
 int VAR_10;

 for (VAR_10 = 0, VAR_8 = VAR_4->ddbsymtab; VAR_10 < VAR_4->ddbsymcnt; VAR_10++, VAR_8++) {
  if (VAR_8->st_name == 0)
   continue;
  VAR_7 = VAR_8->st_value;
  if (VAR_5 >= VAR_7) {
   if (VAR_5 - VAR_7 < VAR_6) {
    VAR_6 = VAR_5 - VAR_7;
    VAR_9 = VAR_8;
    if (VAR_6 == 0)
     break;
   } else if (VAR_5 - VAR_7 == VAR_6) {
    VAR_9 = VAR_8;
   }
  }
 }
 if (VAR_9 == ((void*)0))
  *VAR_3 = VAR_5;
 else
  *VAR_3 = VAR_6;
 *VAR_2 = (c_linker_sym_t) VAR_9;

 return 0;
}
