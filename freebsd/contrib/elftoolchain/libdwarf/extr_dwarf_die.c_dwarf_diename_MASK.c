
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* die_name; int * die_dbg; } ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Die ;
typedef int * Dwarf_Debug ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_1(Dwarf_Die VAR_5, char **VAR_6, Dwarf_Error *VAR_7)
{
 Dwarf_Debug VAR_8;

 VAR_8 = VAR_5 != ((void*)0) ? VAR_5->die_dbg : ((void*)0);

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0)) {
  FUNC_0(VAR_8, VAR_7, VAR_0);
  return (VAR_2);
 }

 if (VAR_5->die_name == ((void*)0)) {
  FUNC_0(VAR_8, VAR_7, VAR_1);
  return (VAR_3);
 }

 *VAR_6 = VAR_5->die_name;

 return (VAR_4);
}
