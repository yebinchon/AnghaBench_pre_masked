
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_hashinfo {int lock; struct tcf_common** htab; int hmask; } ;
struct tcf_common {int tcfc_rate_est; int tcfc_bstats; struct tcf_common* tcfc_next; int tcfc_index; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct tcf_common*) ;
 unsigned int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct tcf_common *VAR_0, struct tcf_hashinfo *VAR_1)
{
 unsigned int VAR_2 = FUNC_3(VAR_0->tcfc_index, VAR_1->hmask);
 struct tcf_common **VAR_3;

 for (VAR_3 = &VAR_1->htab[VAR_2]; *VAR_3; VAR_3 = &(*VAR_3)->tcfc_next) {
  if (*VAR_3 == VAR_0) {
   FUNC_4(VAR_1->lock);
   *VAR_3 = VAR_0->tcfc_next;
   FUNC_5(VAR_1->lock);
   FUNC_1(&VAR_0->tcfc_bstats,
        &VAR_0->tcfc_rate_est);
   FUNC_2(VAR_0);
   return;
  }
 }
 FUNC_0(1);
}
