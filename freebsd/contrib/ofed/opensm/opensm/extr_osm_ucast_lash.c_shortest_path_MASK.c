
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ q_state; int id; int used_channels; int * dij_channels; TYPE_2__* node; } ;
typedef TYPE_3__ switch_t ;
struct TYPE_11__ {TYPE_3__** switches; } ;
typedef TYPE_4__ lash_t ;
typedef int cl_list_t ;
struct TYPE_9__ {unsigned int num_links; TYPE_1__** links; } ;
struct TYPE_8__ {size_t switch_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,TYPE_3__**) ;
 int FUNC_5 (int *,TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(lash_t * VAR_1, int VAR_2)
{
 switch_t **VAR_3 = VAR_1->switches, *VAR_4, *VAR_5;
 unsigned int VAR_6;
 cl_list_t VAR_7;

 FUNC_1(&VAR_7);
 FUNC_3(&VAR_7, 20);

 FUNC_5(&VAR_7, VAR_3[VAR_2]);

 while (!FUNC_0(&VAR_7)) {
  FUNC_4(&VAR_7, &VAR_4);
  for (VAR_6 = 0; VAR_6 < VAR_4->node->num_links; VAR_6++) {
   VAR_5 = VAR_3[VAR_4->node->links[VAR_6]->switch_id];
   if (VAR_5->q_state == VAR_0) {
    FUNC_5(&VAR_7, VAR_5);
    VAR_4->dij_channels[VAR_4->used_channels++] = VAR_5->id;
   }
  }
 }

 FUNC_2(&VAR_7);
}
