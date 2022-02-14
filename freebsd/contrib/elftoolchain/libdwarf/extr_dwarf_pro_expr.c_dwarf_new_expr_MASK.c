
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct _Dwarf_P_Expr {int dummy; } ;
struct TYPE_10__ {int dbgp_pelist; } ;
struct TYPE_9__ {TYPE_2__* pe_dbg; int pe_eelist; } ;
typedef TYPE_1__* Dwarf_P_Expr ;
typedef TYPE_2__* Dwarf_P_Debug ;
typedef int Dwarf_Error ;


 int FUNC_0 (TYPE_2__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (int,int) ;
 int VAR_3 ;

Dwarf_P_Expr
FUNC_4(Dwarf_P_Debug VAR_4, Dwarf_Error *VAR_5)
{
 Dwarf_P_Expr VAR_6;

 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_4, VAR_5, VAR_0);
  return (VAR_2);
 }

 if ((VAR_6 = FUNC_3(1, sizeof(struct _Dwarf_P_Expr))) == ((void*)0)) {
  FUNC_0(VAR_4, VAR_5, VAR_1);
  return (VAR_2);
 }
 FUNC_1(&VAR_6->pe_eelist);

 FUNC_2(&VAR_4->dbgp_pelist, VAR_6, VAR_3);
 VAR_6->pe_dbg = VAR_4;

 return (VAR_6);
}
