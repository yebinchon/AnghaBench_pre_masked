
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * die_dbg; } ;
typedef int Dwarf_Half ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Die ;
typedef int * Dwarf_Debug ;
typedef int * Dwarf_Attribute ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (TYPE_1__*,int ) ;

int
FUNC_2(Dwarf_Die VAR_5, Dwarf_Half VAR_6, Dwarf_Attribute *VAR_7,
    Dwarf_Error *VAR_8)
{
 Dwarf_Debug VAR_9;
 Dwarf_Attribute VAR_10;

 VAR_9 = VAR_5 != ((void*)0) ? VAR_5->die_dbg : ((void*)0);

 if (VAR_5 == ((void*)0) || VAR_7 == ((void*)0)) {
  FUNC_0(VAR_9, VAR_8, VAR_0);
  return (VAR_2);
 }

 if ((VAR_10 = FUNC_1(VAR_5, VAR_6)) == ((void*)0)) {
  FUNC_0(VAR_9, VAR_8, VAR_1);
  return (VAR_3);
 }

 *VAR_7 = VAR_10;

 return (VAR_4);
}
