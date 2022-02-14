
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct link_map {TYPE_2__* l_prev; TYPE_1__* l_next; } ;
struct TYPE_9__ {TYPE_1__* r_map; } ;
struct TYPE_8__ {struct link_map linkmap; } ;
struct TYPE_7__ {TYPE_1__* l_next; } ;
struct TYPE_6__ {TYPE_2__* l_prev; } ;
typedef TYPE_3__ Obj_Entry ;


 TYPE_4__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(Obj_Entry *VAR_1)
{
    struct link_map *VAR_2 = &VAR_1->linkmap;

    if (VAR_2->l_prev == ((void*)0)) {
 if ((VAR_0.r_map = VAR_2->l_next) != ((void*)0))
     VAR_2->l_next->l_prev = ((void*)0);
 return;
    }

    if ((VAR_2->l_prev->l_next = VAR_2->l_next) != ((void*)0))
 VAR_2->l_next->l_prev = VAR_2->l_prev;
}
