
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ ar_address; scalar_t__ ar_range; TYPE_2__* ar_as; } ;
struct TYPE_7__ {TYPE_1__* as_cu; } ;
struct TYPE_6__ {int * cu_dbg; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef int Dwarf_Error ;
typedef int * Dwarf_Debug ;
typedef TYPE_3__* Dwarf_Arange ;
typedef scalar_t__ Dwarf_Addr ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_1(Dwarf_Arange *VAR_5, Dwarf_Unsigned VAR_6,
    Dwarf_Addr VAR_7, Dwarf_Arange *VAR_8, Dwarf_Error *VAR_9)
{
 Dwarf_Arange VAR_10;
 Dwarf_Debug VAR_11;
 int VAR_12;

 if (VAR_5 == ((void*)0)) {
  FUNC_0(((void*)0), VAR_9, VAR_0);
  return (VAR_2);
 }

 VAR_11 = (*VAR_5)->ar_as->as_cu->cu_dbg;

 if (VAR_8 == ((void*)0) || VAR_6 == 0) {
  FUNC_0(VAR_11, VAR_9, VAR_0);
  return (VAR_2);
 }

 for (VAR_12 = 0; (Dwarf_Unsigned)VAR_12 < VAR_6; VAR_12++) {
  VAR_10 = VAR_5[VAR_12];
  if (VAR_7 >= VAR_10->ar_address && VAR_7 < VAR_10->ar_address +
      VAR_10->ar_range) {
   *VAR_8 = VAR_10;
   return (VAR_4);
  }
 }

 FUNC_0(VAR_11, VAR_9, VAR_1);

 return (VAR_3);
}
