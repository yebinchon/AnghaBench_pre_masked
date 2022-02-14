
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* dbg_iface; } ;
struct TYPE_6__ {scalar_t__ eo_seccnt; struct TYPE_6__* eo_shdr; struct TYPE_6__* eo_data; struct TYPE_6__* ed_alloc; struct TYPE_6__* object; } ;
typedef scalar_t__ Dwarf_Unsigned ;
typedef TYPE_1__ Dwarf_Obj_Access_Interface ;
typedef TYPE_1__ Dwarf_Elf_Object ;
typedef TYPE_3__* Dwarf_Debug ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(Dwarf_Debug VAR_0)
{
 Dwarf_Obj_Access_Interface *VAR_1;
 Dwarf_Elf_Object *VAR_2;
 int VAR_3;

 VAR_1 = VAR_0->dbg_iface;
 FUNC_0(VAR_1 != ((void*)0));

 VAR_2 = VAR_1->object;
 FUNC_0(VAR_2 != ((void*)0));

 if (VAR_2->eo_data) {
  for (VAR_3 = 0; (Dwarf_Unsigned) VAR_3 < VAR_2->eo_seccnt; VAR_3++) {
   if (VAR_2->eo_data[VAR_3].ed_alloc)
    FUNC_1(VAR_2->eo_data[VAR_3].ed_alloc);
  }
  FUNC_1(VAR_2->eo_data);
 }
 if (VAR_2->eo_shdr)
  FUNC_1(VAR_2->eo_shdr);

 FUNC_1(VAR_2);
 FUNC_1(VAR_1);

 VAR_0->dbg_iface = ((void*)0);
}
