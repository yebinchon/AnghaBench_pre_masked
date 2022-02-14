
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum Dwarf_ISA { ____Placeholder_Dwarf_ISA } Dwarf_ISA ;
struct TYPE_4__ {int dbgp_isa; } ;
typedef TYPE_1__* Dwarf_P_Debug ;
typedef int Dwarf_Error ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_1(Dwarf_P_Debug VAR_4, enum Dwarf_ISA VAR_5,
    Dwarf_Error *VAR_6)
{

 if (VAR_4 == ((void*)0) || VAR_5 >= VAR_3) {
  FUNC_0(VAR_4, VAR_6, VAR_0);
  return (VAR_1);
 }

 VAR_4->dbgp_isa = VAR_5;

 return (VAR_2);
}
