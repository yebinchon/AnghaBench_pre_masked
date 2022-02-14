
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_4__ {size_t dbg_strtab_size; size_t dbg_strtab_cap; char* dbg_strtab; } ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Debug ;


 int FUNC_0 (TYPE_1__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 char* FUNC_2 (char*,size_t) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,size_t) ;

int
FUNC_5(Dwarf_Debug VAR_2, char *VAR_3, uint64_t *VAR_4,
    Dwarf_Error *VAR_5)
{
 size_t VAR_6;

 FUNC_1(VAR_2 != ((void*)0) && VAR_3 != ((void*)0));

 VAR_6 = FUNC_3(VAR_3) + 1;
 while (VAR_2->dbg_strtab_size + VAR_6 > VAR_2->dbg_strtab_cap) {
  VAR_2->dbg_strtab_cap *= 2;
  VAR_2->dbg_strtab = FUNC_2(VAR_2->dbg_strtab,
      (size_t) VAR_2->dbg_strtab_cap);
  if (VAR_2->dbg_strtab == ((void*)0)) {
   FUNC_0(VAR_2, VAR_5, VAR_0);
   return (VAR_0);
  }
 }

 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_2->dbg_strtab_size;

 FUNC_4(&VAR_2->dbg_strtab[VAR_2->dbg_strtab_size], VAR_3, VAR_6 - 1);
 VAR_2->dbg_strtab_size += VAR_6;
 VAR_2->dbg_strtab[VAR_2->dbg_strtab_size - 1] = '\0';

 return (VAR_1);
}
