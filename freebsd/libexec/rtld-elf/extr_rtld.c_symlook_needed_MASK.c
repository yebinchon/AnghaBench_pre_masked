
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int st_info; } ;
struct TYPE_12__ {TYPE_1__* obj; struct TYPE_12__* next; } ;
struct TYPE_11__ {int const* defobj_out; TYPE_4__ const* sym_out; } ;
struct TYPE_10__ {int dagmembers; } ;
typedef TYPE_2__ SymLook ;
typedef int const Obj_Entry ;
typedef TYPE_3__ Needed_Entry ;
typedef TYPE_4__ const Elf_Sym ;
typedef int DoneList ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *,int *) ;

__attribute__((used)) static int
FUNC_3(SymLook *VAR_2, const Needed_Entry *VAR_3, DoneList *VAR_4)
{
    const Elf_Sym *VAR_5;
    const Needed_Entry *VAR_6;
    const Obj_Entry *VAR_7;
    SymLook VAR_8;
    int VAR_9;

    VAR_5 = ((void*)0);
    VAR_7 = ((void*)0);
    FUNC_1(&VAR_8, VAR_2);
    for (VAR_6 = VAR_3; VAR_6 != ((void*)0); VAR_6 = VAR_6->next) {
 if (VAR_6->obj == ((void*)0) ||
     (VAR_9 = FUNC_2(&VAR_8, &VAR_6->obj->dagmembers, VAR_4)) != 0)
     continue;
 if (VAR_5 == ((void*)0) || FUNC_0(VAR_8->st_info) != VAR_1) {
     VAR_5 = VAR_8;
     VAR_7 = VAR_8;
     if (FUNC_0(VAR_5->st_info) != VAR_1)
  break;
 }
    }
    if (VAR_5 != ((void*)0)) {
 VAR_2->sym_out = VAR_5;
 VAR_2->defobj_out = VAR_7;
 return (0);
    }
    return (VAR_0);
}
