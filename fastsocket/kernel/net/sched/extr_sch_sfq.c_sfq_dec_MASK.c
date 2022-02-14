
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sfq_sched_data {scalar_t__ max_depth; TYPE_1__* qs; TYPE_2__* dep; } ;
typedef size_t sfq_index ;
struct TYPE_4__ {size_t next; size_t prev; } ;
struct TYPE_3__ {scalar_t__ qlen; } ;


 int FUNC_0 (struct sfq_sched_data*,size_t) ;

__attribute__((used)) static inline void FUNC_1(struct sfq_sched_data *VAR_0, sfq_index VAR_1)
{
 sfq_index VAR_2, VAR_3;

 VAR_3 = VAR_0->dep[VAR_1].next;
 VAR_2 = VAR_0->dep[VAR_1].prev;
 VAR_0->dep[VAR_2].next = VAR_3;
 VAR_0->dep[VAR_3].prev = VAR_2;

 if (VAR_3 == VAR_2 && VAR_0->max_depth == VAR_0->qs[VAR_1].qlen + 1)
  VAR_0->max_depth--;

 FUNC_0(VAR_0, VAR_1);
}
