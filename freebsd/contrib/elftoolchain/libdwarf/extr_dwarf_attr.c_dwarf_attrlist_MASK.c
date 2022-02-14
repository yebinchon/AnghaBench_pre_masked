
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ** die_attrarray; int die_attr; TYPE_1__* die_ab; int * die_dbg; } ;
struct TYPE_4__ {scalar_t__ ab_atnum; } ;
typedef int Dwarf_Signed ;
typedef int Dwarf_Error ;
typedef TYPE_2__* Dwarf_Die ;
typedef int * Dwarf_Debug ;
typedef int * Dwarf_Attribute ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;
 int VAR_6 ;
 int ** FUNC_3 (int) ;

int
FUNC_4(Dwarf_Die VAR_7, Dwarf_Attribute **VAR_8,
    Dwarf_Signed *VAR_9, Dwarf_Error *VAR_10)
{
 Dwarf_Attribute VAR_11;
 Dwarf_Debug VAR_12;
 int VAR_13;

 VAR_12 = VAR_7 != ((void*)0) ? VAR_7->die_dbg : ((void*)0);

 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0)) {
  FUNC_0(VAR_12, VAR_10, VAR_0);
  return (VAR_3);
 }

 if (VAR_7->die_ab->ab_atnum == 0) {
  FUNC_0(VAR_12, VAR_10, VAR_2);
  return (VAR_4);
 }

 *VAR_9 = VAR_7->die_ab->ab_atnum;

 if (VAR_7->die_attrarray != ((void*)0)) {
  *VAR_8 = VAR_7->die_attrarray;
  return (VAR_5);
 }

 if ((VAR_7->die_attrarray = FUNC_3(*VAR_9 * sizeof(Dwarf_Attribute)))
     == ((void*)0)) {
  FUNC_0(VAR_12, VAR_10, VAR_1);
  return (VAR_3);
 }

 for (VAR_13 = 0, VAR_11 = FUNC_1(&VAR_7->die_attr);
      VAR_13 < *VAR_9 && VAR_11 != ((void*)0); VAR_13++, VAR_11 = FUNC_2(VAR_11, VAR_6))
  VAR_7->die_attrarray[VAR_13] = VAR_11;

 *VAR_8 = VAR_7->die_attrarray;

 return (VAR_5);
}
