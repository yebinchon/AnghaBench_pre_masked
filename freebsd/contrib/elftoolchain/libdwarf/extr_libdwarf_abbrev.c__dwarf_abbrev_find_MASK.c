
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int entry ;
struct TYPE_12__ {scalar_t__ ab_entry; } ;
struct TYPE_11__ {int cu_abbrev_loaded; scalar_t__ cu_abbrev_offset_cur; int cu_dbg; int cu_abbrev_hash; } ;
struct TYPE_10__ {scalar_t__ ds_size; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef TYPE_1__ Dwarf_Section ;
typedef int Dwarf_Error ;
typedef TYPE_2__* Dwarf_CU ;
typedef TYPE_3__* Dwarf_Abbrev ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__*,int,TYPE_3__*) ;
 int FUNC_1 (int ,TYPE_2__*,scalar_t__*,TYPE_3__**,int *) ;
 TYPE_1__* FUNC_2 (int ,char*) ;
 int VAR_2 ;

int
FUNC_3(Dwarf_CU VAR_3, uint64_t VAR_4, Dwarf_Abbrev *VAR_5,
    Dwarf_Error *VAR_6)
{
 Dwarf_Abbrev VAR_7;
 Dwarf_Section *VAR_8;
 Dwarf_Unsigned VAR_9;
 int VAR_10;

 if (VAR_4 == 0)
  return (VAR_1);


 FUNC_0(VAR_2, VAR_3->cu_abbrev_hash, &VAR_4, sizeof(VAR_4), VAR_7);
 if (VAR_7 != ((void*)0)) {
  *VAR_5 = VAR_7;
  return (VAR_0);
 }

 if (VAR_3->cu_abbrev_loaded) {
  return (VAR_1);
 }


 VAR_8 = FUNC_2(VAR_3->cu_dbg, ".debug_abbrev");
 if (VAR_8 == ((void*)0))
  return (VAR_1);

 VAR_9 = VAR_3->cu_abbrev_offset_cur;
 while (VAR_9 < VAR_8->ds_size) {
  VAR_10 = FUNC_1(VAR_3->cu_dbg, VAR_3, &VAR_9, &VAR_7, VAR_6);
  if (VAR_10 != VAR_0)
   return (VAR_10);
  if (VAR_7->ab_entry == VAR_4) {
   VAR_3->cu_abbrev_offset_cur = VAR_9;
   *VAR_5 = VAR_7;
   return (VAR_0);
  }
  if (VAR_7->ab_entry == 0) {
   VAR_3->cu_abbrev_offset_cur = VAR_9;
   VAR_3->cu_abbrev_loaded = 1;
   break;
  }
 }

 return (VAR_1);
}
