
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pe_length; } ;
typedef int Dwarf_Unsigned ;
typedef TYPE_1__* Dwarf_P_Expr ;
typedef int Dwarf_Error ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

Dwarf_Unsigned
FUNC_1(Dwarf_P_Expr VAR_2, Dwarf_Error *VAR_3)
{

 if (VAR_2 == ((void*)0)) {
  FUNC_0(((void*)0), VAR_3, VAR_0);
  return (VAR_1);
 }

 return (VAR_2->pe_length);
}
