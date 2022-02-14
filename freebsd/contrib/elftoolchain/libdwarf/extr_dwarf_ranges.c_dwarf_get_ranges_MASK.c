
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dbg_cu; int dbg_info_loaded; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Signed ;
typedef int Dwarf_Ranges ;
typedef int Dwarf_Off ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Debug ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int **,int *,int *,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,int,int *) ;

int
FUNC_4(Dwarf_Debug VAR_3, Dwarf_Off VAR_4, Dwarf_Ranges **VAR_5,
    Dwarf_Signed *VAR_6, Dwarf_Unsigned *VAR_7, Dwarf_Error *VAR_8)
{

 if (VAR_3 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == ((void*)0)) {
  FUNC_0(VAR_3, VAR_8, VAR_0);
  return (VAR_2);
 }

 if (!VAR_3->dbg_info_loaded) {
  if (FUNC_3(VAR_3, 1, 1, VAR_8) != VAR_1)
   return (VAR_2);
 }

 return (FUNC_2(VAR_3, FUNC_1(&VAR_3->dbg_cu), VAR_4,
     VAR_5, VAR_6, VAR_7, VAR_8));
}
