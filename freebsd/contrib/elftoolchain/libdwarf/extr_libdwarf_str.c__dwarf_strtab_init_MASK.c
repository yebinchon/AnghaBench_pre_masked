
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ dbg_mode; char* dbg_strtab; scalar_t__ dbg_strtab_cap; scalar_t__ dbg_strtab_size; } ;
struct TYPE_7__ {scalar_t__ ds_data; scalar_t__ ds_size; } ;
typedef TYPE_1__ Dwarf_Section ;
typedef int Dwarf_Error ;
typedef TYPE_2__* Dwarf_Debug ;


 int FUNC_0 (TYPE_2__*,int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;

int
FUNC_5(Dwarf_Debug VAR_5, Dwarf_Error *VAR_6)
{
 Dwarf_Section *VAR_7;

 FUNC_2(VAR_5 != ((void*)0));

 if (VAR_5->dbg_mode == VAR_1 || VAR_5->dbg_mode == VAR_0) {
  VAR_7 = FUNC_1(VAR_5, ".debug_str");
  if (VAR_7 == ((void*)0)) {
   VAR_5->dbg_strtab = ((void*)0);
   VAR_5->dbg_strtab_cap = VAR_5->dbg_strtab_size = 0;
   return (VAR_3);
  }

  VAR_5->dbg_strtab_cap = VAR_5->dbg_strtab_size = VAR_7->ds_size;

  if (VAR_5->dbg_mode == VAR_0) {
   if ((VAR_5->dbg_strtab = FUNC_3((size_t) VAR_7->ds_size)) ==
       ((void*)0)) {
    FUNC_0(VAR_5, VAR_6, VAR_2);
    return (VAR_2);
   }
   FUNC_4(VAR_5->dbg_strtab, VAR_7->ds_data, VAR_7->ds_size);
  } else
   VAR_5->dbg_strtab = (char *) VAR_7->ds_data;
 } else {


  VAR_5->dbg_strtab_cap = VAR_4;
  VAR_5->dbg_strtab_size = 0;

  if ((VAR_5->dbg_strtab = FUNC_3((size_t) VAR_5->dbg_strtab_cap)) ==
      ((void*)0)) {
   FUNC_0(VAR_5, VAR_6, VAR_2);
   return (VAR_2);
  }

  VAR_5->dbg_strtab[0] = '\0';
 }

 return (VAR_3);
}
