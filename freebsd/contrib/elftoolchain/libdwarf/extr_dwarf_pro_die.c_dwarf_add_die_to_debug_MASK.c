
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * dbgp_root_die; } ;
typedef int Dwarf_Unsigned ;
typedef int * Dwarf_P_Die ;
typedef TYPE_1__* Dwarf_P_Debug ;
typedef int Dwarf_Error ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

Dwarf_Unsigned
FUNC_1(Dwarf_P_Debug VAR_3, Dwarf_P_Die VAR_4,
    Dwarf_Error *VAR_5)
{

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
  FUNC_0(VAR_3, VAR_5, VAR_0);
  return (VAR_1);
 }

 VAR_3->dbgp_root_die = VAR_4;

 return (VAR_2);
}
