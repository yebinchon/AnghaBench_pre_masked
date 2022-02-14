
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* die_cu; } ;
struct TYPE_4__ {int cu_is_info; } ;
typedef TYPE_2__* Dwarf_Die ;
typedef int Dwarf_Bool ;


 int FUNC_0 (int ) ;

Dwarf_Bool
FUNC_1(Dwarf_Die VAR_0)
{

 FUNC_0(VAR_0 != ((void*)0));

 return (VAR_0->die_cu->cu_is_info);
}
