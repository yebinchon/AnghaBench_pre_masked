
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct block {int level; int ef; int et; struct block* link; } ;
struct TYPE_5__ {int n_blocks; struct block** levels; TYPE_1__** blocks; } ;
typedef TYPE_2__ opt_state_t ;
struct TYPE_4__ {scalar_t__ in_edges; } ;


 int FUNC_0 (struct block*) ;
 int FUNC_1 (struct block*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(opt_state_t *VAR_0, struct block *VAR_1)
{
 int VAR_2;
 struct block *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->n_blocks; ++VAR_2)
  VAR_0->blocks[VAR_2]->in_edges = 0;





 for (VAR_2 = VAR_1->level; VAR_2 > 0; --VAR_2) {
  for (VAR_3 = VAR_0->levels[VAR_2]; VAR_3 != 0; VAR_3 = VAR_3->link) {
   FUNC_2(&VAR_3->et, FUNC_1(VAR_3));
   FUNC_2(&VAR_3->ef, FUNC_0(VAR_3));
  }
 }
}
