
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int* uset ;
struct TYPE_6__ {int edom; } ;
struct block {int level; TYPE_3__ ef; TYPE_3__ et; struct block* link; } ;
struct TYPE_5__ {int* all_edge_sets; int n_edges; int edgewords; struct block** levels; } ;
typedef TYPE_1__ opt_state_t ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(opt_state_t *VAR_0, struct block *VAR_1)
{
 int VAR_2;
 uset VAR_3;
 struct block *VAR_4;

 VAR_3 = VAR_0->all_edge_sets;
 for (VAR_2 = VAR_0->n_edges * VAR_0->edgewords; --VAR_2 >= 0; )
  VAR_3[VAR_2] = 0xFFFFFFFFU;


 FUNC_0(VAR_1->et.edom, 0, VAR_0->edgewords * sizeof(*(uset)0));
 FUNC_0(VAR_1->ef.edom, 0, VAR_0->edgewords * sizeof(*(uset)0));
 for (VAR_2 = VAR_1->level; VAR_2 >= 0; --VAR_2) {
  for (VAR_4 = VAR_0->levels[VAR_2]; VAR_4 != 0; VAR_4 = VAR_4->link) {
   FUNC_1(VAR_0, &VAR_4->et);
   FUNC_1(VAR_0, &VAR_4->ef);
  }
 }
}
