
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * dbg_iface; } ;
typedef int Dwarf_Ptr ;
typedef int Dwarf_Obj_Access_Interface ;
typedef int Dwarf_Handler ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Debug ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__**,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ,int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;

int
FUNC_4(Dwarf_Obj_Access_Interface *VAR_5, Dwarf_Handler VAR_6,
    Dwarf_Ptr VAR_7, Dwarf_Debug *VAR_8, Dwarf_Error *VAR_9)
{
 Dwarf_Debug VAR_10;

 if (VAR_5 == ((void*)0) || VAR_8 == ((void*)0)) {
  FUNC_0(((void*)0), VAR_9, VAR_1);
  return (VAR_3);
 }

 if (FUNC_1(&VAR_10, VAR_0, VAR_9) != VAR_2)
  return (VAR_3);

 VAR_10->dbg_iface = VAR_5;

 if (FUNC_2(VAR_10, 0, VAR_6, VAR_7, VAR_9) != VAR_2) {
  FUNC_3(VAR_10);
  return (VAR_3);
 }

 *VAR_8 = VAR_10;

 return (VAR_4);
}
