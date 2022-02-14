
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* links; } ;
typedef TYPE_1__ vertex_t ;
typedef size_t uint32_t ;
typedef TYPE_1__ link_t ;
struct TYPE_6__ {size_t adj_list_size; TYPE_1__* vl_split_count; int * srcdest2vl_table; int * adj_list; } ;
typedef TYPE_3__ dfsssp_context_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int **) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 dfsssp_context_t *VAR_1 = (dfsssp_context_t *) VAR_0;
 vertex_t *VAR_2 = (vertex_t *) (VAR_1->adj_list);
 uint32_t VAR_3 = 0;
 link_t *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);


 for (VAR_3 = 0; VAR_3 < VAR_1->adj_list_size; VAR_3++) {
  VAR_4 = VAR_2[VAR_3].links;
  while (VAR_4) {
   VAR_5 = VAR_4;
   VAR_4 = VAR_4->next;
   FUNC_0(VAR_5);
  }
 }
 FUNC_0(VAR_2);
 VAR_1->adj_list = ((void*)0);
 VAR_1->adj_list_size = 0;





 FUNC_1(&(VAR_1->srcdest2vl_table));
 VAR_1->srcdest2vl_table = ((void*)0);

 if (VAR_1->vl_split_count) {
  FUNC_0(VAR_1->vl_split_count);
  VAR_1->vl_split_count = ((void*)0);
 }
}
