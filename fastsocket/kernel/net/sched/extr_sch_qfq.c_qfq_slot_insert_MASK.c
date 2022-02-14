
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qfq_group {int S; int slot_shift; int front; int full_slots; int * slots; } ;
struct qfq_class {int next; int F; int S; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct qfq_group *VAR_1, struct qfq_class *VAR_2,
       u64 VAR_3)
{
 u64 VAR_4 = (VAR_3 - VAR_1->S) >> VAR_1->slot_shift;
 unsigned int VAR_5;

 if (FUNC_2(VAR_4 > VAR_0 - 2)) {
  u64 VAR_6 = VAR_3 - VAR_1->S -
   ((u64)(VAR_0 - 2)<<VAR_1->slot_shift);
  VAR_2->S -= VAR_6;
  VAR_2->F -= VAR_6;
  VAR_4 = VAR_0 - 2;
 }

 VAR_5 = (VAR_1->front + VAR_4) % VAR_0;

 FUNC_1(&VAR_2->next, &VAR_1->slots[VAR_5]);
 FUNC_0(VAR_4, &VAR_1->full_slots);
}
