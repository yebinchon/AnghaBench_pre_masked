
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dbg_arange_cnt; int * dbg_arange_array; } ;
typedef scalar_t__ Dwarf_Signed ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Debug ;
typedef int Dwarf_Arange ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ) ;

int
FUNC_3(Dwarf_Debug VAR_6, Dwarf_Arange **VAR_7,
    Dwarf_Signed *VAR_8, Dwarf_Error *VAR_9)
{

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == ((void*)0)) {
  FUNC_0(VAR_6, VAR_9, VAR_0);
  return (VAR_3);
 }

 if (VAR_6->dbg_arange_cnt == 0) {
  if (FUNC_1(VAR_6, VAR_9) != VAR_1)
   return (VAR_3);
  if (VAR_6->dbg_arange_cnt == 0) {
   FUNC_0(VAR_6, VAR_9, VAR_2);
   return (VAR_4);
  }
 }

 FUNC_2(VAR_6->dbg_arange_array != ((void*)0));

 *VAR_7 = VAR_6->dbg_arange_array;
 *VAR_8 = VAR_6->dbg_arange_cnt;

 return (VAR_5);
}
