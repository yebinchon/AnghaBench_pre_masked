
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct htb_sched {scalar_t__ drops; } ;
struct TYPE_5__ {int drop_list; TYPE_3__* q; } ;
struct TYPE_6__ {TYPE_1__ leaf; } ;
struct htb_class {int prio_activity; int prio; TYPE_2__ un; scalar_t__ level; } ;
struct TYPE_8__ {int qlen; } ;
struct TYPE_7__ {TYPE_4__ q; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct htb_sched*,struct htb_class*) ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct htb_sched *VAR_0, struct htb_class *VAR_1)
{
 FUNC_0(VAR_1->level || !VAR_1->un.leaf.q || !VAR_1->un.leaf.q->q.qlen);

 if (!VAR_1->prio_activity) {
  VAR_1->prio_activity = 1 << VAR_1->prio;
  FUNC_1(VAR_0, VAR_1);
  FUNC_2(&VAR_1->un.leaf.drop_list,
         VAR_0->drops + VAR_1->prio);
 }
}
