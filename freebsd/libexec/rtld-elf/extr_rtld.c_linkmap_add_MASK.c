
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct link_map {struct link_map* l_next; struct link_map* l_prev; int l_offs; int l_ld; int l_addr; int l_name; } ;
struct TYPE_7__ {struct link_map linkmap; } ;
struct TYPE_6__ {struct link_map* r_map; } ;
struct TYPE_5__ {int relocbase; struct link_map linkmap; int dynamic; int mapbase; int path; } ;
typedef TYPE_1__ Obj_Entry ;


 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_0(Obj_Entry *VAR_2)
{
    struct link_map *VAR_3 = &VAR_2->linkmap;
    struct link_map *VAR_4;

    VAR_2->linkmap.l_name = VAR_2->path;
    VAR_2->linkmap.l_addr = VAR_2->mapbase;
    VAR_2->linkmap.l_ld = VAR_2->dynamic;





    if (VAR_1.r_map == ((void*)0)) {
 VAR_1.r_map = VAR_3;
 return;
    }





    for (VAR_4 = VAR_1.r_map;
      VAR_4->l_next != ((void*)0) && VAR_4->l_next != &VAR_0.linkmap;
      VAR_4 = VAR_4->l_next)
 ;


    VAR_3->l_prev = VAR_4;
    VAR_3->l_next = VAR_4->l_next;
    if (VAR_3->l_next != ((void*)0))
 VAR_3->l_next->l_prev = VAR_3;
    VAR_4->l_next = VAR_3;
}
