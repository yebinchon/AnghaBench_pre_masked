
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lr_offset; void* lr_number2; void* lr_number; int lr_atom; } ;
struct _Dwarf_P_Expr_Entry {TYPE_1__ ee_loc; } ;
struct TYPE_5__ {int pe_length; int pe_invalid; int pe_eelist; int * pe_dbg; } ;
typedef void* Dwarf_Unsigned ;
typedef int Dwarf_Small ;
typedef TYPE_2__* Dwarf_P_Expr ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,struct _Dwarf_P_Expr_Entry*,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int *,int ,void*,void*,int*,int *) ;
 int FUNC_3 (int) ;
 struct _Dwarf_P_Expr_Entry* FUNC_4 (int,int) ;
 int VAR_2 ;

__attribute__((used)) static struct _Dwarf_P_Expr_Entry *
FUNC_5(Dwarf_P_Expr VAR_3, Dwarf_Small VAR_4, Dwarf_Unsigned VAR_5,
    Dwarf_Unsigned VAR_6, Dwarf_Error *VAR_7)
{
 struct _Dwarf_P_Expr_Entry *VAR_8;
 Dwarf_Debug VAR_9;
 int VAR_10;

 VAR_9 = VAR_3 != ((void*)0) ? VAR_3->pe_dbg : ((void*)0);

 if (FUNC_2(VAR_3->pe_dbg, ((void*)0), ((void*)0), VAR_4, VAR_5,
     VAR_6, &VAR_10, VAR_7) != VAR_1)
  return (((void*)0));
 FUNC_3(VAR_10 > 0);

 if ((VAR_8 = FUNC_4(1, sizeof(*VAR_8))) == ((void*)0)) {
  FUNC_0(VAR_9, VAR_7, VAR_0);
  return (((void*)0));
 }

 FUNC_1(&VAR_3->pe_eelist, VAR_8, VAR_2);

 VAR_8->ee_loc.lr_atom = VAR_4;
 VAR_8->ee_loc.lr_number = VAR_5;
 VAR_8->ee_loc.lr_number2 = VAR_6;
 VAR_8->ee_loc.lr_offset = VAR_3->pe_length;
 VAR_3->pe_length += VAR_10;
 VAR_3->pe_invalid = 1;

 return (VAR_8);
}
