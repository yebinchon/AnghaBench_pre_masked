
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* dbg_iface; } ;
struct TYPE_7__ {int * eo_elf; } ;
struct TYPE_6__ {TYPE_2__* object; } ;
typedef int Elf ;
typedef int Dwarf_Error ;
typedef TYPE_2__ Dwarf_Elf_Object ;
typedef TYPE_3__* Dwarf_Debug ;


 int FUNC_0 (TYPE_3__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_1(Dwarf_Debug VAR_3, Elf **VAR_4, Dwarf_Error *VAR_5)
{
 Dwarf_Elf_Object *VAR_6;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
  FUNC_0(VAR_3, VAR_5, VAR_0);
  return (VAR_1);
 }

 VAR_6 = VAR_3->dbg_iface->object;
 *VAR_4 = VAR_6->eo_elf;

 return (VAR_2);
}
