
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ds_size; scalar_t__ ds_data; } ;
typedef int Dwarf_Signed ;
typedef TYPE_1__ Dwarf_Section ;
typedef scalar_t__ Dwarf_Off ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (int *,char*) ;
 int FUNC_2 (char*) ;

int
FUNC_3(Dwarf_Debug VAR_5, Dwarf_Off VAR_6, char **VAR_7,
    Dwarf_Signed *VAR_8, Dwarf_Error *VAR_9)
{
 Dwarf_Section *VAR_10;

 if (VAR_5 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == ((void*)0)) {
  FUNC_0(VAR_5, VAR_9, VAR_0);
  return (VAR_2);
 }

 VAR_10 = FUNC_1(VAR_5, ".debug_str");
 if (VAR_10 == ((void*)0)) {
  FUNC_0(VAR_5, VAR_9, VAR_1);
  return (VAR_3);
 }

 if (VAR_6 > VAR_10->ds_size) {
  FUNC_0(VAR_5, VAR_9, VAR_0);
  return (VAR_2);
 }

 if (VAR_6 == VAR_10->ds_size) {
  FUNC_0(VAR_5, VAR_9, VAR_1);
  return (VAR_3);
 }

 *VAR_7 = (char *) VAR_10->ds_data + VAR_6;
 *VAR_8 = FUNC_2(*VAR_7);

 return (VAR_4);
}
