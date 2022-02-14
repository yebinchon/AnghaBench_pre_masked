
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pe_length; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Small ;
typedef TYPE_1__* Dwarf_P_Expr ;
typedef int Dwarf_Error ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_1__*,int ,int ,int ,int *) ;

Dwarf_Unsigned
FUNC_2(Dwarf_P_Expr VAR_2, Dwarf_Small VAR_3, Dwarf_Unsigned VAR_4,
    Dwarf_Unsigned VAR_5, Dwarf_Error *VAR_6)
{

 if (VAR_2 == ((void*)0)) {
  FUNC_0(((void*)0), VAR_6, VAR_0);
  return (VAR_1);
 }

 if (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6) == ((void*)0))
  return (VAR_1);

 return (VAR_2->pe_length);
}
