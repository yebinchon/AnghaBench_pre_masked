
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct block {int level; scalar_t__* dom; int id; struct block* link; } ;
struct TYPE_5__ {int n_blocks; int nodewords; struct block** levels; int * all_dom_sets; } ;
typedef TYPE_1__ opt_state_t ;
typedef int bpf_u_int32 ;
struct TYPE_7__ {int dom; } ;
struct TYPE_6__ {int dom; } ;


 TYPE_4__* FUNC_0 (struct block*) ;
 TYPE_3__* FUNC_1 (struct block*) ;
 int FUNC_2 (scalar_t__*,int ) ;
 int FUNC_3 (int ,scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_4(opt_state_t *VAR_0, struct block *VAR_1)
{
 int VAR_2;
 struct block *VAR_3;
 bpf_u_int32 *VAR_4;




 VAR_4 = VAR_0->all_dom_sets;
 VAR_2 = VAR_0->n_blocks * VAR_0->nodewords;
 while (--VAR_2 >= 0)
  *VAR_4++ = 0xFFFFFFFFU;

 for (VAR_2 = VAR_0->nodewords; --VAR_2 >= 0;)
  VAR_1->dom[VAR_2] = 0;


 for (VAR_2 = VAR_1->level; VAR_2 >= 0; --VAR_2) {
  for (VAR_3 = VAR_0->levels[VAR_2]; VAR_3; VAR_3 = VAR_3->link) {
   FUNC_2(VAR_3->dom, VAR_3->id);
   if (FUNC_1(VAR_3) == 0)
    continue;
   FUNC_3(FUNC_1(VAR_3)->dom, VAR_3->dom, VAR_0->nodewords);
   FUNC_3(FUNC_0(VAR_3)->dom, VAR_3->dom, VAR_0->nodewords);
  }
 }
}
