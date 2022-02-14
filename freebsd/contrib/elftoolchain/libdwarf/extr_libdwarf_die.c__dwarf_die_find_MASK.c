
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int cu_next_offset; int cu_dwarf_size; scalar_t__ cu_is_info; } ;
struct TYPE_10__ {int * dbg_types_sec; int * dbg_info_sec; } ;
struct TYPE_9__ {TYPE_2__* die_dbg; TYPE_3__* die_cu; } ;
typedef int Dwarf_Unsigned ;
typedef int Dwarf_Section ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Die ;
typedef TYPE_2__* Dwarf_Debug ;
typedef TYPE_3__* Dwarf_CU ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,TYPE_3__*,int ,int ,int ,TYPE_1__**,int ,int *) ;

Dwarf_Die
FUNC_1(Dwarf_Die VAR_1, Dwarf_Unsigned VAR_2)
{
 Dwarf_Debug VAR_3;
 Dwarf_Section *VAR_4;
 Dwarf_CU VAR_5;
 Dwarf_Die VAR_6;
 Dwarf_Error VAR_7;
 int VAR_8;

 VAR_5 = VAR_1->die_cu;
 VAR_3 = VAR_1->die_dbg;
 VAR_4 = VAR_5->cu_is_info ? VAR_3->dbg_info_sec : VAR_3->dbg_types_sec;

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_5->cu_dwarf_size, VAR_2,
     VAR_5->cu_next_offset, &VAR_6, 0, &VAR_7);

 if (VAR_8 == VAR_0)
  return (VAR_6);
 else
  return (((void*)0));
}
