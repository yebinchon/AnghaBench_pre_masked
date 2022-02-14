
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dbg_mode; } ;
typedef int Dwarf_Unsigned ;
typedef TYPE_1__* Dwarf_P_Debug ;
typedef int Dwarf_Error ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

Dwarf_Unsigned
FUNC_3(Dwarf_P_Debug VAR_3, Dwarf_Error *VAR_4)
{

 if (VAR_3 == ((void*)0) || VAR_3->dbg_mode != VAR_0) {
  FUNC_0(VAR_3, VAR_4, VAR_1);
  return (VAR_2);
 }

 FUNC_1(VAR_3);

 FUNC_2(VAR_3);

 return (1);
}
