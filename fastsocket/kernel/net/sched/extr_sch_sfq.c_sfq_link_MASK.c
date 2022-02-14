
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sfq_sched_data {TYPE_1__* dep; TYPE_2__* qs; } ;
typedef size_t sfq_index ;
struct TYPE_4__ {int qlen; } ;
struct TYPE_3__ {size_t next; size_t prev; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct sfq_sched_data *VAR_1, sfq_index VAR_2)
{
 sfq_index VAR_3, VAR_4;
 int VAR_5 = VAR_1->qs[VAR_2].qlen + VAR_0;

 VAR_3 = VAR_5;
 VAR_4 = VAR_1->dep[VAR_5].next;
 VAR_1->dep[VAR_2].next = VAR_4;
 VAR_1->dep[VAR_2].prev = VAR_3;
 VAR_1->dep[VAR_3].next = VAR_1->dep[VAR_4].prev = VAR_2;
}
