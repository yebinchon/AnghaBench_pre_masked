
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cu_next_offset; int cu_dwarf_size; } ;
typedef int Dwarf_Section ;
typedef int Dwarf_Off ;
typedef int Dwarf_Error ;
typedef int Dwarf_Die ;
typedef int * Dwarf_Debug ;
typedef TYPE_1__* Dwarf_CU ;


 int FUNC_0 (int *,int *,TYPE_1__*,int ,int ,int ,int *,int ,int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(Dwarf_Debug VAR_0, Dwarf_Section *VAR_1, Dwarf_CU VAR_2,
    Dwarf_Off VAR_3, Dwarf_Die *VAR_4, Dwarf_Error *VAR_5)
{

 FUNC_1(VAR_0 != ((void*)0) && VAR_2 != ((void*)0) && VAR_4 != ((void*)0));

 return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_2->cu_dwarf_size,
     VAR_3, VAR_2->cu_next_offset, VAR_4, 0, VAR_5));
}
