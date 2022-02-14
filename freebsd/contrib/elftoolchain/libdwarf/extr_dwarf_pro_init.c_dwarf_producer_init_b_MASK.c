
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dbg_mode; int * dbgp_func_b; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Ptr ;
typedef TYPE_1__* Dwarf_P_Debug ;
typedef int Dwarf_Handler ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Callback_Func_b ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__**,int,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int ,int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;

Dwarf_P_Debug
FUNC_4(Dwarf_Unsigned VAR_6, Dwarf_Callback_Func_b VAR_7,
    Dwarf_Handler VAR_8, Dwarf_Ptr VAR_9, Dwarf_Error *VAR_10)
{
 Dwarf_P_Debug VAR_11;
 int VAR_12;

 if (VAR_6 & VAR_1 || VAR_6 & VAR_0) {
  FUNC_0(((void*)0), VAR_10, VAR_3);
  return (VAR_5);
 }

 if (VAR_6 & VAR_2)
  VAR_12 = VAR_2;
 else {
  FUNC_0(((void*)0), VAR_10, VAR_3);
  return (VAR_5);
 }

 if (VAR_7 == ((void*)0)) {
  FUNC_0(((void*)0), VAR_10, VAR_3);
  return (VAR_5);
 }

 if (FUNC_1(&VAR_11, VAR_2, VAR_10) != VAR_4)
  return (VAR_5);

 VAR_11->dbg_mode = VAR_12;

 if (FUNC_2(VAR_11, VAR_6, VAR_8, VAR_9, VAR_10) != VAR_4) {
  FUNC_3(VAR_11);
  return (VAR_5);
 }

 VAR_11->dbgp_func_b = VAR_7;

 return (VAR_11);
}
