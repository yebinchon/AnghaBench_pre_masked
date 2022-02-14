
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ab_children; } ;
typedef scalar_t__ Dwarf_Signed ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Abbrev ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_1(Dwarf_Abbrev VAR_3, Dwarf_Signed *VAR_4,
    Dwarf_Error *VAR_5)
{

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
  FUNC_0(((void*)0), VAR_5, VAR_0);
  return (VAR_1);
 }

 *VAR_4 = (Dwarf_Signed) VAR_3->ab_children;

 return (VAR_2);
}
