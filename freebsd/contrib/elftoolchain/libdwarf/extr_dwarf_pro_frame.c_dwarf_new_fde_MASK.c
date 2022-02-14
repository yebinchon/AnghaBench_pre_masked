
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct _Dwarf_Fde {int dummy; } ;
struct TYPE_5__ {int * fde_dbg; } ;
typedef TYPE_1__* Dwarf_P_Fde ;
typedef int * Dwarf_P_Debug ;
typedef int Dwarf_Error ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* FUNC_1 (int,int) ;

Dwarf_P_Fde
FUNC_2(Dwarf_P_Debug VAR_3, Dwarf_Error *VAR_4)
{
 Dwarf_P_Fde VAR_5;

 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_3, VAR_4, VAR_0);
  return (VAR_2);
 }

 if ((VAR_5 = FUNC_1(1, sizeof(struct _Dwarf_Fde))) == ((void*)0)) {
  FUNC_0(VAR_3, VAR_4, VAR_1);
  return (VAR_2);
 }

 VAR_5->fde_dbg = VAR_3;

 return (VAR_5);
}
