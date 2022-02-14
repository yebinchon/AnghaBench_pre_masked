
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * fde_dbg; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Signed ;
typedef TYPE_1__* Dwarf_P_Fde ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (TYPE_1__*,int,int ,int ,int *) ;

Dwarf_P_Fde
FUNC_2(Dwarf_P_Fde VAR_4, Dwarf_Unsigned VAR_5, Dwarf_Signed VAR_6,
    Dwarf_Error *VAR_7)
{
 int VAR_8;
 Dwarf_Debug VAR_9;

 VAR_9 = VAR_4 != ((void*)0) ? VAR_4->fde_dbg : ((void*)0);

 if (VAR_4 == ((void*)0) || VAR_5 > 0x3f) {
  FUNC_0(VAR_9, VAR_7, VAR_1);
  return (VAR_3);
 }

 VAR_8 = FUNC_1(VAR_4, VAR_0 | (VAR_5 & 0x3f),
     VAR_6, 0, VAR_7);

 if (VAR_8 != VAR_2)
  return (VAR_3);

 return (VAR_4);
}
