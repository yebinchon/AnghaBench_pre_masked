
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int context_depth; int num_free_objects; struct TYPE_3__* next; } ;
typedef TYPE_1__ page_entry ;
struct TYPE_4__ {TYPE_1__** pages; scalar_t__* page_tails; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;

void
FUNC_2 (int VAR_2)
{
  page_entry *VAR_3;
  FUNC_1 ("Head=%p, Tail=%p:\n", (void *) VAR_0.pages[VAR_2],
   (void *) VAR_0.page_tails[VAR_2]);
  VAR_3 = VAR_0.pages[VAR_2];
  while (VAR_3 != ((void*)0))
    {
      FUNC_1 ("%p(%1d|%3d) -> ", (void *) VAR_3, VAR_3->context_depth,
       VAR_3->num_free_objects);
      VAR_3 = VAR_3->next;
    }
  FUNC_1 ("NULL\n");
  FUNC_0 (VAR_1);
}
