
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_hashinfo {int lock; struct tcf_common** htab; int hmask; } ;
struct tcf_common {struct tcf_common* tcfc_next; int tcfc_index; } ;


 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct tcf_common *VAR_0, struct tcf_hashinfo *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_0->tcfc_index, VAR_1->hmask);

 FUNC_1(VAR_1->lock);
 VAR_0->tcfc_next = VAR_1->htab[VAR_2];
 VAR_1->htab[VAR_2] = VAR_0;
 FUNC_2(VAR_1->lock);
}
