
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_barrier_tournament_state {int vpid; int sense; } ;
struct ck_barrier_tournament {int tid; } ;


 int FUNC_0 (int *,int) ;

void
FUNC_1(struct ck_barrier_tournament *VAR_0,
    struct ck_barrier_tournament_state *VAR_1)
{

 VAR_1->sense = ~0;
 VAR_1->vpid = FUNC_0(&VAR_0->tid, 1);
 return;
}
