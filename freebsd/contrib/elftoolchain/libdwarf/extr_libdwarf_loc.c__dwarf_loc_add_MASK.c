
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* u; int * at_ld; } ;
struct TYPE_9__ {int cu_length_size; int cu_version; int cu_pointer_size; int * cu_dbg; } ;
struct TYPE_8__ {TYPE_3__* die_cu; } ;
struct TYPE_7__ {int u64; int * u8p; } ;
typedef int Dwarf_Error ;
typedef TYPE_2__* Dwarf_Die ;
typedef int * Dwarf_Debug ;
typedef TYPE_3__* Dwarf_CU ;
typedef TYPE_4__* Dwarf_Attribute ;


 int FUNC_0 (int *,int **,int *,int ,int ,int,int ,int *) ;
 int FUNC_1 (int) ;

int
FUNC_2(Dwarf_Die VAR_0, Dwarf_Attribute VAR_1, Dwarf_Error *VAR_2)
{
 Dwarf_Debug VAR_3;
 Dwarf_CU VAR_4;
 int VAR_5;

 FUNC_1(VAR_1->at_ld == ((void*)0));
 FUNC_1(VAR_1->u[1].u8p != ((void*)0));
 FUNC_1(VAR_1->u[0].u64 > 0);

 VAR_4 = VAR_0->die_cu;
 FUNC_1(VAR_4 != ((void*)0));

 VAR_3 = VAR_4->cu_dbg;
 FUNC_1(VAR_3 != ((void*)0));

 VAR_5 = FUNC_0(VAR_3, &VAR_1->at_ld, VAR_1->u[1].u8p,
     VAR_1->u[0].u64, VAR_4->cu_pointer_size, VAR_4->cu_length_size == 4 ? 4 : 8,
     VAR_4->cu_version, VAR_2);

 return (VAR_5);
}
