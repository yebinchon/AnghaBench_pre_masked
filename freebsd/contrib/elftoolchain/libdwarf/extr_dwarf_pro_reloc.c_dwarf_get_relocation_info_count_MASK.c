
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dbgp_flags; int dbgp_drscnt; } ;
typedef int Dwarf_Unsigned ;
typedef TYPE_1__* Dwarf_P_Debug ;
typedef int Dwarf_Error ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_1(Dwarf_P_Debug VAR_7, Dwarf_Unsigned *VAR_8,
    int *VAR_9, Dwarf_Error *VAR_10)
{

 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0)) {
  FUNC_0(VAR_7, VAR_10, VAR_2);
  return (VAR_4);
 }

 if ((VAR_7->dbgp_flags & VAR_1) == 0) {
  FUNC_0(VAR_7, VAR_10, VAR_3);
  return (VAR_5);
 }

 *VAR_8 = VAR_7->dbgp_drscnt;
 *VAR_9 = VAR_0;

 return (VAR_6);
}
