
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* ar_as; } ;
struct TYPE_6__ {TYPE_1__* as_cu; } ;
struct TYPE_5__ {int cu_1st_offset; int * cu_dbg; } ;
typedef int Dwarf_Off ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_CU ;
typedef TYPE_2__* Dwarf_ArangeSet ;
typedef TYPE_3__* Dwarf_Arange ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

int
FUNC_2(Dwarf_Arange VAR_3, Dwarf_Off *VAR_4,
    Dwarf_Error *VAR_5)
{
 Dwarf_CU VAR_6;
 Dwarf_ArangeSet VAR_7;

 if (VAR_3 == ((void*)0)) {
  FUNC_0(((void*)0), VAR_5, VAR_0);
  return (VAR_1);
 }

 VAR_7 = VAR_3->ar_as;
 FUNC_1(VAR_7 != ((void*)0));
 VAR_6 = VAR_7->as_cu;
 FUNC_1(VAR_6 != ((void*)0));

 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_6->cu_dbg, VAR_5, VAR_0);
  return (VAR_1);
 }

 *VAR_4 = VAR_6->cu_1st_offset;

 return (VAR_2);
}
