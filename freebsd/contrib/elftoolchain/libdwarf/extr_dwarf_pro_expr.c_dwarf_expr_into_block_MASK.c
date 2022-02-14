
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pe_block; int pe_length; scalar_t__ pe_invalid; int * pe_dbg; } ;
typedef int Dwarf_Unsigned ;
typedef TYPE_1__* Dwarf_P_Expr ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;
typedef int Dwarf_Addr ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;

Dwarf_Addr
FUNC_2(Dwarf_P_Expr VAR_3, Dwarf_Unsigned *VAR_4,
    Dwarf_Error *VAR_5)
{
 Dwarf_Debug VAR_6;

 VAR_6 = VAR_3 != ((void*)0) ? VAR_3->pe_dbg : ((void*)0);

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
  FUNC_0(VAR_6, VAR_5, VAR_0);
  return ((Dwarf_Addr) (uintptr_t) VAR_2);
 }

 if (VAR_3->pe_block == ((void*)0) || VAR_3->pe_invalid)
  if (FUNC_1(VAR_3, VAR_5) != VAR_1)
   return ((Dwarf_Addr) (uintptr_t) VAR_2);

 *VAR_4 = VAR_3->pe_length;

 return ((Dwarf_Addr) (uintptr_t) VAR_3->pe_block);
}
