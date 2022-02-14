
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct edge {int* edom; struct block* succ; int pred; } ;
struct TYPE_4__ {struct block* succ; } ;
struct block {TYPE_1__ et; } ;
struct TYPE_5__ {int edgewords; scalar_t__ done; int * edges; } ;
typedef TYPE_2__ opt_state_t ;
typedef int bpf_u_int32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct block*) ;
 scalar_t__ FUNC_1 (struct block*) ;
 struct block* FUNC_2 (struct block*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,struct block*) ;

__attribute__((used)) static void
FUNC_5(opt_state_t *VAR_1, struct edge *VAR_2)
{
 register int VAR_3, VAR_4;
 register struct block *VAR_5;

 if (FUNC_1(VAR_2->succ) == 0)
  return;

 if (FUNC_1(VAR_2->succ) == FUNC_0(VAR_2->succ)) {




  if (!FUNC_4(VAR_2->pred, VAR_2->succ->et.succ)) {
   VAR_1->done = 0;
   VAR_2->succ = FUNC_1(VAR_2->succ);
  }
 }







 top:
 for (VAR_3 = 0; VAR_3 < VAR_1->edgewords; ++VAR_3) {
  register bpf_u_int32 VAR_6 = VAR_2->edom[VAR_3];

  while (VAR_6 != 0) {
   VAR_4 = FUNC_3(VAR_6);
   VAR_6 &=~ (1 << VAR_4);
   VAR_4 += VAR_3 * VAR_0;

   VAR_5 = FUNC_2(VAR_2->succ, VAR_1->edges[VAR_4]);




   if (VAR_5 != 0 && !FUNC_4(VAR_2->pred, VAR_5)) {
    VAR_1->done = 0;
    VAR_2->succ = VAR_5;
    if (FUNC_1(VAR_5) != 0)



     goto top;
    return;
   }
  }
 }
}
