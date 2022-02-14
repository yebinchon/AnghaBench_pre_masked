
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int cu_next_offset; int cu_dwarf_size; scalar_t__ cu_is_info; } ;
struct TYPE_13__ {int * dbg_types_sec; int * dbg_info_sec; } ;
struct TYPE_12__ {int die_next_off; TYPE_3__* die_dbg; TYPE_4__* die_cu; TYPE_1__* die_ab; } ;
struct TYPE_11__ {scalar_t__ ab_children; } ;
typedef int Dwarf_Section ;
typedef int Dwarf_Error ;
typedef TYPE_2__* Dwarf_Die ;
typedef TYPE_3__* Dwarf_Debug ;
typedef TYPE_4__* Dwarf_CU ;


 int FUNC_0 (TYPE_3__*,int *,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*,int *,TYPE_4__*,int ,int ,int ,TYPE_2__**,int ,int *) ;

int
FUNC_2(Dwarf_Die VAR_7, Dwarf_Die *VAR_8, Dwarf_Error *VAR_9)
{
 Dwarf_Debug VAR_10;
 Dwarf_Section *VAR_11;
 Dwarf_CU VAR_12;
 int VAR_13;

 VAR_10 = VAR_7 != ((void*)0) ? VAR_7->die_dbg : ((void*)0);

 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0)) {
  FUNC_0(VAR_10, VAR_9, VAR_1);
  return (VAR_4);
 }

 if (VAR_7->die_ab->ab_children == VAR_0)
  return (VAR_5);

 VAR_10 = VAR_7->die_dbg;
 VAR_12 = VAR_7->die_cu;
 VAR_11 = VAR_12->cu_is_info ? VAR_10->dbg_info_sec : VAR_10->dbg_types_sec;
 VAR_13 = FUNC_1(VAR_7->die_dbg, VAR_11, VAR_12, VAR_12->cu_dwarf_size,
     VAR_7->die_next_off, VAR_12->cu_next_offset, VAR_8, 0, VAR_9);

 if (VAR_13 == VAR_3) {
  FUNC_0(VAR_10, VAR_9, VAR_3);
  return (VAR_5);
 } else if (VAR_13 != VAR_2)
  return (VAR_4);

 return (VAR_6);
}
