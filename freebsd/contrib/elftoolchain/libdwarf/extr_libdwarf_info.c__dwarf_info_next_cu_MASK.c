
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * dbg_cu_current; scalar_t__ dbg_info_loaded; } ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Debug ;
typedef int * Dwarf_CU ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int,int *) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;

int
FUNC_3(Dwarf_Debug VAR_3, Dwarf_Error *VAR_4)
{
 Dwarf_CU VAR_5;
 int VAR_6;

 FUNC_2(VAR_3->dbg_cu_current != ((void*)0));
 VAR_5 = FUNC_0(VAR_3->dbg_cu_current, VAR_2);
 if (VAR_5 != ((void*)0)) {
  VAR_3->dbg_cu_current = VAR_5;
  return (VAR_0);
 }

 if (VAR_3->dbg_info_loaded) {
  VAR_3->dbg_cu_current = ((void*)0);
  return (VAR_1);
 }

 VAR_6 = FUNC_1(VAR_3, 0, 1, VAR_4);
 if (VAR_6 != VAR_0)
  return (VAR_6);

 VAR_3->dbg_cu_current = FUNC_0(VAR_3->dbg_cu_current, VAR_2);

 return (VAR_0);
}
