
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inet_frags {int lock; } ;
struct inet_frag_queue {TYPE_1__* net; int lru_list; int list; } ;
struct TYPE_2__ {int nqueues; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct inet_frag_queue *VAR_0, struct inet_frags *VAR_1)
{
 FUNC_2(&VAR_1->lock);
 FUNC_0(&VAR_0->list);
 FUNC_1(&VAR_0->lru_list);
 VAR_0->net->nqueues--;
 FUNC_3(&VAR_1->lock);
}
