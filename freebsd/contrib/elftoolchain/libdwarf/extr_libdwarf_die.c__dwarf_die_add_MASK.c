
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_7__ {int cu_dbg; } ;
struct TYPE_6__ {int die_dbg; TYPE_2__* die_cu; int * die_ab; void* die_abnum; void* die_offset; } ;
typedef int Dwarf_Error ;
typedef TYPE_1__* Dwarf_Die ;
typedef int Dwarf_Debug ;
typedef TYPE_2__* Dwarf_CU ;
typedef int * Dwarf_Abbrev ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__**,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(Dwarf_CU VAR_1, uint64_t VAR_2, uint64_t VAR_3, Dwarf_Abbrev VAR_4,
    Dwarf_Die *VAR_5, Dwarf_Error *VAR_6)
{
 Dwarf_Debug VAR_7;
 Dwarf_Die VAR_8;
 int VAR_9;

 FUNC_1(VAR_1 != ((void*)0));
 FUNC_1(VAR_4 != ((void*)0));

 VAR_7 = VAR_1->cu_dbg;

 if ((VAR_9 = FUNC_0(VAR_7, &VAR_8, VAR_6)) != VAR_0)
  return (VAR_9);

 VAR_8->die_offset = VAR_2;
 VAR_8->die_abnum = VAR_3;
 VAR_8->die_ab = VAR_4;
 VAR_8->die_cu = VAR_1;
 VAR_8->die_dbg = VAR_1->cu_dbg;

 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_8;

 return (VAR_0);
}
