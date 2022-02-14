
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ln_lineno; } ;
typedef int Dwarf_Unsigned ;
typedef TYPE_1__* Dwarf_Line ;
typedef int Dwarf_Error ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_1(Dwarf_Line VAR_3, Dwarf_Unsigned *VAR_4, Dwarf_Error *VAR_5)
{

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
  FUNC_0(((void*)0), VAR_5, VAR_0);
  return (VAR_1);
 }

 *VAR_4 = VAR_3->ln_lineno;

 return (VAR_2);
}
