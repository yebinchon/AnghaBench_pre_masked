
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dbg_pointer_size; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Signed ;
typedef int Dwarf_Ptr ;
typedef int Dwarf_Locdesc ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Debug ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ,int **,int *,int *) ;

int
FUNC_1(Dwarf_Debug VAR_0, Dwarf_Ptr VAR_1,
    Dwarf_Unsigned VAR_2, Dwarf_Locdesc **VAR_3, Dwarf_Signed *VAR_4,
    Dwarf_Error *VAR_5)
{

 return (FUNC_0(VAR_0, VAR_1, VAR_2,
     VAR_0->dbg_pointer_size, VAR_3, VAR_4, VAR_5));
}
