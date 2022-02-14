
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int init_scanned; scalar_t__ fini; scalar_t__ fini_array; int on_fini_list; int * needed_aux_filtees; int * needed_filtees; int * needed; scalar_t__ init_done; } ;
typedef int Objlist ;
typedef TYPE_1__ Obj_Entry ;
typedef scalar_t__ Elf_Addr ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(Obj_Entry *VAR_1, Obj_Entry *VAR_2, Objlist *VAR_3)
{
    Obj_Entry *VAR_4;

    if (VAR_1->init_scanned || VAR_1->init_done)
 return;
    VAR_1->init_scanned = 1;


    VAR_4 = FUNC_0(VAR_1);
    if (VAR_4 != ((void*)0) && VAR_1 != VAR_2)
 FUNC_4(VAR_4, VAR_2, VAR_3);


    if (VAR_1->needed != ((void*)0))
 FUNC_1(VAR_1->needed, VAR_3);
    if (VAR_1->needed_filtees != ((void*)0))
 FUNC_1(VAR_1->needed_filtees, VAR_3);
    if (VAR_1->needed_aux_filtees != ((void*)0))
 FUNC_1(VAR_1->needed_aux_filtees, VAR_3);


    FUNC_3(VAR_3, VAR_1);


    if ((VAR_1->fini != (Elf_Addr)((void*)0) || VAR_1->fini_array != (Elf_Addr)((void*)0))
      && !VAR_1->on_fini_list) {
 FUNC_2(&VAR_0, VAR_1);
 VAR_1->on_fini_list = 1;
    }
}
